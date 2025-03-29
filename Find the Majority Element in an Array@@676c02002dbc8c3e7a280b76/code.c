#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int f=0;
    int maxel=-1;
    for(int j=0;j<a;j++){
        int count=1;
        if(s[j]==-1){
            continue;
        }
        for(int k=j+1;k<a;k++){
            if(s[j]==s[k]){
                count++;
                s[k]=-1;
            }
        }
        if(count>f){
            f=count;
            maxel=s[j];
        }
        
    }
    printf("%d",maxel);
    
    return 0;
}