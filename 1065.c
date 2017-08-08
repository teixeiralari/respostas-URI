#include <stdio.h>
int main()
{
int i,valor,count=0;
for (i=0; i<5; i++)
{
    scanf("%d",&valor);
    if(valor%2==0)
    {
    count++;
    }
}
printf("%d valores pares",count);
return 0;
}
