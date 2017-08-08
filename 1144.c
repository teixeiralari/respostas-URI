#include<stdio.h>
int main()
{
    int n,i,soma1,soma2,soma3,soma4;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        soma1=i*i;
        soma2=i*i*i;
        printf("%d %d %d\n",i,soma1,soma2);
        soma3=soma1+1;
        soma4=soma2+1;
        printf("%d %d %d\n",i,soma3,soma4);
    }
    return 0;
}
