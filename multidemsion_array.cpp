#include <stdio.h>
main(){
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter %d Number Matrix : ",i+1);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t  %d   ",a[i][j]);
			
		}
		printf("\n");
		
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter %d Number Matrix : ",i+1);
			scanf("%d",&b[i][j]);
		}
		
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t  %d   ",b[i][j]);
			
		}
		printf("\n");
		
	}
	printf("TOTAL MATRIX SUM : \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j] = a[i][j] + b[i][j];
		
		}
		
		
	}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("\t  %d   ",c[i][j]);
				
				
		
		}
		printf("\n");
		
		
	}
	
	
}
