/*
◈ 다음의 구조체를 사용하여 주어진 조건에 맞는 프로그램을 작성하시오.
struct student
{
  int num;
  char name[20];
  int score[5];
  double avg;
};

- student 구조체 변수(s1)에 평균을 제외한 나머지 멤버를 초기화 한다.
- 초기화된 구조체 변수의 값을 출력하고 평균을 구하여 저장한 후에 구조체 변수를 변환하는 print_avg 함수를 만든다.
- main함수에서 print_avg 함수를 호출하여 반환된 구조체의 평균을 출력한다. 

실행결과)
  학번: 10922
  이름: 대덕고
  점수: 82 93 74 90 65
  평균: 80.8
  */

#include <stdio.h>

float avg; // 전역변수 선언

struct student {
	int num;
	char name[20];
	int score[5];
	double avg;
} s1 = {10922, "대덕고", 82, 93, 74, 90, 65};

int main() {
	print_avg(s1);
	printf("\n평균: %.1f", avg);
}

void print_avg(struct student s1) {
	
	printf("학번: %d\n", s1.num);
	printf("이름: %s\n", s1.name);
	printf("점수: ");
	
	int i;
	for (i=0; i<5; i++) {
		printf("%d ", s1.score[i]);
		s1.avg = s1.avg + s1.score[i];
	}
	
	avg = s1.avg / 5.0;
}
