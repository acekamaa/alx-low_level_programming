/* program that displays all alphabets except e and q in lowercase */
#include <stdio.h>
int main() {
	/* declare variables */
	int i;
	for (i='a' ; i<='d' ; i++) {
		for (i='f' ; i<='p' ; i++) {
			for (i='r' ; i<='z' ; i++) {
				putchar(i);
			}
		}
	} 

	return 0;
}
