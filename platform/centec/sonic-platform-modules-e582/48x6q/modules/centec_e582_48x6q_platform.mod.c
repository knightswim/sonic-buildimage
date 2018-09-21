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

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x533a1566, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xed4d1c86, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0xd1fea71f, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xab429a1d, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x8022a585, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x4e30fb77, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x4cc11fc1, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xc3f00d78, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb439b07a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xa40d4c79, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xad448d1, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xd92aa4eb, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x62a9a216, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x78794840, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdafdab1f, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

