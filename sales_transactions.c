/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description:sales transactions
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[] = "sales.txt";
    float total_sales = 0.0;
      int i,transaction[7];
   
    fptr = fopen("C:\\Users\\Administrator\\Documents\\ sales.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    
    //output
   fprintf(fptr,"enter the transaction cost: \n");
  
   char data[100];
   fgets(data, 100, fptr);
   printf("%s",data);
   
   
	for (i=0;i<transaction;i++){
	 printf("\n transaction %d:",i+1);	
     scanf("%d",& transaction[i]);
	}
  
     while (fscanf(fptr, "%f", &transaction) == 1) {
        total_sales += transaction[i];
    }
	
    
    fclose(fptr);

 
    printf("Total sales for the day: %.2f\n", total_sales);

    return 0;
}