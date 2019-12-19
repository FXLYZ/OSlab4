// program to cause a general protection exception

#include <inc/lib.h>

void
umain(int argc, char **argv)
{
	// Try to load the kernel's TSS selector into the DS register.
    asm volatile("movw $0x28,%ax; movw %ax,%ds");

    // Code below this is used for testing how to set segment correctly.
	//asm volatile("movw $0x20,%ax; movw %ax,%ds");
}

