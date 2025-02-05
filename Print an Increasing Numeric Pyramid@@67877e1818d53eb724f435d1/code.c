#include <stdio.h>

int main() {
    int a,j,i,k;
    scanf("%d",&a);
    for(i=1;i<a;i++){
        for(j=1;j<=a-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}