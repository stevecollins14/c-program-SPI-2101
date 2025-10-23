//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: electricity bill
*/

#include<stdio.h>
// function prototype
int CalculateElectricBill(int units);

// main function 
void main(){
	int units ;
	int bill ;
	
	printf("Enter the units consumed : \t");
	scanf("%d",&units);

// function call	
  bill = CalculateElectricBill(units);
  
	printf("The total bill for %d units: ksh.  %d\n",units,bill);
	return 0;
}

// function declaration
int CalculateElectricBill( int units ){
	int bill;
	
	if (units <= 100){
		bill = units * 10;
	} else if (units <= 200){
		bill = (100 * 10) +((units - 100)*15);
	} else {
		bill = (100 * 10) + (100 * 15) + ((units-200) * 20);
	}
	return bill ;
}

