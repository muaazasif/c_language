#include <stdio.h>
main(){
	int a[5],i,sum=0,avg;
	int tot=500;
	
	for(i=0;i<5;i++){
	printf("Enter %d Subject Number : ",i+1);
	scanf("%d",&a[i]);
			
		
	}
	

		
	
	for(i=0;i<5;i++){
	sum=sum+a[i];
	
	
		
	}
	printf("\nTotal Sum : %d",sum);
	avg = ((float)sum/tot)*100;
	printf("\nTotal Percentage : %d ",avg);
	
	
}
