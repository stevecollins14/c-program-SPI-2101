//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: mobile Data Bundle Purchase
*/

#include<stdio.h>

//main function
int main(){
	int choice;
	
//display the menu
  printf("Select data bundle\n");
  printf("1.  100MB @ 50  KES\n");
  printf("2.  500MB @ 200 KES\n");
  printf("3.  1GB   @ 350 KES\n");
  printf("4.  2GB   @ 600 KES\n");

  //prompt the user to enter their choice (1-4)
  printf("Enter your choice(1-4): ");
  scanf("%d",&choice);
  
  //declaring switch cases
 switch(choice) {
	 case 1:
	 	printf("You selected 100MB. Cost = 50 KES\n");
	 	break;
	 case 2:
	 	printf("You selected 500MB. Cost = 200 KES\n");
	 	break;
	 case 3:
	 	printf("You selected 1GB. Cost = 350 KES\n");
	 	break;	 	 
	 case 4:
	 	printf("You selected 2GB. Cost = 600 KES\n");
	 	break;	 
	 default:
	 printf("Invalid choice\n");
	 break;
	 
 }
  
return 0;
}