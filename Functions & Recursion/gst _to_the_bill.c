#include<stdio.h>
void calculateprint(float value);\

int main() {
    float value =100;
   calculateprint(value); 
    printf("value is:%f \n");
    return 0;
}

void calculateprint(float value) {
    value = value + (0.18 * value);
    printf("the final price is :%f",value);
}
