#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,t,w[100000];
    int i,j,a,b,val;
    scanf("%d %d",&n,&t);
    //printf("%d %d",n,t);
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    /*printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",w[i]);
    }*/
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        //printf("\n%d %d",a,b);
        val=w[a];
        for(j=a;j<=b;j++)
        {
            if(w[j]<val)
            val=w[j];
        }
        printf("%d\n",val);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
