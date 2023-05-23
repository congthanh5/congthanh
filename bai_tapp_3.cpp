#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ){
    int a, b, c=1;
    srand(time(0));
    a = rand()%100+1;
    printf("chao mung ban den voi tro choi \n");
    do{
    	printf("moi ban nhap so tu 1-100: ");
    	scanf("%d",&b);
    	if (b<a){
    	 	printf("ban nhap so qua be ");
    	}else if(b>a) {
    		printf("ban nhap so qua lon ");
    	} else {
    		printf("ban da nhap dung so cua game");
		}
    	c++;
	} while (a!=b);
    
	return 0;
}

