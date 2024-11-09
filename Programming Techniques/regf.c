#include <stdio.h>

int increment(int i)
{
    printf("Increment %d by 1\n",i);
    return i + 1;
}

int decrement(int i)
{
    printf("Decrement %d by 1\n",i);
    return i -1;
}

int main()
{
    int num = 0;
    int (*fp)(int);

    fp = &increment;
    num= (*fp)(num);
    num= (*fp)(num);

    fp = decrement;
    num= (*fp)(num);
    printf("Num is now: %d\n",num);
    return 0;
}
