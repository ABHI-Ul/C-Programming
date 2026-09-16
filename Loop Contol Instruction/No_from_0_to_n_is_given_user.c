#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    
    // int i=0;
    // while(i<=n) {
    //     printf("%d \n", i);
    //     i++;
    // }
  //  2 diff type to solve it
    for(int i=0; i<=n; i++) {
        printf("%d \n", i);
    }
    return 0;
}
