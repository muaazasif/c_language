#include <stdio.h>
main(){
	int a;
	printf("Enter Number To Check wheather is even or odd : ");
	scanf("%d",&a);
	if(a % 2 == 0 )
	printf("This is a even number %d ",a);
	else if(a % 2 == 1)
	printf("This is a odd number %d ",a);
	else
	printf("This is a zero number");
	
}
