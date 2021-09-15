#include <stdio.h>

int main() {
	
	int Num;
	
	printf("네자리 숫자를 입력하세요: ");
	scanf("%d", &Num);

	int i;
	for (i=1000; i>0; i = i/10) {
		printf("%d의 자리수: %d\n", i, (Num-(Num%i)) / i);
		Num = Num % i;
	}
	
}
