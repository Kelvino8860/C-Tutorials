#include <stdio.h>
int main(void){
  char j = 127;
  j = j + 10;
  printf("%u",j); /* 4294967177 */
}
