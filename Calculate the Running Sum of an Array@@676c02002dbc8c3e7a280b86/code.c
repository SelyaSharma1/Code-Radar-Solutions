#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int sum=0;
    for(int j=0;j<a;j++){
        sum=sum+s[j];
        printf("%d ",sum);
        
    }
    
    

    return 0;
}