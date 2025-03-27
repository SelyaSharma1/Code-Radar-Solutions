#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<a;j++){
        for(int k=0;k<a-j;k++){
        if(s[k]>s[k+1]){
            int temp=s[k];
            s[k]=s[k+1];
            s[k+1]=temp;
        }
        }
    }
    printf("%d",s[a-2]);

}