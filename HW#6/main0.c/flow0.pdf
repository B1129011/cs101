#include <stdio.h>

int checkPowerOf2(unsigned int num)
{
    // Check if the number has only one set bit
    if ((num & (num - 1)) != 0)
        return 0;
    return 1;
}

int main()
{
    int i = 10;

    printf("Enter Number: %d\n",i);
    
    
    if (checkPowerOf2(i))
        printf("%d is power of 2.\n",i);
    else
        printf("%d is not power of 2.\n",i);

    return 0;
}
