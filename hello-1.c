#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");

int init_module(void) {
    pr_info("Hello world.\n");

    return 0;
}

void cleanup_module(void) {
    pr_info("Tchau world.\n");
}