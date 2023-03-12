/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int varn,tot=0;


  printf("Enter the amount of numbers: ");//user promt
  scanf("%d",&varn);//store input

//calculate sum
  for(int i=0; i <= varn;i++){
     tot+=i;
  }
  printf("Sum = %d",tot);//output sum


  return 0;
}

