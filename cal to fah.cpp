#include <stdio.h>
main(){
	float h,k,kal;
	printf("Enter Calcius : ");
	scanf("%f",&k);
	h=k*(1.8)+32;
	kal=k+273.15;
	printf("Calcius To Fahrenheit : %f",h);
	printf("\nCalcius To Kelvin : %f",kal);
	
}
