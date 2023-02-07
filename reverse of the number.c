#include<stdio.h>
void main()
{
printf("The following program is to find the reverse of the number:-\n\n");
int num,rev=0,x;
printf("Enter a number to find reverse of the number :- ");
scanf("%d",&num);
while(num>0)//The loop will work until the number is 0
{
  x=num%10;//modulus operator is used as it returns the remainder(The last digit)
  rev=rev*10+x;
  num=num/10;//to get the remaining number
}
printf("The reverse  of the given number is :-   %d",rev);
}
