#include <stdio.h>
int main(void){
  int age = 37;
	char name[8] = "Kelvino";
  int *address = &age;

	void display(int *addr, int age, char name[8])
    {
        age = 40;
		*address = 50;

		printf("My name is %s and am %u years old\n",name,age);

	}
    display(address,age,name);
	printf("My name is %s and am %u years old", name,*address);
}
