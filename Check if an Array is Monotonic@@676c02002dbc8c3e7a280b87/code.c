#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int flag=0,tlag=0;
    for(int j=0;j<a-1;j++){
        if(s[j]>=s[j+1]){
            flag=1;
        }
        if(s[j]<=s[j+1]){
            tlag=1;
        }
        
    }
    if(flag==1||tlag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    

    return 0;
}