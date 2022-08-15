#include <stdio.h>

int main()
{
    int i = 0;

    /**
     * Post Increment
     * first the commando is executed, then the variable is changed
     */
    i++;
    printf("%d\n", i);

    /**
     * Pre Increment
     * first the variable is changend, then the commando is executed
     */
    ++i;
    printf("%d\n", i);
    return 0;
}
