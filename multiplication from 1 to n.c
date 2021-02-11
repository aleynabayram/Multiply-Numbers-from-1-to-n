/*The code multiplies numbers from 1 to n (factorial) */

#include<stdio.h>

int main(){
	int number;
	long result=1;
	int i;
	printf("From one to which number do you want to add(The number is included):");
	scanf("%d",&number);
	
	for (i=1; i<= number ;i++){
		result=result*i;
	}
	
	printf("The result: %d", result);
	return 0;
}
