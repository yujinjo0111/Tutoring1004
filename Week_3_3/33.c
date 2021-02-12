#include <stdio.h>
struct storage{
	char name[20];
	char number[100];

};
int main()
{
	struct storage people[10];
	
	char input[100];
	for (int i = 0; i < 10; i++)
	{
		printf("이름 : \n");
		scanf_s("%s", people[i].name);  //에러에러에러!!!! 
		printf("전화번호 :");
		scanf_s("%s", people[i].number);
	}
	
		printf("검색할 사람 이름:");
	scanf_s("%s", input);
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(input, people[i].name) == 0)
			printf("찾은 번호: %s", people[i].number);
		else
			printf("없습니다");
	}
	return 0;


}
