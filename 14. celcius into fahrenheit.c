#include<stdio.h>
int main()
{
int celcius,fahrenheit;
printf("enter the temperature in celcius to convert it into fahrenheit=");
scanf("%d",&celcius);
fahrenheit=(9/5*celcius)+32;
printf("%dcelcius=%dfahrenheit",celcius,fahrenheit);
}
