//simple c program
/*
Name: Steve Collins Munene
Reg: CT/G/26243/25
Description: Hotel Management system
*/

#include<stdio.h>
#include<time.h>
#include <stdlib.h>

// 1D array

int main(){
	int days = 7 ;
	int floors = 5 ;
	int rooms = 10 ;
	int branches = 3 ;
	
	srand(time(NULL));
	
	// 1D Array  – Weekly Revenue Tracker
	int total_revenue = 0 ;
	float average_revenue;
	int revenue [7] ; 
	int i,f,r,b;
	
	printf("Enter revenue for each day of the week: \n" );
	
	for (i=0;i<days;i++){
	 printf("day %d:",i+1);	
     scanf("%d",&revenue[i]);
     total_revenue += revenue[i];
	}
	average_revenue = total_revenue /days;
	printf("The total weekly revenue: %d \n",total_revenue);
    printf("The average daily revenue: %.2f\n",average_revenue);
	
	// 2D Array  – Room Occupancy (One Branch)
	int occupancy[5][10];
	printf("Room occupancy for one branch: \n");
	for (f=0;f<floors;f++){
		int occupied = 0 , vacant = 0;
		for (r=0;r<rooms;r++){
			occupancy[f][r] = rand() %2;
			if (occupancy[f][r]==1)
				occupied++;
			else vacant++;
		}
	printf("Floor:%d ,occupied:%d ,vacant:%d\n",f+1,occupied,vacant);
	}
	
	
	//3D Array – Multiple Branches 
	int chain[3][5][10];   //[branches][floors][rooms]
	int total_occupied = 0;
	
	for(b=0; b<branches; b++){
		for(f=0;f<floors;f++){
			for (r=0;r<rooms;r++){
				chain[b][f][r] = rand()%2;
				if(chain[b][f][r] ==1)
					total_occupied++;
			}
		}
	}
	printf("Total number of occupied rooms across all branches : %d\n",total_occupied);
	
	return 0;
}