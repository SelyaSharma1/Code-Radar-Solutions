#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        for(int j=a-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<i+1;k++){
            printf("%d",k);
           
        }
        for(int f=i-1;f>0;f--){
            printf("%d",f);
            
        }
        printf("\n");
    }

    return 0;
}