#include <stdio.h>

int main( ){
    int num1, num2, sum=0;
    printf("nhap num1 va num 2 la: ");
    scanf("%d %d", &num1, &num2);
    
    do {
        sum= num1 + num2;
        printf("\n%d",sum);
        scanf("%d",&num1 , &num2);
    } while (num1 !=0 && num2 !=0);

	return 0;
}

