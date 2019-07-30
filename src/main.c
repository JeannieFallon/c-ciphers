#include <stdio.h>
#include "../lib/ciphers.h"

int main(void) {
	char plainChar, cipherChar;

	plainChar = 'A';
	cipherChar = getCipherChar(plainChar);

	printf("Cipher char: %c\n", cipherChar);

	return 0;
}