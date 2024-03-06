//Q3. Write a program to calculate Fibonacci Series up to n numbers

#include <stdio.h>
void fibonacci(int a, int b, int n){
if(n == 0)
return;
int c;
c = a+b;
printf(",%d",c);
fibonacci(b,c,n-1);
}
int main(int argc, int* argv[])
{
int n, fact = 1;
printf("Enter the number ");
scanf("%d", &n);
printf("Fibonacci series : 0,1");
fibonacci(0,1,n-2);
return 0;}