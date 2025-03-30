#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int even=0;
    for(int j=0;j<a;j++){
        if(s[j]%2==0){
            if(even<s[j]){
                even=s[j];
                
            }
        }
        
        
    }
    printf("%d",even);
    
    

    return 0;
}