#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("enter the value of p\n");
    printf("enter the value of n\n");
    printf("enter the value of r\n");
    scanf("%d%d%f",&p,&n,&r);
    si=p*n*r/100;
    printf("%f\n",si);
    return 0;
}
