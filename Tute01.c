/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1;
  int no2;
  float avg;

  printf("enter the number 1 =");
  scanf ("%d",&no1);
  printf("enter the number 2 =");
  scanf("%d",&no2);

  avg=(no1+no2)/2.0;

  printf("avg is = %.2f",avg);
  
  return 0;
}

