//simple c program
/*
Name: Steve Collins Munene
Reg: CT100/G/26243/25
Description: qualifications for a bank loan


*/


#include<stdio.h>//

//main function
int main(){
 int age;
   float annualincome;	
	
// prompt the user to enter age	
	printf("Enter your age : ");
 scanf("%d", &age);

    
//prompt the user to enter annual income
    printf("Enter your annual income:sh");
	scanf("%f",&annualincome); 
	
//display of expected output
if(age>=21 &&annualincome>=21000){
	printf("congratulations,you qualify for a loan.\n");
}else{
	printf("Unfortunately,we are unable to offer you a loan at this time.\n");
     }
    return 0;
}