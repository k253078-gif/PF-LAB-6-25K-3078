#include <stdio.h>

int main(){
	
    int balance=50000 , withdraw;
	
	while(balance >0){
		
		printf("Current Bank Balance : %d\n",balance);
		printf("Enter your withdrawal amount :");
		
	    if (scanf("%d", &withdraw) != 1) {
                printf("Invalid input. Exiting...\n");
                break;
    }
		if(withdraw <0){
			printf("Enter a positive amount!\n");
		}
		
		else if(withdraw > balance){
		  printf("Insufficent Bank Balance ! \n");
	}
		else{
			balance -= withdraw;
			printf("Withdrawal Successful!\n\nRemaining balance =%d\n\n",balance);
		}
	}
		printf("Your account is empty");
		
	return 0;
} 
