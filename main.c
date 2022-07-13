#include<stdio.h>
main(){
	int number = 0;
	printf("number_check = ");
	scanf("%d",&number);
	
	if( number % 2 == 0){
	printf("complete");
    }
    if( number % 2 == 1){
    printf("not finished");
	}
}