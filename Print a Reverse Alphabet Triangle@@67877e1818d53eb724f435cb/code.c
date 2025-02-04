#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<=a-i;j++){
            printf("j",'A'+j);
        }
        printf("\n");
    }

    
    return 0;
}