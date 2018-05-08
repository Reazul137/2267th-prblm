#include<stdio.h>
int main()
{
    int z, x, sum = 0, inpn;

    for (x=1; x<=10; ++x)
    {
        printf("Enter #%d: ",x);
        scanf("%d",&inpn);

        sum = sum + inpn;
    }
    printf("Total sum of 10 numbers = %d\n", sum);

    return 0;

}
