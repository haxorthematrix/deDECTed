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
	{ 0x8495e121, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xf0f9c664, "pcmcia_request_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc6d08280, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x5c542fee, "pcmcia_enable_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x57b57ebe, "jiffies_to_timespec" },
	{ 0x25ec1b28, "strlen" },
	{ 0x9831e9e4, "__kfifo_alloc" },
	{ 0xcc18f988, "pcmcia_register_driver" },
	{ 0x57089f98, "__register_chrdev" },
	{ 0x4edb0146, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x2fa5a500, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x4bea2238, "pcmcia_request_window" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeabfc510, "pv_cpu_ops" },
	{ 0x24f41ee7, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xcd18a611, "pcmcia_release_window" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x729358a5, "pcmcia_unregister_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xcad90e63, "pcmcia_disable_device" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa11FE69E9pb253670B2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa11FE69E9pb281F1C5Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4BC552E7pb0DF519BBpc09E43C7Cpd3488C81A*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEABB0BE4pbD7B915FEpc*pd*");

MODULE_INFO(srcversion, "6B46F1D6248FD7C9BC3C5EB");
