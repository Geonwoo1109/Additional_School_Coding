#include <stdio.h>

int main() {

	int i, n;
	scanf("%d", &n);
	
	for (i = 2; i < n; i++) {
		if (n % i != 0) continue;
		else break;
	}
	
	printf("%d\n%s", i, i == n? "prime":"composite");
	

}
