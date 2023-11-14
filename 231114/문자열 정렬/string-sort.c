#include <stdio.h>
#include <string.h>

void sort(char a[], int len);

void swap(char *n1, char *n2);

int main() {
    char arr[100];
    int i, j, n;

    scanf("%s", arr);

    n = strlen(arr);

    sort(arr, n);

    for(i = n - 1;i >= 0;i--)
    {
        printf("%c", arr[i]);
    }

    printf("\n");

    return 0;
}

void sort(char a[], int len)
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

void swap(char *n1, char *n2)
{
    char temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}