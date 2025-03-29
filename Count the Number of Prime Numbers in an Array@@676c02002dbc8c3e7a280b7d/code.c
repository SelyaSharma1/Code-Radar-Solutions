#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int flag=0;
    for(int j=0;j<a;j++){
        for(int k=2;k<s[j];k++){
            if(s[j]%k!=0){
                flag++;
            }
        }
        
            printf("%d",flag);
        
        
    }
    
    
    
    return 0;
}