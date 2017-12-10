#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x3d6976bf, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2ec01f71, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x8b8dd7ac, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x829cafc9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x27c400b1, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xf6185bb8, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xa9921b8, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x9041f1bb, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xd1cfba77, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AE0C1EFB844B9242727ED42");
