#include <stdio.h>
int num(int a,int b)
{
	int temp = a; 
    a = b; 
    b = temp; 
	printf("\nC=>%d",a);
	printf("\nD=>%d",b);
	
}
main(){
	int c,d;
	printf("Enter First Number : ");
	scanf("%d",&c);
	printf("Enter Second Number : ");
	scanf("%d",&d);
	
	printf("C => %d",c);
	printf("\nD => %d",d);
	num(c,d);

	
	
}
