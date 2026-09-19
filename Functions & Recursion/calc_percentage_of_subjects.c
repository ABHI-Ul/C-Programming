#include<stdio.h>

int CalacPercentage( int maths, int sanskrit, int science);

int main() {
    int science=97;
    int maths=99;
    int sanskrit=100;
    printf("the percentage is : %d", CalacPercentage(science, maths,sanskrit));
    return 0;
}
int CalacPercentage( int maths, int sanskrit, int science){
    return ((science+maths+sanskrit)/3);
}
