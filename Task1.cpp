#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (0 to stop):\n");

    while (1) {  
        
        if (scanf("%d", &num)== 0 || num == 0 ) 
		break;  
        sum += num;
        printf("Current sum = %d\n", sum);
    }

    printf("Final sum = %d\n", sum);
    return 0;
}

