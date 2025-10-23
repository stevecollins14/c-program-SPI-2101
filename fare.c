//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: fare calculation
*/

#include<stdio.h>

// prototype
int calculateFare(int kilometer , int fare );


void main()
{
	int distance , fare ;
printf("Enter the distance travelled (KM): ");
scanf("%d", &distance );

fare = calculateFare(distance,50);

printf("The fare for the distance traveled is :%dksh  \t",fare);
	
}


int calculateFare(int kilometer , int fare){
int result ;
	result = kilometer * fare;
	
	return result;
}