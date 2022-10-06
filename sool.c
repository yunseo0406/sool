#include <stdio.h>

// 허수

int main()

{

	int glass;

	printf("정연이의 주량은? (몇잔, 8잔 이하)");

	scanf("%d", &glass);

 

	(glass > 5) ? printf("그렇게 잘마시지 않습니다.") : 

		(glass <= 5 && glass > 3) ? printf("좀 더 못마십니다.") : printf("ㅋㅋ 정답이요");

 

	return 0;

}