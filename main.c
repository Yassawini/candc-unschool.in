#include <stdio.h>

int main()
{
    float per;
    printf("enter the percentage\n");
    scanf("%f",&per);
    if(per>80)
    {
        printf("A grade\n");
    }
    if(per<80 && per>=70)
    {
        printf("B grade\n");
    }
    if(per<70 && per>=60)
    {
        printf("C grade\n");
    }
    if(per<60 && per>=45)
    {
        printf("D grade\n");

    }
    else
    {
        printf("fail");
    }
    return 0;
}
