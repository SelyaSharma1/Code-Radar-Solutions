#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int k=0;k<i;k++){
            if(i%2!=0&&k%2!=0||i%2==0&&k%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
           
        }
        printf("\n");
    }

    return 0;
}