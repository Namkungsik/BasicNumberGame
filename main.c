#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#pragma warning ( disable : 4996 )

void main(void)
{
	int nNum = 0, nRandom = 0, nTry = 0, nScore = 0;

	srand((unsigned)time(NULL));

	while (nTry < 3)
	{
		nRandom = rand() % 10 + 1;

		printf("정답을 입력하세요\n");
		scanf("%d", &nNum);

		if (nRandom == nNum)
		{
			printf("정답입니다. 10점 획득\n");
			nScore += 10;
			nTry = 0;
		}
		else
		{
			printf("정답은 %d, 게임을 다시 진행합니다.\n", nRandom);
			nTry++;
		}
	}
	printf("게임 오버\n 최종 점수 %d\n", nScore);
}