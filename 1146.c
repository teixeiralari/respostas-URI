#include <stdio.h>

int main() {
int N,i;
while(1)
{
    scanf("%d",&N);
    if(N==0)
    break;
    else
    {
        for(i=1; i<=N;i++)
        {
            if(i!=N)
            printf("%d ",i);
            else
            printf("%d\n",i);
        }
    }

}
    return 0;
}
