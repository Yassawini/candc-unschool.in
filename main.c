#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,sum=0;
    do
    {
        printf("enter a no.\n");
        scanf("%d",&num);
        sum=sum+num;
    }
    while(num!=0);
    printf("sum of all above numbers is :%d",sum);
    return 0;
}
