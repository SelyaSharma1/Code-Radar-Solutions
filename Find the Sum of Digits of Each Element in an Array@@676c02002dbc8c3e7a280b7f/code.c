#include <stdio.h>
int main(){
    int a,e;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<a;j++){
        int sum=0;
        int num=s[j];
        while(num>0){
            e=num%10;
            sum=sum+e;
            num/=10;
            
        }
        printf("%d ",sum);
        
        
    }
    
    
    
    
    return 0;
}