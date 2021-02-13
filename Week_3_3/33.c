#include <stdio.h>
#include <string.h> //이거 쓰기 strcmp작동
struct storage {
	char name[20];
	char number[100];

};
int main()
{
	struct storage people[2];

	char input[100];
	for (int i = 0; i < 2; i++)
	{
		printf("이름 : \n");
		scanf("%s", people[i].name);  
		printf("전화번호 :");
		scanf("%s", people[i].number);
	}

	printf("검색할 사람 이름:");
	scanf("%s", input);
	for (int i = 0; i < 2; i++)
	{
		if (strcmp(input, people[i].name) == 0) {
			printf("찾은 번호: %s", people[i].number);    //else로 하지 말고 return printf 
			return;
		}
	}
	printf("없습니다");
	return 0;


}
