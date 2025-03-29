#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    
    for(int j=0;j<a;j++){
        int flag=1;
        for(int k=2;k<s[j];k++){
            if(s[j]%k==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d",s[j]);
        }
        
    }
    
    
    
    return 0;
}