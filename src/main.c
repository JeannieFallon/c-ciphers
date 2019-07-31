#include <stdio.h>
#include "../lib/rot13.h"

int main(void) {

	//test
	char arr[] = "aBc1!";
	char * arrPtr = &arr[0];
	printf("Plain text:\n%s\n", arr);

	rot13(arrPtr);

	printf("Cipher text:\n%s\n", arr);

	return 0;
}
