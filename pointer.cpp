#include<stdio.h>  
int main(){  
int a=10,b=20,*p1=&a,*p2=&b;  
  
printf("Before swap: *p1=%d *p2=%d",*p1,*p2);  
*p1=*p1+*p2;  //10+20=30 => p1
*p2=*p1-*p2;  //30-20=10
*p1=*p1-*p2;  //30-10=20
printf("\nAfter swap: *p1=%d *p2=%d",*p1,*p2);  //20 10
  
return 0;  
}  
