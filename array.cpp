#include <stdio.h>
#include <string.h>
main(){
	int i;	
	char name[10];
	printf("Enter Your Name : ");
	scanf("%s",&name);
	for(i=0;i<strlen(name);i++){
		printf("Name %d : %c\n",i,name[i]);
	}
}


