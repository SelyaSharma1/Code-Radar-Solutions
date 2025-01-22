#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if ('a'<=c &&'z'>=c){
        printf("Lowercase");
    }
    else if ('A'<=c &&'Z'>=c){
        printf("Uppercase");
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}