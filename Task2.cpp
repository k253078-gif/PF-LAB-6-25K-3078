#include <stdio.h>

int main(){
	
	int num,i;
	printf("Enter your number to get it\'s table:");
	scanf("%d",&num);
	
	
	for(i=1;i<=10;i++){
		
		printf("\t%d x %d = %d\n",num,i,num*i);
	}
	
	return 0;
}
