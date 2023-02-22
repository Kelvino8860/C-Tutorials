#include <stdio.h>
int main(void){
   int age;
	 int *address = &age;
	 *address = 37;
	 printf("%p\n", &age);
	 printf("%u\n", *address);
}
