#include <stdio.h>
int main(){
    int a,i,k,j,b;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&b);
    for(j=3;j<a;j++){
        printf("%d\n",s[j]);
    }
    for(k=0;k<=2;k++){
        printf("%d\n",s[k]);
    }
}