#include <stdio.h>
int main(){

	
	float num1,num2,ope;
	char ans;
    printf("Do You Calculate The Vaue Yes or No\n\t\t\t || Press 'Y'|| \t\t\t || Press 'N'|| \n");
	scanf("%c",&ans);
	while (ans =='Y'){	
	
	printf("\n___________________\n");
	printf("\nCALCULATOR : ");
	
	printf("\n___________________");
	printf("\n\nEnter First Number : ");
	scanf("%f",&num1);
	printf("Enter Second Number : ");
	scanf("%f",&num2);
	printf("\t\t\t\t---------------Enter Operator----------------- \n\n\t\t\t|| Addition + press 1 \t\t\t|| Subtraction + press 2 \n\t\t\t|| Multiplication + press 3 \t\t|| Divison + press 4\n");
	scanf("%f",&ope);
	if(ope==1)
	//printf("You Press -------- %f ---------",ope);
	printf("\t\t\t\t--------------------------------\n \t\t\t\t\t You Press %.1f  \n \t\t\t\t--------------------------------  \n \t\t\t\tAddition ::: %.1f + %.1f = %.1f",ope,num1,num2,num1+num2);
	else if(ope==2)
	printf("\t\t\t\t--------------------------------\n \t\t\t\t\t You Press %.1f  \n \t\t\t\t--------------------------------  \n \t\t\t\tSubtraction ::: %.1f - %.1f = %.1f",ope,num1,num2,num1-num2);
	else if(ope==3)
	printf("\t\t\t\t--------------------------------\n \t\t\t\t\t You Press %.1f  \n \t\t\t\t--------------------------------  \n \t\t\t\tMultiplication ::: %.1f * %.1f = %.1f",ope,num1,num2,num1*num2);
	else if(ope==4)
	printf("\t\t\t\t--------------------------------\n \t\t\t\t\t You Press %.1f  \n \t\t\t\t--------------------------------  \n \t\t\t\tDivision ::: %.1f / %.1f = %.1f",ope,num1,num2,num1/num2);
	else
	printf("Please Correct The Operator\n");
	

	
}
printf("Good Bye");



































































	
	
}
