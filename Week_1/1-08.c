#include<stdio.h>
void main() {
int a;
float b;
printf("정수와 실수를 입력하세요 : ");
scanf("%d %f",&a,&b);
printf("%d * %.2f = %.2f",a,b,a*b);
}

입력: 3.14 5.5
문제가 정수와 실수를 입력하라고 했는데 둘 다 실수여서 먼저 입력된 3.14의 정수 3과 실수부분 0.14가 분리되어 각각 변수에 저장되었다.
