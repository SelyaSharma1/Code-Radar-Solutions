#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int num=-1;
    for(int j=0;j<a;j++){
        for(int k=j+1;k<a;k++){
            if(s[j]==s[k]){
                num=s[j];
                break;
            }
        
            
        }
        if(num!=-1){
            break;
        }
        
       
    }
    printf("%d",num);
    
    
    
    return 0;
}