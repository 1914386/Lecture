#include<stdio.h>
int main(void)
{
	int grade, n;
	float sum, average;
	grade = 0;
	n = 0;

	printf("���� �� ���� �Է�\n");
	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &grade);
		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;
	average = sum / n;

	printf("���: %f��", average);

	return 0;
}