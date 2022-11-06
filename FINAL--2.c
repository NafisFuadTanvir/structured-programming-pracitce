#include <stdio.h>
void main ()
{
    int N[20],n,m,p,q,s,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        {
        scanf("%d",&N[i]);
        }
    m = N[0];
    s = N[0];
    for(i=1; i<n; i++)
        {
        if(m<N[i])
        m = N[i];
        if(s>N[i])
        s = N[i];
        }
    if(m==N[0])
        {
        p = N[1];
        for(i=2;i<n;i++)
            {
            if(p<N[i])
            p = N[i];
            }
        }
    else
        {
        p = N[0];
        for(i=1;i<n;i++)
            {
            if(p<N[i] && N[i]!=m)
             {
                p = N[i];
             }
            }
        }
    if(s==N[0])
     {
        q = N[1];
        for(i=2;i<n;i++)
            {
            if(q>N[i])
             {
              q = N[i];
             }
            }
    }

    else
        {
        q = N[0];
        for(i=1;i<n;i++)
         {
            if(q>N[i] && N[i]!=s)
                {
                 q = N[i];
                }
         }
        }
    printf("%d %d %d %d",s,m,q,p);
}
