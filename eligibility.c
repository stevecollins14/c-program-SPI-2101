//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: student eligibility for final exam
*/

#include<stdio.h>

//main function
int main(){
	float student_attendance, average_marks;
	
//prompt the user to enter attendance
    printf("Enter the student attendance: ");
scanf("%f", &student_attendance);

//prompt the user to enter the average marks
     printf("Enter the student average marks: ");
   scanf("%f",&average_marks);
   
   if(student_attendance>=75 &&average_marks>=40){
   	printf("student is eligible for final exam.\n");
   }else{
	   printf("student is not eligible for final exam.\n");
   }
	return 0;
}	
