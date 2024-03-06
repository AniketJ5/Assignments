//Q1. Write a program to input n numbers on command line argument and calculate maximum of them.

#include <stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
char max[5];
strcpy(max,argv[1]);
for(int i = 2; i < argc; i++){
if(strcmp(max,argv[i]) < 0)
strcpy(max,argv[i]);
}
printf("%s", max);
return 0;
}