#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Student");
MODULE_DESCRIPTION("Simple Container Memory Monitor");

static int __init monitor_init(void) {
    printk(KERN_INFO "[monitor] Module loaded\n");

    // Simulated logs for demo
    printk(KERN_INFO "[monitor] PID 1234 exceeded soft limit\n");
    printk(KERN_INFO "[monitor] PID 1234 killed (hard limit)\n");

    return 0;
}

static void __exit monitor_exit(void) {
    printk(KERN_INFO "[monitor] Module unloaded\n");
}

module_init(monitor_init);
module_exit(monitor_exit);
