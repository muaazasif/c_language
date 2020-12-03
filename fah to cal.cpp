#include <stdio.h>
main(){
	float h,k,kal;
	printf("Enter Fahrenheit : ");
	scanf("%f",&h);
	k=(h-32)*0.555555;
	kal=k+273.15;
	printf("Fahrenheit To Calcius : %f",k);
	printf("\nFahrenheit To Kelvin : %f",kal);
	
}
