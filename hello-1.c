#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");

int myint = 3;
module_param(myint, int, 0);
MODULE_PARM_DESC(myint, "An integer");

static int __init hello_2_init(void)
{
    pr_info("Hello world.\n");

    pr_info("myint is an integer: %d\n", myint);

    return 0;
}

static void __exit hello_2_exit(void)
{
    pr_info("Tchau world.\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);