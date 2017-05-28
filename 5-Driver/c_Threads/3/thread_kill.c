#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>
#include <linux/delay.h>

static struct task_struct *thread_st;
/***********************************************************************
 * Function executed by kernel thread 
 * kernel thread signals are generally considered a horrible evil and 
 * signals are for user space.seems like there is a function to set 
 * allow_signal() that only allows SIGKILL otherwise signals are 
 * silently dropped. 
***********************************************************************/

static int thread_fn(void *unused)
{
	/** Allow the SIGKILL signal */
	allow_signal(SIGKILL);
	while (!kthread_should_stop())
	{
		printk(KERN_INFO "Thread Running\n");
		ssleep(5);
		if (signal_pending(current))
		{
			break;
		}
	}
	printk(KERN_INFO "Thread Stopping\n");
	thread_st = NULL;
	do_exit(0);
}
/***********************************************************************
						Module Initialization
 **********************************************************************/ 
 
static int __init init_thread(void)
{
	printk(KERN_INFO "Creating Thread\n");
	
	/** Create the kernel thread with name 'mythread' **/
	thread_st = kthread_run(thread_fn, NULL, "thread_kill");
	
	if (thread_st)
	{
		printk("Thread Created successfully\n");
	}
	else
	{
		printk(KERN_INFO "Thread creation failed\n");
	}
	return 0;
}
/***********************************************************************
						Module Exit
 **********************************************************************/ 
static void __exit cleanup_thread(void)
{
	printk("Cleaning Up\n");
	if (thread_st != NULL)
	{
		kthread_stop(thread_st);
		printk(KERN_INFO "Thread stopped");
	}
}
MODULE_LICENSE("GPL");
module_init(init_thread);
module_exit(cleanup_thread);
