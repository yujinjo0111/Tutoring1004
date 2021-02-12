#include <stdio.h>
struct class
{
	int classnumber;
	int koreanscore;
	int englishscore;
	int mathscore;
	float average;

};
int scoresum(int koreanscore,int englishscore,int mathscore)
{
	int sum = koreanscore + englishscore + mathscore;
	return sum;

}
float average(float sum,int count)
{
	float average = sum /count;
	return average;
}
int main(void)
{
struct class student1;


	printf("학번 : ");
	scanf_s("%d", &student1.classnumber);
	printf("국어 점수:");
	scanf_s("%d", &student1.koreanscore);
	printf("영어 점수:");
	scanf_s("%d", &student1.englishscore);
	printf("수학 점수:");
	scanf_s("%d", &student1.mathscore);

	int sum= scoresum(student1.koreanscore, student1.englishscore, student1.mathscore);

	printf("평균:%lf", average(sum,3));

}



