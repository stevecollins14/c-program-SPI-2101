//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: water bill calculator
*/

#include<stdio.h>

//main function
int main(){
	float water_units,bill;
	
//prompt the user to enter the water units consumed
    printf("Enter water units consumed: ");
  scanf("%f",&water_units);
  
  if(water_units <= 30 ){
  	bill =water_units*20;
  }
  else if(water_units >=31&&water_units <=60){
    bill =(30*20)+(water_units-30)*25;
  }
  else{
  bill =(30*20)+(30*25)+(water_units-60)*30;
  }
  //diplay of water bill 
  printf("Total water bill:%.2f KES\n",bill);

  
  return 0 ;
}
	  	