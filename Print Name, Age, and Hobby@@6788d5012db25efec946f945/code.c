#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int x;
    scanf("%s %d",&str1,&x);
    scanf("%s",&str2);
    printf("Name: %s",str1 );
    printf("Age: %d",x);
    printf("Hobby: %s,"str2);
    return 0;
}