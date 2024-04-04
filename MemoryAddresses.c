#include <stdio.h>

int main()
{
    char a;
    double b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);

    return 0;

}

// Memory = An array of bytes within RAM (street)
// Memory Block = A single unit (byte) within memory, used to hold some value (person)
// Memory Address = The address of where a memory block is located (house address)