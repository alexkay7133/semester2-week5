/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Alex Kay
 * ID: rsxr0509
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
	long decimal=0;
	int count = 1;
	int length = 0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);

	for (int i = 0; i < 9; i++) {
		if (hex[i] == '\0') {
			break;
		}
			hex[i] = toupper(hex[i]);
			length++;
	}
	length -= 2;
	for (; length >= 0; length--) {
		switch (hex[length]) {
			case '0': case '1': case '2': case '3': case '4': 
			case '5': case '6': case '7': case '8': case '9':
				int hex_number = (int)hex[length] - 48; 
				//Sub 48 because 0 is the 48th ASCII character, so returns 48. Then 1 is the 49th, and so on
				decimal = decimal + (hex_number*count);
				count = count*16;
				break;
			case 'A':
				decimal = decimal + (10*count);
				count = count*16;
				break;
			case 'B':
				decimal = decimal + (11*count);
				count = count*16;
				break;
			case 'C':
				decimal = decimal + (12*count);
				count = count*16;
				break;
			case 'D':
				decimal = decimal + (13*count);
				count = count*16;
				break;
			case 'E':
				decimal = decimal + (14*count);
				count = count*16;
				break;
			case 'F':
				decimal = decimal + (15*count);
				count = count*16;
				break;
			default:
				printf("Error: Invalid Hexadecimal\n");
				return 1;
		}
	}
	
	printf("decimal:%ld\n", decimal);
	
	return 0;
}