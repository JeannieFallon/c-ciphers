#include <stdio.h>
#include "rot13.h"
#include "ciphers.h"

char * rot13(char * arr) {

	int i;

	i = 0;
	while (arr[i] != '\0') {
		arr[i] = getCipherChar(arr[i]);
		i++;
	}
	
	return arr;
}
