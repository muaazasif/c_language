#include <stdio.h>
main(){
	float Bth,age,current,month,cal_mon,days,week,min,sec,hours;
	printf("\nEnter Your Birth Year : ");
	scanf("%f",&Bth);
	printf("\nEnter You Birth Month : ");
	scanf("%f",&month);
	printf("\nEnter Current Year : ");
	scanf("%f",&current);
	
	age = current-Bth;
	days=age*365;
	week=days/7;
	hours=days*24;
	min=hours*60;
	sec=min*60;
	cal_mon=days/30;
	
	printf("\nYour Age is : %.1f",age);
	printf("\nYour Month is : %f ",cal_mon);
	printf("\nYour Days is : %f ",days);
	printf("\nYour Weeks is : %f ",week);
	printf("\nYour Hours is : %f ",hours);
	printf("\nYour Minutes is : %f",min);
	printf("\nYour Seconds is : %f",sec);
	
	
	
}
