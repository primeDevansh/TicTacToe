/*
 * Program to count the number of notes in a given amount.
 * By Devansh Rastogi
 * +91 8368719994
 */

/*
 * Denominations : INR 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	//Main varibales
	int amount, sum_denominations;
	float copy_amount;
	int no_1, no_2, no_5, no_10, no_20, no_50, no_100, no_200, no_500, no_2000;
	no_1 = no_2 = no_5 = no_10 = no_20 = no_50 = no_100 = no_200 = no_500 = no_2000 = 0;
	
	//Helper variables
	//int i;

	printf("\nEnter amount in INR : ");
	scanf("%d", &amount);
	
	if(amount<0) {
		printf("\nPlease enter legitimate value. Exit!");
		printf("\a");
		exit(0);
	}

	sum_denominations = 0;
	copy_amount = amount;

	while(sum_denominations < amount) {

		if((copy_amount / 2000) >= 1)
			no_2000+=1;
		else if((copy_amount / 500) >= 1)
			no_500+=1;
		else if((copy_amount / 200) >= 1)
			no_200+=1;
		else if((copy_amount / 100) >= 1)
			no_100+=1;
		else if((copy_amount / 50) >= 1)
			no_50+=1;
		else if((copy_amount / 20) >= 1)
			no_20+=1;
		else if((copy_amount / 10) >= 1)
			no_10+=1;
		else if((copy_amount / 5) >= 1)
			no_5+=1;
		else if((copy_amount / 2) >= 1)
			no_2+=1;
		else if((copy_amount / 1) >= 1)
			no_1+=1;

		sum_denominations = ((no_1*1) + (no_2*2) + (no_5*5) + (no_10*10) + (no_20*20) + (no_50*50) + (no_100*100) + (no_200*200) + (no_500*500) + (no_2000*2000));
		
		copy_amount = amount - sum_denominations;
	}

	printf("\n");
	printf("2000 x %d\n", no_2000);
	printf("500 x %d\n", no_500);
	printf("200 x %d\n", no_200);
	printf("100 x %d\n", no_100);
	printf("50 x %d\n", no_50);
	printf("20 x %d\n", no_20);
	printf("10 x %d\n", no_10);
	printf("5 x %d\n", no_5);
	printf("2 x %d\n", no_2);
	printf("1 x %d\n", no_1);
	printf("\n");
}
