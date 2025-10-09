//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: Entering password
*/

#include<stdio.h>

int main(){
	int  password = 1234;
	
	int pwd;
	int i=0;
	do{
	printf("Enter your password : ");
	scanf("%d",&pwd);
	i++ ;
	}
	while(password!=pwd);
	printf("Access Granted");
	return 0;
}