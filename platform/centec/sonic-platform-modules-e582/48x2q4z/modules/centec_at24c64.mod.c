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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x959a84fd, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x904d0224, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xed4d1c86, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0xd92aa4eb, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x62a9a216, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xaaa1b518, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xe4982bef, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7e149286, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9c88d05d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x78794840, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xbe2bdb48, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11c8e40f, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xef3867d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9e96f632, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x3a401b73, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x675f140a, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x2e51823, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd0df2206, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xebad2285, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd1fea71f, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x3a0df096, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("i2c:24c64-ctc");
