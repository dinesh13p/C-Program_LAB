//write a program to enter 10 floating point numbers into an array and display them.

#include<stdio.h>

int main(){
  float numbers[10];
  printf("Enter 10 floating numbers:\n");

  for (int i = 0; i < 10; i++){
    printf("Number %d:", i + 1);
    scanf("%f", &numbers[i]);
  }

  printf("\n The entered number are:\n");
  for (int i = 0; i < 10;i++){
    printf("%.2f",numbers[i]);
  }
  
  return 0;
}