#include <stdio.h>

int main() {
    int n;  // 정수의 개수
    int i;  // for문용
    int arr[100];   // 저장한 배열
    int cnt = 0;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            cnt++;
        }

        if(cnt==3)
        {
            printf("%d\n", i+1);
            break;
        }
    }
    return 0;
}