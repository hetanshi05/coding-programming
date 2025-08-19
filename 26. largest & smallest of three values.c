#include<stdio.h>
int main()
{
int a,b,c;
int largest,smallest;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
if(a>b && b>c)
{
    largest = a;
}
else if(b>a && b>c)
{

    largest = b;
}
else{
    largest = c;
}
if(a<b && b<c)
{
    smallest = a;
}
else if(b<a && b<c)
{

    smallest = b;
}
else{
    smallest = c;
}
{
printf("The largest number is:%d\n",largest);
printf("The smallest number is:%d\n",smallest);
}
return 0;
}
