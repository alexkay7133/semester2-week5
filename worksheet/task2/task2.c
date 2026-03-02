/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Alex Kay
 * ID: rsxr0509
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	int count = 1;
	int length = 0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);
	hex = toupper(hex);

	for (int i = 0; i < 9; i++) {
		if (hex[i] == '\0') {
			break;
		}
		else {
			length++
		}
	}
	for (; length >= 0; length--) {
		switch (hex[length]) {
			case '0': case '1': case '2': case '3': case '4': 
			case '5': case '6': case '7': case '8': case '9':
				decimal = decimal + (atoi(hex[length])*count);
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