#include <stdio.h>
#include "vigenere.h"
#include "ciphers.h"

void vigenere(char * arr, char * keyword, int arrLen) {

	char * charPtr;
	int i, j;

	i=0;
	while (arr[i] != '\0') {

		j=0;
		while (keyword[j] != '\0') {

			if (i > arrLen) {
				break;
			} else {
				//debug
				printf("i=%d, j=%d\nkeyword[%d] is: %c\nvigenereArr[%d] is: %c\n", 
					i, j, j, keyword[j],i, arr[i]);
			}

			i++;
			j++;
		}
	}
}