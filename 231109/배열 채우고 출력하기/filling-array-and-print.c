#include <stdio.h>

int main() {
    char abc[10];   //10개의 문자
    int i;  //for문용 i

    for(i=0;i<10;i++)
    {
        scanf("%c ", &abc[i]);
    }

    for(i=9;i>=0;i--)
    {
        printf("%c", abc[i]);
    }

    return 0;
}