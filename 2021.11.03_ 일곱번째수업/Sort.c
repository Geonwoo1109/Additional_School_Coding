#include <stdio.h>

int list[8] = {69, 10, 30, 2, 16, 8, 31, 22};
int size = 8;
int swap, i, j, k;

void insentsort() {
	
}

//미완성 
void selectionsort() {
	printf("\n<<선택 정렬 수행>>\n");
	for (i=1; i<size; i++) {
		printf("\n\n%d단계>>", i);
		for(j=0; j<size; j++) {
			if(list[j] > )
		}
	}
}

void bubblesort(int list[8], int n) {
	printf("\n<<버블 정렬 수행>>\n");
	
	for (i=1; i<size; i++) {
		printf("\n\n%d단계>>", i);
		
		for (j=0; j<size-i; j++) {
			if (list[j] > list[j+1]) {
				swap = list[j];
				list[j] = list[j+1];
				list[j+1] = swap;
			}
			printf("\n   ");
			for(k=0; k<size; k++) printf("%2d ", list[k]);
		}
		printf("\n");
	}
}

main() {
	printf("정렬할 원소: ");
	for (i=0; i<size; i++) printf("%d ", list[i]);
	
	bubblesort(list, size);
	getchar();
}
