#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int count=0;
    for(int j=0;j<a;j++){
        if(b<s[j]){
            count++;
        }
        
        
    }
    printf("%d",count);
    
    

    return 0;
}