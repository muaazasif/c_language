#include <stdio.h>
main(){
	printf("\t\t\t----------------MarkSheet----------------");
	float sub1,sub2,per;
	char sh[100];
	printf("\nEnter Your Name : ");
	scanf("%s",&sh);
	printf("Enter 1st Subject Marks : ");
	scanf("%f",&sub1);
	printf("Enter 2st Subject Marks : ");
	scanf("%f",&sub2);
	printf("Total Marks : 200");
	per=((sub1+sub2)/200)*100;
	printf("\nPercentage : %.2f",per);
	if(per>80)
	printf("\nGrade A");
	else if(per>70)
	printf("\nGrade B");
	else if(per>60)
	printf("\nGrade C");
	else
	printf("\nGrade D");
	}
	
	
