#include <stdio.h>

int main(){
	
	int n , i;
	long long  fact=1;
	
	printf("Enter the number of Participants : ");
	scanf("%d",&n);
	
	for(i=1 ; n >= i ; i++){
		
		fact*=i;
	}
	
	printf("There are %lld seating arrangements for %d participants",fact,n);
	
	return 0;
}
