#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/workqueue.h>
#include <linux/slab.h>

typedef struct
{
	struct work_struct my_work;
	int x;
} my_work_t;

my_work_t *work, *work2;

static void my_wq_function(struct work_struct *work)
{
	my_work_t *my_work = (my_work_t *)work;
	printk("my_work.x %d\n", my_work->x);
	kfree((void *)work);
	return;
}

int init_module(void)
{
	work = (my_work_t *)kmalloc(sizeof(my_work_t), GFP_KERNEL);
	if (work)
	{
		INIT_WORK((struct work_struct *)work, my_wq_function);
		work->x = 1;
		schedule_work((struct work_struct *)work);
	}
	work2 = (my_work_t *)kmalloc(sizeof(my_work_t), GFP_KERNEL);
	if (work2)
	{
		INIT_WORK((struct work_struct *)work2, my_wq_function);
		work2->x = 2;
		schedule_work((struct work_struct *)work2);
	}
	return 0;
}

void cleanup_module(void)
{
	return;
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tarun");
MODULE_DESCRIPTION("Delayed Work Queues Demo");

/**********************************************************************
 * tsp@tsp-Inspiron-5558:~/tlinux/mylinux/Tools/6-Driver/g_BottomHalves/1$ sudo insmod shared_work.ko
 *
 * 	dmesg
 * 	[ 4522.748146] my_work.x 1
	[ 4522.748150] my_work.x 2
 *
 * ***********************************************************************/
