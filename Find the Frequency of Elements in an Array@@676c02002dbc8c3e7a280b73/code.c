#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int count=1;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(s[j]>-1 && s[i]==s[j]){
                count++;
                s[j]=0=-1;
            }
        }if(s[i]!=-1){
        printf("%d %d",s[i],count);}
    }
}
        
    