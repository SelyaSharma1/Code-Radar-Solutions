#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int p,max=1;
    for(int j=0;j<a;j++){
        for(int k=j+1;k<a;k++){
            p=s[k]*s[j];
            if(max<p){
                max=p;
            }
            
        }
    }
    printf("%d",max);
    
    return 0;
}