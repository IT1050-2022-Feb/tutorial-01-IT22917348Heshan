/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,tot,avg;//variable Declaration
  
  printf("Enter Mark 1: ");//promt user
  scanf("%f",&mark1);//store input

  printf("Enter Mark 1: ");//promt user
  scanf("%f",&mark1);//store input

  tot = mark1+mark2;//calculate total
  avg = tot/2.0;//calculate average

  printf("Total is: %.2f\n",tot);//output total
  printf("Average is: %.2f",avg);//output average

  return 0;


}

