#include<stdio.h>
int main() {
    int n;
    printf("enter valur for n:");
    scanf("%d", &n);

    int sum=0;
    for( int i=1,j=n; i<=n && j>=1; i++,j--) {
      // for( int j=n; j>=1; j--)
        sum= sum+i;
        printf("%d \n",j);
    }
    printf("sum is %d \n",sum);
    return 0;
}
