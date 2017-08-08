#include<stdio.h>
int main()
{
int M,N,i,soma;
while(1)
{
    scanf("%d %d",&M,&N);
    if(M<=0 || N<=0)
    break;
    else {
    soma=0;
    if(M>N){
    for(i=N;i<=M;i++)
    {
        soma=soma+i;
        printf(" %d ",i);
    }
    printf("Sum=%d\n",soma);
    }
    else if(M<N)
    {
    for(i=M;i<=N;i++)
    {
        soma=soma+i;
        printf(" %d ",i);
    }
    printf("Sum=%d\n",soma);
    }
    }
}
    return 0;
}
