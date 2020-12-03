#include <stdio.h>
main(){
	int your_roll_no,frd_roll_no;
	printf("What is your roll number : ");
	scanf("%d",&your_roll_no);
	printf("What is your friend roll number : ");
	scanf("%d",&frd_roll_no);
	if(your_roll_no>frd_roll_no)
	printf("Your Roll Number is greater than Friend Roll Number");
	else
	printf("Your Roll Number is less than Friend Roll Number");
	
}
