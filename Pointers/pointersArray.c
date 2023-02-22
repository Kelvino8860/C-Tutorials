#include <stdio.h>
int main(void){
    int prices[3] = {3,5,4};
		printf("First number: %u \n", *prices);
		printf("Second number: %u\n", *(prices + 1));
		printf("Third number: %u", *(prices + 2));
}
