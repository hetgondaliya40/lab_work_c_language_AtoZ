/*
* * * *
*
*
* * * *
*
*
* * * *
*/

#include<stdio.h>
void main ()
{
	int i;
	for(i=1;i<=7;i++){
		if(i==1||i==4||i==7){
			printf("* * * *\n");
		}else if(i==2){
			printf("*\n");
		}else if(i==3){
			printf("*\n");
		}else if(i==5){
			printf("*\n");
		}else if(i==6){
			printf("*\n");
		}
	}
}
