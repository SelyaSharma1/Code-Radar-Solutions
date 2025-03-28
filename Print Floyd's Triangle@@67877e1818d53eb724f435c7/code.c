#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int k=0;k<i;k++){
            printf("%d ",i+k);
        }
        printf("\n");
    }

    return 0;
}