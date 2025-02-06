#include <stdio.h>
void main(){
    int a,i,k,j,b;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&b);
    for(j=a-b;j<=a-1;j++){
        printf("%d\n",s[j]);
    }
    for(k=0;k<a-b;k++){
        printf("%d\n",s[k]);
    }
}