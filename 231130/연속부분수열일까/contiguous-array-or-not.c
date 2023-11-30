#include <stdio.h>
#include <stdlib.h>

void input(int *p,int k)
{
    int i;
    for(i=0;i<k;i++)
    {
        scanf("%d", &p[i]);
    }
}

int fun(int *x, int *y, int n, int m)
{
    int i, j=1, start, answer=0;
    for(i=0;i<n;i++)
    {
        if(x[i]==y[0])
        {
            start=i;
            break;
        }
    }
    if(m-start)
    {
        return answer;
    }

    for(i=start+1;i<n;i++,j++)
    {
        if(x[i]!=y[start+j])
        {
            answer++;
            return answer;
        }
    }
}

int main() {

    int n,m;
    int i,j;
    int *p1,*p2;
    int sw;

    scanf("%d %d", &n, &m);

    p1=(int *)malloc(sizeof(int)*n);
    p2=(int *)malloc(sizeof(int)*m);

    input(p1,n);
    input(p2,m);

    sw = fun(p1, p2, n, m);

    if(sw==0)
    {
        printf("No\n");
    }

    else
    {
        printf("Yes\n");
    }

    free(p1);
    free(p2);

    return 0;
}