#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int addDigits (long int n) {
	if (n / 10 == 0) {
		return n;
	} else {		
		return addDigits(n / 10 + n % 10);
	}
}

int main () {
	FILE * fp;
	fp = freopen("input1.txt", "r", stdin);
	
	char buf[13];
	
	if (fp != NULL) {		
		while (fgets(buf, 13, fp) != NULL) {
			int test_cases = strtol(buf, NULL, 10);
			
			int i;
			for (i = 0; i < test_cases; i++) {
				fgets(buf, 13, fp);
				long int n = strtol(buf, NULL, 10);
				
				printf("%d\n", addDigits(n));
			}
		}		
	}
	
	
	
	return (0);
}
