#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

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
	{ 0xeeab4c1e, "module_layout" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7c038979, "class_destroy" },
	{ 0xc498609c, "device_destroy" },
	{ 0xba9cf391, "device_create" },
	{ 0xbd59df1c, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xd60e87c0, "kmem_cache_alloc_trace" },
	{ 0x6aa9e858, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC0B039B90AE43133E0E58D");