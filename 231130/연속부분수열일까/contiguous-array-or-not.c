#include <stdio.h>
#include <stdlib.h>

void input(int len, int *arr)
{
    int i;  //for문

    for(i = 0;i < len;i++)  //배열 입력
    {
        scanf("%d ", &arr[i]);
    }
}

int fun(int len1, int len2, int *p1, int *p2)
{
    int i, j = 0;    //for문
    int start;   //시작

    for(i = 0;i < len1;i++)
    {
        if(p1[i] == p2[0])
        {
            start = i;
            break;
        }

        else
        {
            printf("No");
            return 0;
        }
    }

    for(i = start;i < len1;i++)
        {
            if(i == start)
            {
                continue;
            }

            if(p1[start + 1] == p2[1])
            {
                printf("Yes");
            }

            else
            {
                printf("No");
                return 0;
            }
        }
}

int main()
{
    int n1, n2; //두 수열의 원소 개수
    int *a, *b;   //수열

    scanf("%d %d",&n1, &n2);  //원소 개수 입력

    a = (int *)malloc(sizeof(int) * n1);    //수열 a
    b = (int *)malloc(sizeof(int) * n2);    //수열 b

    input(n1, a);
    input(n2, b);

    fun(n1, n2, a, b);

    free(a);
    free(b);

    return 0;
}