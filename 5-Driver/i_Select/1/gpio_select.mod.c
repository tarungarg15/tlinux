#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5306156e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x32070b24, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xb9d58a39, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x536ff674, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x12bd4954, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x87cd7ce, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x9551a41b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x6d029773, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xdb24318d, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x21b362b1, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xf5c35834, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbb0c38f9, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x695b2cfd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x952664c5, __VMLINUX_SYMBOL_STR(do_exit) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc9f5df35, __VMLINUX_SYMBOL_STR(up) },
	{ 0xa5a2fc3, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6c8d5ae8, __VMLINUX_SYMBOL_STR(__gpio_get_value) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "01B91B96B4B77E1261FF4B8");