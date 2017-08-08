#include <stdio.h>
int main()
{
    int N,i,b,c=1,d=4;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        for(b=c;b<=d;b++)
        {
            if(b%4==0)
                printf("PUM\n");
            else
                printf ("%d ",b);
        }
        c+=4; d+=4;
    }
    return 0;
}
