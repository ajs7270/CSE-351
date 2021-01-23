#include <stdio.h>
#include "store_util.h"
#define SECTION_MASK 0x000000000000FFFF

void set_section(unsigned long* aisle, int index, unsigned short new_section) {
	// TODO: implement this method
	unsigned short* section;
	section = (unsigned short*)aisle + index;
	*section = 0x0000;
	*section = *section | new_section;
}

unsigned short get_section(unsigned long* aisle, int index) {
	unsigned short *section = (unsigned short * )aisle + index;
	return *section;

	/*
	print_binary_long(SECTION_MASK << 15);
	print_binary_long((*aisle & (SECTION_MASK << (index*16))) >> (index*16));

	return (*aisle & (SECTION_MASK << (index*16))) >> (index*16);
	unsigned short section;
	unsigned short masked_section;
	section = (unsigned short*)aisle + index;
	masked_section = SECTION_MASK & section;		// bit shifting??
	return masked_section;
	*/
}


int main(){

	unsigned long value = 0xAAAABBBBCCCCDDDD;
	//print_binary_short(get_section(&value, 0));
	//print_binary_short(get_section(&value, 1));
	//print_binary_short(get_section(&value, 2));
	//print_binary_short(get_section(&value, 3));
	set_section(&value, 2, 0x1111);
	print_binary_long(value);
	
	return 0;
}
