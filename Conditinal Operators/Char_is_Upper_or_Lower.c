#include <stdio.h>
int main () {
    char ch;
    printf("Enter Alphabet:");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z') {
        printf("Upper Case");
    }
    else if(ch>='a' && ch<='z') {
        printf("Lower Case");
    }
    else { 
        printf("Not AN Alphabet");
    }
return 0;
}
