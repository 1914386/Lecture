/*

#include<stdio.h>
#include<string.h>
#define SIZE 3
#define STU_NUMBER 1
#define REG_NUMBER 2

/*12.04
struct student1 {
	int number;
	char name[10];
	double grade;
};

struct student2 {
	int number;
	char name[10];
	double grade;
};

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

struct student3 {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	
	char love[] = "100";
	int value;

	sscanf_s(love, "%d", &value);
	printf("%d\n", value);
	value++;
	sprintf_s(love, "%d", value);
	printf("%s\n\n", love);


	//11�� 14 - ����ü ���� #1
	struct student1 s;
	s.number = 20190001;
	strcpy_s(s.name, "ȫ�浿");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n\n", s.grade);

	//11�� 15 - ���� #2
	struct student2 t;
	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &t.number);
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", &t.name, sizeof(t.name));
	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf_s("%lf", &t.grade);

	printf("\n�й�: %d\n", t.number);
	printf("�̸�: %s\n", t.name);
	printf("����: %f\n\n", t.grade);


	//11�� 20 - �簢�� point ����ü ��Ÿ����
	struct rect r;
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);
	printf("������ ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;
	area = w * h;
	peri = 2 * (w + h);

	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n\n", area, peri);
	

	//11�� 28 - ����ü �迭
	struct student3 list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf_s("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", &list[i].name, sizeof(list[i].name));
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("\n�й�: %d, �̸�: %s, ����: %f\n", list[i].number, list[i].name, list[i].grade);
	
	printf("\n");

	//11�� 31 - ����ü ������
	struct student3 u = { 20070204,"ȫ�浿",4.3 };
	struct student3* p;
	p = &u;

	printf("\n�й�: %d, �̸�: %s, ����: %f\n", u.number, u.name, u.grade);
	printf("\n�й�: %d, �̸�: %s, ����: %f\n", (*p).number, (*p).name, (*p).grade);
	printf("\n�й�: %d, �̸�: %s, ����: %f\n\n", p->number, p->name, p->grade);
	
	return 0;
}
*/

/*struct vector
{
	float x;
	float y;
};
struct vector get_vector_sum(struct vector a, struct vector b);

struct student 
{
	int type;
	union
	{
		int stu_number;
		char reg_number[15];
	}id;
	char name[20];
};

void print(struct student s)
{
	switch (s.type)
	{
	case STU_NUMBER:
		printf("�й�: %d\n", s.id.stu_number);
		printf("�̸�: %s\n", s.name);
		break;
	case REG_NUMBER:
		printf("�ֹε�Ϲ�ȣ: %s\n", s.id.reg_number);
		printf("�̸�: %s\n", s.name);
		break;
	default:
		printf("Ÿ�� ����\n");
		break;
	}
}

//11�� 62
typedef struct point
{
	int x;
	int y;
} POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
	//11�� 41 - lab: ���� ����
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("������ ���� (%f, %f)�Դϴ�.\n\n", sum.x, sum.y);
	
	//11�� 46 - ����ü Ÿ�� �ʵ�
	struct student s1, s2;
	s1.type = STU_NUMBER;
	s1.id.stu_number = 20190001;
	strcpy_s(s1.name, "ȫ�浿");

	s2.type = REG_NUMBER;
	strcpy_s(s2.id.reg_number, "860101-1056076");
	strcpy_s(s2.name, "��ö��\n");

	print(s1);
	print(s2);

	//11�� 55 - ������

	//11�� 62 - typedef
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;

	result = translate(p, delta);
	printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.\n\n", result.x, result.y);
	
	//11�� 67 - mini project: ���� ���� �л� ã��
	
	return 0;

}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}

POINT translate(POINT p, POINT delta)
{
	point new_p;
	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

*/