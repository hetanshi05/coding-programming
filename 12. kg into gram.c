#include<stdio.h>
int main()
{
int kgs,grams;
printf("enter the amount in kgs to convert it into grams=");
scanf("%d",&kgs);
grams=kgs*1000;
printf("%dkgs=%dgrams",kgs,grams);
}
