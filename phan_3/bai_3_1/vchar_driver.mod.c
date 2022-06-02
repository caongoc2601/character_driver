#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6ff6a950, "module_layout" },
	{ 0x8161bc63, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8a1f0386, "class_destroy" },
	{ 0x3d5a470d, "device_destroy" },
	{ 0x4ad70c56, "cdev_add" },
	{ 0x2c97c919, "cdev_init" },
	{ 0xe1224a8f, "cdev_alloc" },
	{ 0x7ede9e5a, "device_create" },
	{ 0xb39c766a, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfd12ec2b, "kmem_cache_alloc_trace" },
	{ 0xfd00891a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37B570B8A51042260CC5AE4");
