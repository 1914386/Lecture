#include<stdio.h>
#include<string.h>
#define	MAX 5

typedef struct student
{
	char name[20];
	int kor;
	int math;
	int eng;
}student;

double avr(student* sp);

int main(void)
{
	struct student score[MAX];
	int i;
	int j;
	int temp;

	for (i = 0; i < MAX; i++)
	{
		printf("�̸�: ");
		scanf_s("%s", &score[i].name, sizeof(score[i].name));

		printf("���� ����: ");
		scanf_s("%d", &score[i].kor);

		printf("���� ����: ");
		scanf_s("%d", &score[i].math);

		printf("���� ����: ");
		scanf_s("%d", &score[i].eng);


		printf("\n");
	}


	printf("\n\n");



	printf("                      ���� ���                      \n");
	printf("=====================================================\n");
	printf("�̸�    ����  ����   ����      ���    \n");
	printf("=====================================================\n");

	for (i = 0; i < MAX; i++)
	{
		printf("%s  %3d   %3d   %3g    %6.3f\n",
			score[i].name, score[i].kor, score[i].math, score[i].eng, avr(&score[i]));
	}


	printf("=====================================================\n");


	return 0;
}

double avr(student* sp)
{
	double avr = (sp->kor + sp->math + sp->eng) / 3.0;
	return avr;
}