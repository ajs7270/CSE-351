#include <stdio.h>

void main(){

	unsigned x = 0x40700000;
	printf("%f\n",*(float *)&x);
	
}
