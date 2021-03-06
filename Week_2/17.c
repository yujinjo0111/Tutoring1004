#include <stdio.h>
#include <string.h>
int score_func(char* arr);

int main()
{
	int T, sum;
	char str[80];					// O, X를 받을 문자열 선언
	printf("몇개를 받을 것인가: ");
	scanf("%d", &T);  				// 입력받을 Testcase 수

	for (int i = 0; i < T; i++) {
		printf("점수를 입력하시오 :");
		scanf("%s", str);			// O, X 점수를 입력 
		sum = score_func(str);		// O, X 점수를 계산하는 함수로 인자를 전달
		printf("점수의 합 :%d\n", sum);		// 점수 합을 출력
	}
}


int score_func(char* arr)
{
	int score_sum = 0, score = 1, i = 0;

	while (i < strlen(arr)) {  		// 문자열의 길이만큼 반복, strlen 문자열 길이 알아낸느 함수
		if (arr[i] == 'O') { 		// O라면
			score_sum += score;
			score++;				// O가 누적될 경우
		}
		else
			score = 1; // X일 경우 1로 초기화 
		i++;
	}
	return score_sum;
}
