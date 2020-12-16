#include <stdio.h>
int add(int a , int b){
	int sum;
	sum=a+b;
}
int sub(int a , int b){
	int sum;
	sum=a-b;
}
void head_adding(){
	printf("****** SUM OF TWO NUMBERS ******");
}
void head_sub(){
	printf("****** SUBTRACTION OF TWO NUMBERS ******");
}
main(){
	int c,d;
	printf("\nEnter First Number is : ");
	scanf("%d",&c);
	printf("Enter Second Number is : ");
	scanf("%d",&d);
	int res=add(c,d);
	int ret=sub(c,d);
	head_adding();
	printf("\nThe Sum of Two Numbers is : %d\n\n",res);
	head_sub();
	printf("\nThe Sum of Two Numbers is : %d\n",ret);
	
}
