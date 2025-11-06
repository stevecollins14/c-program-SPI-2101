/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description:book borrowing
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr;
	char title[100];
	
	fptr = fopen("C:\\Users\\Administrator\\Documents borrowed_books.txt","a");
	if (fptr == NULL){
		printf("Error opening borrowed_books.txt. \n");
		exit(1);
	}

printf("Enter the title of the borrowed book :  ");
fgets(title,sizeof(100),stdin);

fprintf(fptr,"%s",title);

printf("book title successfully stored in borrowed_books.txt.  \n ");		
	
	fclose(fptr);
	return 0;
}