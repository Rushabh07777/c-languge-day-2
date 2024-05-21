#include<stdio.h>
main(){
	int b,h;
	printf("Enter any number: ");
	scanf("%d%d",&b,&h);
	float sum;
	sum=0.5*b*h;
	printf("%.2f",sum);
}