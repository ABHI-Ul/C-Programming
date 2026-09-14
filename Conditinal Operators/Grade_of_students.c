#include<stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100):");
    scanf("%d",&marks);
    if (marks<30) {
        printf("GRADE IS C\n");
    }   else if(marks>=30 && marks<70) {
        printf("GRADE IS B\n");
    }   else if(marks>=70 && marks<90) {
        printf("GRADE IS A\n");
    }   else if(marks>=90 && marks<=100) {
        printf("GRADE IS A+\n");
    } else {
        printf("Invalid marks\n");
    }
    return 0;
}
