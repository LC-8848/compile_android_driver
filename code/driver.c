#include <linux/module.h>
#include <linux/kernel.h>

static int __init my_module_init(void) {
    printk(KERN_INFO "Hello, World! My driver loaded.\n");
    return 0;
}

static void __exit my_module_exit(void) {
    printk(KERN_INFO "Goodbye, World! My driver unloaded.\n");
}

module_init(my_module_init);
module_exit(my_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple Linux module");