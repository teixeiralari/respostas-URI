#include <stdio.h>
int main()
{
int i,x,y,soma=0;
scanf("%d %d",&x,&y);
    if(x>y)
    {
        for(i=(y+1); i<x; i++)
        {
        if((i%2)!=0)
        soma = soma + i;
        }
        printf("%d\n",soma);
    }
    else if(x<y){
        for(i=(x+1);i<y; i++)
        {
        if((i%2)!=0)
        soma = soma + 1;
        }
        printf("%d\n",soma);
    }
    else
        printf("%d\n",soma);

return 0;
}
