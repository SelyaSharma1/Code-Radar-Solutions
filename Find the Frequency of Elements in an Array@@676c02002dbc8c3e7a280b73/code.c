#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<a-1;j++){
        for(int k=0;k<a-j-1;k++){
            if(s[k]>s[k+1]){
                int temp=s[k];
                s[k]=s[k+1];
                s[k+1]=temp;
            }
        }
    }
    int count =1;
    int p=0;
    while(p<a){
        if(s[p]==s[p+1]){
            count++;
            p++;
        }else{
            printf("%d %d\n",s[p],count);
            count=1;
            p++;
        }
    }
}
        
    