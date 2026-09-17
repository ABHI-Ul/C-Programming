#include<stdio.h>
#include<math.h>

float squareArea(float side);       
float circleArea(float rad);
float rectangleArea(float a,float b);

int main() {
    float a=21.0,b=2.0;
    printf("%f \n",rectangleArea(a,b));

    float side=5;
    printf("%f \n",squareArea(side));

    float rad=8;
    printf("%f \n", circleArea(rad));
    
    return 0;
}
float squareArea(float side) {
return side*side;  
}
float circleArea(float rad) {
    return 3.14 * rad * rad;
}
float rectangleArea(float a,float b) {
    return a*b;
}
