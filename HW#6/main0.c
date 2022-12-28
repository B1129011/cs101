#include <stdio.h>

int main()
{
    int i = 10;

    printf("Enter Number: %d\n",i);
    
    
    if ((i & (i - 1)) != 0)
        printf("%d is False.\n",i);
    else
        printf("%d is True.\n",i);

    return 0;
}
