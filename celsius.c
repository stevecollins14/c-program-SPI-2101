//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: converting into celsius
*/

#include <stdio.h>
//function prototype
float ConvertToCelsius(float fahrenheit);

void main(){
	float celsius;
	float fahrenheit = 98.6 ;
	
	printf("Enter temperature in fahrenheit : ");
	scanf("%.2f",&fahrenheit);
	
	celsius = ConvertToCelsius( fahrenheit);
	
printf("Temperature in celsius is: %.2f \n ", celsius);

return 0;
}

// function declaration
float ConvertToCelsius(float fahrenheit){
float celsius;
return (fahrenheit-32) * 5/9 ;

}