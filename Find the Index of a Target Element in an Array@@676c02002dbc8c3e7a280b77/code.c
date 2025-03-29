#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int b ,r=-1;
    scanf("%d",&b);
    for(int j=0;j<a;j++){
        if(s[j]==b){
             r=j;
        }
    }
    printf("%d",r);
    
    return 0;
}