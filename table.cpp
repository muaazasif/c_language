#include <stdio.h>
main(){
	int i,tab,val;
	printf("Enter Table Number : ");
	scanf("%d",&tab);
	for(i=1;i<=12;i++)
	{
		val=i*tab;
		printf("\n%d * %d = %d",i,tab,val);
	}
}

