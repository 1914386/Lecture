/* 9.23

#include<stdio.h>
#define TAX_RATE 0.2
int main(void)
{
	//�ڷ����� ũ�� ���ϱ�//
	int x;
	printf("���� x�� ũ��: %d\n", sizeof(x));
	printf("char���� ũ��: %d\n", sizeof(char));
	printf("int���� ũ��: %d\n", sizeof(int));
	printf("short���� ũ��: %d\n", sizeof(short));
	printf("long���� ũ��: %d\n", sizeof(long));
	printf("long long���� ũ��: %d\n", sizeof(long long));
	printf("float���� ũ��: %d\n", sizeof(float));
	printf("double���� ũ��: %d\n", sizeof(double));
	

	//������ �ڷ����� ũ�� ���//
	short year = 0;
	int sale = 0;
	long total_sale = 0;
	long long large_value;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale = %d\n", total_sale);

	//���� ��� ���α׷�//
	int a = 10;
	int b = 010;
	int c = 0x10;

	printf("a = %d\n", a);
	printf("y = %d\n", b);
	printf("z = %d\n", c);


	//��ȣ ���//
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("������ %d �Դϴ�\n", y_salary);
	printf("������ %f �Դϴ�\n", y_salary * TAX_RATE);

	//�ε� �Ҽ��� �ڷ����� ũ�� ���//
	float d = 1.234567890123456789;
	double e = 1.234567890123456789;

	printf("float�� ũ�� = %d\n", sizeof(float));
	printf("double�� ũ�� = %d\n", sizeof(double));

	printf("d = %30.25f\n", d);
	printf("e = %30.25f\n", e);


	return 0;
}
*/

/* 9.25
#include<stdio.h>
int main(void)
{
	//���� ������ ���� ���//
	char code1 = 'A';
	char code2 = 65;

	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code2);


	//���� ����//
	char beep = 7;
	printf("%c", beep);

	char beep2 = '\a';
	printf("%c", beep2);
	
	//���̵�� �н�����//
	int id, pass;
	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
	printf("id: ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass:____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%04d\"�̰� �н������ \"%04d\"�Դϴ�.\n", id, pass);


	//sum_error - sum�� �ʱⰪ ����!//
	int x, y, z, sum;
	sum = 0;
	printf("3���� ������ �Է��ϼ��� (x y z): ");
	scanf_s("%d %d %d", &x, &y, &z);
	sum += x;
	sum += y;
	sum += z;
	printf("3�� ������ ���� %d\n",sum);


	//mini project: �¾�� ���� �ð�//
	double S, v, t;  //float���� �޸� ���� ���� double�� ����//
	v = 300000;
	S = 149600000;
	t = S / v;
	printf("���� �ӵ��� %6fkm/s\n", v);
	printf("�¾�� �������� �Ÿ��� %6fkm\n",S);
	printf("���� �ð��� %f��\n", t);

	//��������//
	double time = t / 60;
	int t_min = (int)time;
	float t_sec = (time - t_min) * 60;
	//double���� ���������� ��ȯ: (min)����//

	printf(" = %d�� %d��", t_min, (int)t_sec);
	return 0;
}
*/

/*9.30
#include<stdio.h>
#define	SEC_PER_MINUTE 60
int main()
{
	//�Ǽ� ��Ģ ����//
	double x, y;
	printf("�� ���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &x, &y);

	double add = x + y;
	double sub = x - y;
	double mul = x * y;
	double div = x / y;

	printf("%lf + %lf = %lf\n", x, y, add);
	printf("%lf - %lf = %lf\n", x, y, sub);
	printf("%lf * %lf = %lf\n", x, y, mul);
	printf("%lf / %lf = %lf\n\n", x, y, div);

	//������ ������//
	int t, min, sec;
	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &t);
	min = t / SEC_PER_MINUTE;
	sec = t % SEC_PER_MINUTE;
	printf("%d�ʴ� %d�� %d���Դϴ�.\n\n", t, min, sec);

	//���� ������//
	int a = 10, b = 10;
	printf("a = %d\n", a);
	printf("++a�� �� = %d\n", ++a);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("b--�� �� = %d\n", b--);
	printf("b = %d\n\n", b);

	//lab: �Ž����� ���//
	int price, user, change, c5000, c1000, c500, c100;
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &price);
	printf("����ڰ� �� ��: ");
	scanf_s("%d", &user);

	change = user - price;
	c5000 = change / 5000;
	change = change % 5000;
	c1000 = change / 1000;
	change = change % 1000;
	c500 = change / 500;
	change = change % 500;
	c100 = change / 100;
	change = change % 100;
	printf("��õ����: %d��\n", c5000);
	printf("õ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n\n", c100);
	return 0;
}
*/

/*10.2
#include<stdio.h>

int main(void)
{
	//test 1��//
	int a;
	float b;
	printf("����� �����ּ���:");
	scanf_s("%d", &a);
	b = a * 3.3;
	printf("%d�� = %f m2\n", a, b);

	//test 2��//
	double c = 3.32e-3;
	double d = 9.76e-4;
	printf("%lf + %lf = %lf\n\n", c, d, c + d);
	
	//���� ������//
	int x, y;
	x = 1;
	printf("���� x+1�� ���� %d\n", x + 1);
	printf("���� y=x+1�� ���� %d\n", y = x + 1);
	printf("���� y=10+(x=2+7)�� ���� %d\n", y = 10 + (x = 2 + 7));
	printf("���� y=x=3�� ���� %d\n\n", y = x = 3);
	
	//���� ���� ������ ���α׷�//
	int e = 10, f = 10, g = 33;
	e += 1;
	f *= 2;
	g %= 10 + 20;
	printf("e=%d f=%d g=%d\n\n", e, f, g);

	//���� ������//
	int resulT = (3 >= 2) + 5;
	printf("(3>=2)+5=%d\n\n", resulT);

	//�� ������//
	int h, i;
	printf("�� ���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d", &h, &i);
	printf("%d && %d = %d\n", h, i, h && i);
	printf("%d || %d = %d\n", h, i, h || i);
	printf("!%d = %d\n\n", h, !h);

	//��Lab: ���� - ���ǽ��� ���ذ� �� �ǹǷ� ã�ƺ���!!//
	int year, result;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &year);
	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result = %d\n\n", result);

	//���� ������//
	int j, k;
	printf("ù ��° �� = ");
	scanf_s("%d", &j);
	printf("�� ��° �� = ");
	scanf_s("%d", &k);
	printf("ū �� = %d\n", (j > k) ? j : k);
	printf("���� �� = %d\n\n", (j < k) ? j : k);
	return 0;
}
*/

/*10.07
#include<stdio.h>
int main(void)
{
	//��Lab: ��Ʈ �����ڸ� �̿��Ͽ� 10������ 2������ ����ϱ�//
	unsigned int num;
	printf("������: ");
	scanf_s("%u", &num);

	unsigned int mask = 1 << 7;
	printf("������: ");

	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n\n");


	//��Lab: XOR�� �̿��� ��ȣȭ//
	

	//������� ����ȯ//
	int i;
	double f;

	f = 5 / 4;
	printf("%f\n", f);

	f = (double)5 / 4;
	printf("%f\n", f);

	f = 5.0 / 4;
	printf("%f\n", f);

	f = (double)5 / (double)4;
	printf("%f\n", f);

	i = 1.3 + 1.8;
	printf("%d\n", i);

	i = (int)1.3 + (int)1.8;
	printf("%d\n\n", i);

	//�켱����//
	int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;
	printf("%d\n", result);

	result = 2 || 3 && 3 > 2;
	printf("%d\n", result);

	result = x = y = 1;
	printf("%d\n", result);

	result = - ++x + y--;
	printf("%d\n\n", result);

	//mini project: ȭ�� �µ��� ������ �ٲٱ�//
	double f_temp, c_temp;

	printf("ȭ���µ��� �Է��ϼ���: ");
	scanf_s("%lf", &f_temp);
	c_temp = ((double)5 / 9) * (f_temp - 32);
	printf("�����µ��� %f�Դϴ�.\n\n", c_temp);

	//if-else��: Ȧ¦//
	int number;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("¦���Դϴ�.\n\n");
	else
		printf("Ȧ���Դϴ�.\n\n");

	//if-else�� ���� #1//
	int score;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &score);
	if (score >= 60)
	{
		printf("�հ��Դϴ�.\n");
		printf("���б��� ���� �� �ֽ��ϴ�.\n\n");
	}
	else
	{
		printf("���հ��Դϴ�.\n");
		printf("�ٽ� �����ϼ���.\n\n");
	}

	//if else�� ���� #2//
	int n1, n2, n3;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &n1);
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &n2);

	if (n2 == 0)
	{
		printf("0���� ���� �� �����ϴ�.\n");
	}
	else
	{
		n3 = n1 / n2;
		printf("����� %d�Դϴ�\n", n3);
	}

	return 0;
}
*/

/*10.14
#include<stdio.h>
#include<math.h>
int main(void)
{
	//idpw ����!!//
	int id, pass;
	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
	printf("id: ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass:____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%04d\"�̰� �н������ \"%04d\"�Դϴ�.\n", id, pass);

	//�ٽǽ�: ��� ����//
	int x, y, result = 0;
	char op;

	printf("������ �Է��Ͻÿ�\n(��: 2 + 5)\n>>");
	scanf_s("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else
		printf("�������� �ʴ� �������Դϴ�.");

	printf("%d %c %d = %d", x, op, y, result);

	//��lab: ����������//
	int a, b, c;
	double res1, res2;
	printf("��� a, b, c�� ���ʴ�� �Է��Ͻÿ�:");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == 0)
		printf("�������� ���� %f�Դϴ�.", -c / b);
	else

	printf("�������� ���� %lf�Դϴ�.", res1);
	printf("�������� ���� %lf�Դϴ�.", res2);

	//���� #1 ���� �ϼ� ���//
	int month, days;
	printf("���� �Է��Ͻÿ�: ");
	scanf_s("%d", &month);
	
	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d�Դϴ�.\n\n", month, days);
	return 0;
}
*/

#include<stdio.h>
int main(void)
{
	//�ǽ�: if���� Ȱ���� ��� ����//
	int x, y, result;
	result = 0;
	char op;

	printf("������ �Է��Ͻÿ�\n(��: 2 + 5)\n>>");
	scanf_s("%d %c %d", &x, &op, sizeof(op), &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else
		printf("�������� �ʴ� �������Դϴ�.\n");

	printf("%d %c %d = %d\n\n", x, op, y, result);


	//�ǽ�: switch���� Ȱ���� ��� ����//
	int x1, y1, result1;
	result1 = 0;
	char op1;
	printf("������ �Է��Ͻÿ�\n(��: 2 + 5)\n>>");
	scanf_s("%d %c %d", &x1, &op1, sizeof(op1), &y1);

	switch (op1)
	{
	case '+':
		result1 = x1 + y1;
		break;
	case '-':
		result1 = x1 - y1;
		break;
	case '*':
		result1 = x1 * y1;
		break;
	case '/':
		result1 = x1 / y1;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�.\n");
		break;
	}

	printf("%d %c %d = %d\n\n", x1, op1, y1, result1);
	

	//�ݺ��� - while ���� �⺻//
	int a = 0;
	while (a < 5)
	{
		printf("Hello World!\n");
		a++; //++a�� �Ǵ� ��//
	}
	printf("\n");

	//while ���� ���� #3 - 1���� n������ �� ���//
	int n0, sum, k;
	sum = 0;
	k = 1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n0);

	while (k <= n0)
	{
		sum += k;
		k++;
	}
	printf("1���� %d������ ��: %d\n\n", n0, sum);

	//while ���� - ���� ����//
	int b = 3;
	while (b)
	{
		printf("%d�� ���Դϴ�.\n", b);
		b--;
	}
	printf("%d�� �����Դϴ�.\n\n", b);

	//while ���� ����//
	int n, grade;
	float sum, average;
	n = grade = 0;
	sum = 0;

	printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻʽÿ�.\n");

	while (grade >= 0)
	{
		printf("������ �Է��Ͻʽÿ�: ");
		scanf_s("%d", &grade);
		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;

	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n\n", average);

	//do-while�� ���� #2//
	


	return 0;
}