/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description:students result
*/

#include <stdio.h>
#include <stdlib.h>

struct {
	char name[50];
	char reg_no[20];
	int marks;
}Student;

int main(){
	
  int student,s;
    
    FILE *fptr;

    if (fptr = fopen("C:\\Users\\Administrator\\Documents\\results.dat.","rb")){
    	
    	
		printf("Error opening results.dat. \n");
		exit(1);
	}
		printf("Student Examination Results: \n");

    while (fread(&s,sizeof(student),1,fptr)==1){
		printf("Name: %s\n",s);
		printf("Marks: %d\n",s);
	}

    fclose(fptr);
	return 0;
}