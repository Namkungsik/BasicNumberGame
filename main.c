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

		printf("������ �Է��ϼ���\n");
		scanf("%d", &nNum);

		if (nRandom == nNum)
		{
			printf("�����Դϴ�. 10�� ȹ��\n");
			nScore += 10;
			nTry = 0;
		}
		else
		{
			printf("������ %d, ������ �ٽ� �����մϴ�.\n", nRandom);
			nTry++;
		}
	}
	printf("���� ����\n ���� ���� %d\n", nScore);
}