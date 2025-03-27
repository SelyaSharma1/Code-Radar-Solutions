#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int b;
    scanf("%d",&b);
    for(int k=a-b;k<a;k++){
        printf("%d ",s[k]);
    }
    for(int j=0;j<a-b;j++){
        printf("%d ",s[j]);
    }
    return 0;
}