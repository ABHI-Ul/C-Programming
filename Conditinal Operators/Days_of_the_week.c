#include<stdio.h>
int main() {
   //you know what yall suck
   int day;
   printf("Enter a day (1-7):");
   scanf("%d", &day);
   switch(day) {
    
      case 1:
         printf("Monday");
         break;
      case 2:
         printf("Tuesday");
         break;
      case 3:
         printf("Wednesday");
         break;
      case 4:
         printf("Thursday");
        break;
      case 5:
         printf("Friday");
        break;
      case 6:
         printf("Saturday");
        break;
      case 7:
         printf("Sunday");
        break;
      default:
         printf("Invalid day");
   }

   return 0; 
}
