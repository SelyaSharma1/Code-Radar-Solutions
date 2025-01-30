#include <stdio.h>

int main() {
    int a,i,j,even=0;
    int odd=0;
    scanf("%d",&a);
    int s[a];
    for(i=1;i<=a;i++){
        scanf("%d",&s[i]);
    }
    for(j=1;j<sizeof(s);j++){
        if(s[j]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
printf("%d ",even);
printf("%d",odd);
    return 0;
}