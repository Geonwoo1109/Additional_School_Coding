#include <stdio.h>

int main() {
	
	int i = 2, n;
	
	scanf("%d", &n);
	

	do {
		if (n % i == 0) {
			printf("%d", i);
			n /= i;
		} else i++;
	} while (i <= n);
	
	printf("\n");
	
}
