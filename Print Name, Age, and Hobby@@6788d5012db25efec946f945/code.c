#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int x;
    scanf("%s %d %s",&str1,&x,&str2);
    printf("Name: %s\n",str1 );
    printf("Age: %d\n",x);
    printf("Hobby: %s",str2);
    return 0;
}