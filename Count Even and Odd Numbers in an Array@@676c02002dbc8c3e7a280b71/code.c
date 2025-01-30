#include <stdio.h>

int main() {
    int a,i,j,even=0;
    int odd=0;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(j=0;j<a;j++){
        if(s[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
printf("%d ",even);
printf("%d",odd);
    return 0;
}