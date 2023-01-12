#include <stdio.h>

float amount[5][7] = { {3,3,3,3,3,5,6}, {2.5,2.5,2.5,2.5,2.5,4,4}, {4,4,4,4,4,4,10}, {1.5,1.5,1.5,1.5,1.5,1.5,1.5}, {2,2,2,2,2,2,4}};
char newspaper[5][5]={"TOI","Hindu","ET","BM","HT"};

int main(){
	int i,j;
	float inp_amt,sum=0;
	printf("Enter the amount of weekly subcription\n");
	scanf("%f",&inp_amt);

	float temp=inp_amt;
	for( i=0; i<5; i++ ) {
		//to sum the amount of the newspaper per week
		for( j=0; j<7;j++) {
			sum = sum + amount[i][j];
		}
		//checking the total is less then athe budget or not which is given by the user
		//If the total amount is less than the budget so we can make a subcription of that newspaper 
		if(sum <= temp){
			printf("%s\t",newspaper[i]);
			temp = temp - sum;
		}
		// sum making it zero 
		sum=0;
	}

}
