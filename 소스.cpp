// ���� ���߱� ����
#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	int tryr = 0;
	char ans = 'f';
	char chr;

	printf("======== ���� ���߱� ���� ========\n\n");
	do {
		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf_s(" %c", &chr); // ������� �ʼ�!!
		tryr++;

		if (chr > ans)
			printf("�ƽ�Ű �ڵ� ���� �ʹ� �����ϴ�.\n");
		if (chr < ans)
			printf("�ƽ�Ű �ڵ� ���� �ʹ� �����ϴ�.\n");
	} while (chr != ans); // do while�� �� �ؿ� ���ǽ��� ���� 


	printf("�����մϴ�. �õ�Ƚ�� = %d��\n", tryr);
	return 0;
}