// Q5. Write a program to check the input characters for uppercase, lowercase, number of digits and other
// characters. Display appropriate message.

#include <stdio.h>
int main (int argc, int *argv[])
{
char ch[] = "s56A(d^fAk+Ao";
char c;
int upper, lower, num, other;
for(int i = 0; c = ch[i], c != '\0'; i++){
if(c >= 65 && c <= 90)
upper++;
else if(c >= 97 && c <= 122)
lower++;else if (c >= 48 && c <= 57)
num++;
else
other++;
}
printf("Uppercase = %d\n", upper);
printf("Lowercase = %d\n", lower);
printf("Digits = %d\n", num);
printf("Other characters = %d", other);
return 0;
}