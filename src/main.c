#include <stdio.h>
#include "../lib/rot13.h"

int main(void) {

	//test
	char arr[] = "aBc1! xYz";
	printf("Plain text:\n%s\n", arr);

	rot13(arr);

	printf("Cipher text:\n%s\n", arr);

	return 0;
}
