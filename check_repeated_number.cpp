#include <stdio.h>
main(){
	int i,j,a[5],k;

		
	for(k=0;k<5;k++){
		printf("Enter %d Number : ",k+1);
		scanf("%d",&a[k]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]==a[j]){
				printf("This is %d Repeated Number\n",a[j]);
				
			}
			
			
		
	}
}
}
		
		


		
		
	
	
