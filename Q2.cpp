//Q2. Write a program to calculate a Factorial of a number.

#include <stdio.h>
int main(int argc, int* argv[])
{
int n, fact = 1;
printf("Enter a number n ");
scanf("%d", &n);
while(n!=0){
fact = fact*n;
n--;
}
printf("factorial = %d",fact);
return 0;
}