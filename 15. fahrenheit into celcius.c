#include<stdio.h>
int main()
{
float fahrenheit,celcius;
printf("enter the temperature in fahrenheit to convert it into celcius=");
scanf("%f",&fahrenheit);
celcius=(fahrenheit-32)*5/9;
printf("%ffahrenheit=%fcelcius",fahrenheit,celcius);
}
