#include<stdio.h>
int main() {
    int a;
    do{
        printf("enter number:");
        scanf("%d",&a);
        printf("%d",a);

        if(a%7==0)
            break;
    }while(1);
    printf("thankyou");
    return 0;
    
