#include <stdio.h>
int main()
{
int casos, testes,i,cobaias=0,coelhos=0,ratos=0,sapos=0;
char l;
    scanf("%d",&casos);
    for(i=1; i<=casos; i++)
    {
    scanf("%d%c",&testes,&l);
    cobaias+=testes;
    if(l == 'C')
    {
        coelhos+=testes;
    }
    else if(l == 'R')
    {
        ratos+=testes;
    }
    else if(l == 'S')
    {
        sapos+=testes;
    }
    }
    printf("Total: %d de cobaias\n",cobaias);
    printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
    printf("Total de sapos: %d\n",sapos);
    printf("Percentual de coelhos: %.2f %%\n",(float)coelhos/(float)cobaias*100);
    printf("Percentual de ratos: %.2f %%\n",(float)ratos/(float)cobaias*100);
    printf("Percentual de sapos: %.2f %%\n",(float)sapos/(float)cobaias*100);

return 0;
}
