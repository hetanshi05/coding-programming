#include<stdio.h>
int main()
{
int a,b;
printf("enter first number:");
scanf("%d", &a);

printf("enter second number:");
scanf("%d", &b);

if (a>b)
{
printf("largest=%d\n",a);
printf("smallest=%d\n",b);
}

else if(a<b)
{
printf("largest=%d\n",b);
printf("smallest=%d\n",a);
}

return 0;
}
