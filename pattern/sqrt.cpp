#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    int rt;
    printf("Enter the number\n");
    scanf("%d", &number);

    rt = sqrt(number);
    printf("square root of %d=%d", number, rt);

    return 0;
}