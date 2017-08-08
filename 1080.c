#include <stdio.h>
int main()
{
int val,i,aux=0,auxi=0;
    for(i=1;i<=100;i++)
    {
    scanf("%d",&val);
    if(val>aux)
    {
        aux=val;
        auxi=i;
    }
    }
        printf("%d\n",aux);
        printf("%d\n",auxi);

return 0;
}
