// Q4. Write a program to calculate the grade of a student. There are five subjects. Marks in each subject are entered
// from keyboard. Assign grade based on the following rule:
// Total Marks >= 90 Grade: Ex
// 90 > Total Marks >= 80 Grade: A
// 80 > Total Marks >= 70 Grade: B
// 70 > Total Marks >= 60 Grade: C
// 60 > Total Marks Grade: F

#include <stdio.h>
void input(int m[5]){
for (int i = 0; i < 5; i++){
scanf("%d", &m[i]);
if(m[i] > 20){
printf("\n Marks cannot be greater than 20 \n Enter marks again : ");
scanf("%d", &m[i]);
}
}
}
int main (int argc, int *argv[])
{
int marks[5], total = 0;
printf ("Enter the marks of 5 subjects\n");
input(marks);
for (int i = 0; i < 5; i++)
{
total = total + marks[i];
}
printf("\n Total marks = %d", total);
if (total >= 90)
printf ("\n Grade = Ex");
else if (total >= 80)
printf ("\n Grade = A");
else if (total >= 70)
printf ("\n Grade = B ");
else if (total >= 60)
printf("\n Grade = C \n");
else
printf("\n Grade = F \n");
return 0;
}