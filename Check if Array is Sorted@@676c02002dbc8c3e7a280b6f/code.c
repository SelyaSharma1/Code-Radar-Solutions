#include <stdio.h>

int main() {
    int a,j,i,flag=0;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",s[a]);
    }
    for(j=0;j<a;j++){
        if(s[j-1]<s[j]){
            flag=0;
        }
        else{
            flag=1;
        }
    }
    if (flag==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}