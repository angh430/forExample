#include <stdio.h>

int main() {
	Example05();
}

int Example01() {
	// printf : 출력
    // scanf_s : 입력
    // 0을 입력하면 "안녕하세요"
    // 1을 입력하면 "안녕히 가세요"
    // 2를 입력하면 "뭐" 
	int input = 0;
reinput:
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 0:
		printf("안녕하세요");
		break;
	case 1:
		printf("안녕히 가세요");
		break;
	case 2:
	case 3:
		printf("뭐");
		break;
	default:
		goto reinput;
	}
}

int Example02() {
	// 숫자를 입력받아라
	// 0~9 범위 숫자를 입력하면
	// 0, 2, 4, 6, 8 입력 시 "짝수"
	// 1, 3, 5, 7, 9 입력시  "홀수"
	// 0~9 범위 숫자가 아니라면
	// "숫자 범위를 벗어났습니다." 출력

	int input;
	reinput:
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &input);

	if (input >= 0 && input <= 9)
	{
		switch (input)
		{
		case 0: case 2: case 4: case 6: case 8:
			printf("짝수");
			break;
		case 1: case 3: case 5: case 7: case 9:
			printf("홀수");
			break;
		}
	}
	else
	{
		printf("숫자 범위를 벗어났습니다.");
		goto reinput;
	}
 


}

int Example03() {
	int input;
	printf("숫자 입력 : ");
	scanf_s("%d", &input);
	
	
	for (int standard = 2; standard <= 9; standard++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", input, i, input * i);
		}
	}



}

int Example04() {
	int size;
	printf("삼각형 크기를 입력해주세요 : ");
	scanf_s("%d", &size);






	

	



}

int Example05() {
	int num;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);				





*********


