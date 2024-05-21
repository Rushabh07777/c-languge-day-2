#include<stdio.h>
main(){
	int p,r,t;
	printf("Enter any number: ");
	scanf("%d%d%d",&p,&r,&t);
    float sum;
	sum=p*r*t/100;
	printf("%.2f",sum);
}