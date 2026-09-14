#include<stdio.h>
int main() {
    int n =2;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1; i<=10; i++) {
    printf("%d \n",i*n);
    }
    return 0;
}
