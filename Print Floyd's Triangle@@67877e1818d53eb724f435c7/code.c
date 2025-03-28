#include <stdio.h>

int main()
{
    int a;
    int c=1;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int k=0;k<i;k++){
            printf("%d ",c++);
        }
        printf("\n");
    }

    return 0;
}