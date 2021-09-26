#include <stdio.h>

int main() {
	
	int i, k, n;
	
	scanf("%d", &n);
	
	/*
	
	for (i=1; i <= n+n-1; i++) {
		for (j=1; j <= n+n-1; j++) {
			if (i == n|| j == n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	*/
	for (i=1; i <= n+n-1; i++) {
		if (i < n) {
			for (k=1; k <= n-i; k++) printf(" ");
			for (k=1; k <= i+i-1; k++) printf("*");
		} else {
			for (k=1; k <= i-n; k++) printf(" ");
			for (k=1; k <= 2*(n+n-i)-1; k++) printf("*");
		}
		printf("\n");
	}
}
