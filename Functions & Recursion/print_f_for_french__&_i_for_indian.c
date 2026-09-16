#include<stdio.h>
void Namaste() ;
void Bonjour() ;

int main() {
    printf("Press 'f' for French or 'i' for Indian : ");
    char ch;
    scanf("%c",&ch);
    if(ch=='f') {
        Bonjour() ;
    } else{
        Namaste() ;
    }
    return 0;
}

void Namaste() {
    printf("Namaste \n");
}
void Bonjour() {
    printf("Bonjour \n");
}
