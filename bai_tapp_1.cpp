#include <stdio.h>

int main( ){
    int a=0, b=0;
    while (a<=10){
        printf("%d",a);
        ++a;
    }
    do {
        ++b;
        printf("\n%d",b);
    } while (b<=10);

	return 0;
}

