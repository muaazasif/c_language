#include <stdio.h>
main(){
	char ope;
	float num1,num2;
	printf("___________________\n");
	printf("\nCALCULATOR : ");
	printf("\n___________________");
	printf("\n\nEnter First Number : ");
	scanf("%f",&num1);
	printf("Enter Second Number : ");
	scanf("%f",&num2);
	printf("Enter Operator(+,-,/,*) : ");
	scanf("%s",&ope);
	if(ope=='+')
	printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
	else if(ope=='-')
	printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
	else if(ope=='*')
	printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
	else if(ope=='/')
	printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
	else
	printf("Please Correct The Operator");
	
}
