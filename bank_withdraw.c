//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: Bank ATM withdraw
*/

#include<stdio.h>

//main function
int main(){
	int amount;
	int balance= 50000;  //start
	printf("Your current balance = %d \n",balance);

	
	while(balance>=0)  //stop
	{
		printf("Enter the amount to withdraw :\n");
		scanf("%d",&amount);
		balance -= amount ;
		printf("Your new balance = %d \n",balance);
	}
	printf("Your have insufficient balance");
	
	return 0;
}