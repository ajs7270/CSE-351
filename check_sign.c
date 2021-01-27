#include <stdio.h>

void main(){
	char a = 15U;
	//E-1
	printf("%d\n",a);
	printf("%d\n",(int)a);
	
	//E-2
	printf("%d\n", (unsigned)-1 > -2);
	printf("%d\n", (unsigned)-1 > -2);
	printf("%d\n", (unsigned)-2 > -2);
	printf("%d\n", (unsigned)-3 > -2);
	printf("%d\n", -1 > (unsigned)-2);
	printf("%d\n", -2 > (unsigned)-2);
	printf("%d\n", -3 > (unsigned)-2);
	
	// E-3
	unsigned char b = 0x80;
	char c = -1;
	printf("%u\n",b);
	printf("%u\n",c);
	
	printf("%d\n",(unsigned)-128 < 127);

	// E-4
	printf("%d\n",(int)b);

	
	printf("%ld",sizeof(15));

}
