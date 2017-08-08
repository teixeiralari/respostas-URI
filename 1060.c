#include <stdio.h>
#include <stdlib.h>

int main ()
{
int count=0,i;
float v;
    for(i=1; i<=6; i++)
    {
    scanf("  %f  ", &v);
      if(v>0)
    {
       count++;
    }
    }
     printf("%d valores positivos\n",count);

return 0;
}
