#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

/*12.02
int count_word(const char* s);

char s3[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token, * context;

int main(void)
{
	//12�� 33 - lab: �ܾ� ����
	int wc = count_word("the c book");
	printf("�ܾ��� ����: %d\n\n", wc);

	//12�� 40 - ���ڿ� ����
	char dst[12] = "Hello";
	char src[6] = "World";
	strcat_s(dst, src);
	printf("%s\n\n", dst);

	//12�� 44 - ���ڿ� ��
	char s1[80];
	char s2[80];
	int result;

	printf("ù��° �ܾ�: ");
	scanf_s("%s", &s1, sizeof(s1));
	printf("�ι�° �ܾ�: ");
	scanf_s("%s", &s2, sizeof(s2));

	result = strcmp(s1, s2);
	if (result < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", s1, s2);
	else if (result == 0)
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	else
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);


	//12�� 49 - ���ڿ� �˻�
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "dream";
	char* p;
	int loc;
	p = strstr(s, sub);
	loc = (int)(p - s);
	if (p != NULL)
		printf("ù��° %s��/�� %d���� �߰ߵǾ���\n\n", sub, loc);
	else
		printf("%s��/�� �߰ߵ��� �ʾ���.\n\n", sub);


	//12�� 51 - ���ڿ� ��ū �и�
	token = strtok_s(s3, seps, &context);
	while (token != NULL)
	{
		printf("��ū: %s\n", token);
		token = strtok_s(NULL, seps, &context);
	}

	printf("\n");

	//12�� 55 - ���ڿ� ��ġ ��ȯ
	char love[] = "100";
	int value;

	sscanf_s(love, "%d", &value);
	printf("%d\n", value);
	value++;
	sprintf_s(love, "%d", value);
	printf("%s\n", love);


	//12�� 65 - 2���� �迭�� �Է�
	int i;
	char fruits[3][20];
	for (i = 0; i < 3; i++)
	{
		printf("���� �̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", fruits[i]);
	}
	for (i = 0; i < 3; i++)
		printf("%d��° ����: %s\n\n", i, fruits[i]);


	return 0;
}


int count_word(const char* s)
{
	int i;
	int wc = 0;
	int waiting = 1;

	for (i = 0; s[i] != NULL; ++i)
	{
		if (isalpha(s[i]))
		{
			if (waiting)
			{
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	}

	return wc;
}

*/

/*12.11
int main(void)
{
	printf("%10.3f\n\n", 12.3245);
	int a, b;
	printf("6���� ���� �Է�: ");
	scanf_s("%3d %3d", &a, &b);
	printf("%d %d\n\n", a, b);


	FILE* fp = NULL;
	fopen_s(&fp, "sample.txt", "w");

	if ((fopen_s(&fp,"sample.txt","w"))!=0)
		printf("���� ���� ����\n");

	else
		printf("���� ���� ����\n");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fclose(fp);


	FILE* fp1, * fp2;
	char file1[100], file2[100];
	char buffer[100];
	errno_t err;

	printf("���� ���� �̸�: ");
	scanf_s("%s", &file1, sizeof(file1));

	printf("���� ���� �̸�: ");
	scanf_s("%s", &file2, sizeof(file2));

	if ((fopen_s(&fp1, file1, "r")) != 0) 
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	if ((fopen_s(&fp2, file2, "r")) != 0)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}

*/