#include<stdio.h>

void printTable(int a);

int main() {
    int a;
    printf("enter number :");
    scanf("%d",&a);

    printTable(a); //argument/actual parameter
    return 0;
}

void printTable(int a) { //parameter/ formal parameter
    for(int i=1; i<=10; i++) {
        printf("%d \n",i*a);
    }

    }
