#include<stdio.h>
int main() {
    for(int i=1; i<=5; i++) {
        if(i==4) { // to skip somethings
        continue;
        }
    printf("%d \n",i);
    }
    return 0;
}
