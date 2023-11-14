#include <stdio.h>

void sort(int a[], int len);

void swap(int *n1, int *n2);

int main() {
    int arr[100];
    int i, j, n;

    scanf("%d", &n);

    for(i = 0;i < n;i++)
    {
        scanf("%d ", &arr[i]);
    }

    sort(arr, n);

    for(i = n - 1;i >= 0;i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    for(i = 0;i < n;i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

void sort(int a[], int len)
{
    int i, j;

    for(i = 0;i < len;i++)
    {
        for(j = 0;j < len;j++)
        {
            if(a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}

void swap(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}