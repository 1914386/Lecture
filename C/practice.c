#include<stdio.h>
#include<limits.h>
#define PI 3.141592
#define TAX_RATE 0.2
#define SEC_PER_MINUTE 60
/*
int main(void)
{
	//3�� 63�� - ���� ���α׷� #2
	int a, b, sum;
	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &b);
	sum = a + b;
	printf("�� ���� ��: %d\n\n", sum);

	//3�� 66 - ���� ����
	const int MONTHS = 12;
	int ysalary, msalary;
	printf("������ �Է��ϼ���(����: ����): ");
	scanf_s("%d", &ysalary);
	msalary = ysalary / MONTHS;
	printf("�����ɾ�(����: ����): %d\n\n", msalary);
	printf("������ %f�Դϴ�.", ysalary * TAX_RATE);

	//3�� 68 - ���� ����
	float radius, area1;
	printf("�������� �Է��ϼ���: ");
	scanf_s("%f", &radius);
	area1 = PI * radius * radius;
	printf("���� ����: %f\n\n", area1);

	//3�� 70 - ȯ�� ���
	double rate, usd;
	int krw;
	printf("ȯ���� �Է��ϼ���: ");
	scanf_s("%lf", &rate);
	printf("��ȭ �ݾ��� �Է��ϼ���: ");
	scanf_s("%d", &krw);
	usd = krw / rate;
	printf("��ȭ %d���� %lf�޷��Դϴ�.\n\n", krw, usd);

	//3�� 72 - mini project - �簢���� �ѷ��� ����
	double w = 10.0;
	double h = 5.0;
	double area, perimeter;
	area = w * h;
	perimeter = 2 * (w + h);
	printf("�簢���� ���̿� �ѷ�: %lf %lf", area, perimeter);

	return 0;

	//�����÷ο�
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;
	s_money = s_money + 1;
	u_money = u_money + 1;
	printf("s_money = %d\nu_money = %d\n\n", s_money, u_money);

	//���� ���
	int x1 = 10;
	int y1 = 010;
	int z1 = 0x10;
	printf("x1=%d y1=%d z1=%d\n\n", x1, y1, z1);

	//�ε��Ҽ���
	float x2 = 1.2345e-5;
	printf("%f\n\n", x2);

	//������
	char code1 = '@';
	char code2 = 64;
	printf("%c %c\n\n", code1, code2);

	//4�� 58 - ���̵�, ��й�ȣ
	int id, pass;
	printf("id: ____\b\b\b\b");
	scanf_s("%d", &id);
	printf("pass: ____\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%04d\"�̰� �н������ \"%04d\"�Դϴ�.\n\n", id, pass);

	//4�� 61 - ���� ���
	int x, y, z, sum;
	sum = 0;
	printf("3���� ������ �Է��ϼ��� (x y z): ");
	scanf_s("%d %d %d", &x, &y, &z);
	sum += x;
	sum += y;
	sum += z;
	printf("3�� ������ ���� %d\n\n", sum);

	//��4�� 63 - mini project: �¾�� ���� �ð�
	double S, v, t;
	int min, sec;
	v = 300000;
	S = 149600000;
	printf("���� �ӵ��� %lfkm/s\n", v);
	printf("�¾�� �������� �Ÿ� %lfkm\n", S);
	t = S / v;
	printf("���� �ð��� %lf��\n", t);
	min = (int)t / 60;
	sec = (int)t % 60;
	printf("%lf�� = %d�� %d��", t, min, sec);

	return 0;

	//��5�� 11 = ����, �Ǽ� ��Ģ����
	double x, y, result;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &x, &y);
	result = x + y;
	printf("%lf + %lf = %lf\n", x, y, result);
	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);
	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);
	result = x / y;
	printf("%lf / %lf = %lf\n\n", x, y, result);

	//5�� 15 - ������ ������
	int input, input1, hour, minute, second;
	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &input);
	hour = input / 3600;
	input1 = input % 3600;
	minute = input1 / SEC_PER_MINUTE;
	second = input1 % SEC_PER_MINUTE;
	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n\n", input, hour, minute, second);

	//5�� 21 - Lab: �Ž����� ���
	int user, change = 0;
	int price, c5000, c1000, c500, c100;
	//int price, user, change, c5000, c1000, c500, c100;
	printf("���� ���� �Է��ϼ���: ");
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

	//5�� 28, 34 - (����) ���� ������
	int a = 10, b = 10, c = 33;
	a += 1;
	b *= 2;
	c %= 10 + 20;
	printf("a = %d  b = %d c = %d\n", a, b, c);
	b = 10 + (x = 2 + 7);
	printf("b = 10 + (x = 2 + 7) = %d\n\n", b);

	//5�� 41 - ���� ������
	int d = (3 >= 2) + 5;
	printf("(3 >= 2) + 5 = %d\n\n", d);

	//5�� 52 - �� ������
	int e = 1, f = 1;
	printf("%d || %d = %d\n\n", e, f, e || f);

	int year, result1;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);
	result1 = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result = %d\n\n", result1);

	//5�� 56 - ���� ������
	int m, n;
	printf("m�� n�� ���� �Է��Ͻÿ� (m n): ");
	scanf_s("%d %d", &m, &n);
	printf("m�� ���밪 = %d\n", (m > 0) ? m : -m);
	printf("�ִ밪 = %d\n", (m > n) ? m : n);
	printf("�ּҰ� = %d\n\n", (m < n) ? m : n);

	//��5�� 69 - Lab: 10������ 2������ ����ϱ�
	unsigned int num;
	printf("10����: ");
	scanf_s("%d", &num);
	unsigned int mask = 1 << 7;
	printf("2����: ");
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

	//5�� 72 - Lab: XOR�� �̿��� ��ȣȭ
	char data = 'a';
	char key = 0xff;
	char encrpted_data = data ^ key;
	printf("��ȣȭ�� ����=%c\n", encrpted_data);
	char orig_data = encrpted_data ^ key;
	printf("������ ������=%c\n\n", orig_data);

	//5�� 82 - ����ȯ
	int o;
	double p;
	p = 5 / 4;
	printf("%f\n", p);
	p = (double)5 / (double)4;
	printf("%f\n", p);
	o = 1.3 + 1.8;
	printf("%d\n", o);
	o = (int)1.3 + (int)1.8;
	printf("%d\n\n", o);

	//5�� 93 - mini project: ȭ�� �µ��� ������ �ٲٱ�
	double f_temp, c_temp;
	printf("ȭ���µ��� �Է��ϼ���: ");
	scanf_s("%lf", &f_temp);
	c_temp = ((double)5 / 9) * (f_temp - 32);
	printf("�����µ��� %lf�Դϴ�.", c_temp);
	return 0;
}

*/

/*
int main(void)
{
	//6�� 10 - if ���ǹ�
	int number;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number);
	if (number > 0)
	{
		printf("����Դϴ�.\n");
		printf("�Էµ� ���� %d�Դϴ�.\n\n", number);
	}
	else if (number == 0)
		printf("�Էµ� ���� 0�Դϴ�.\n\n");
	else
	{
		printf("�����Դϴ�.\n");
		printf("�Էµ� ���� %d�Դϴ�.\n\n", number);
	}
	
	//6�� 11 - ���밪
	int number1;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number1);
	printf("���밪: %d\n", (number1 > 0) ? number1 : -number1);
	if (number1 < 0)
		number1 = -number1;
	printf("���밪�� %d�Դϴ�.\n\n", number1);

	//6�� 18 - if else�� (Ȧ��, ¦��)
	int number2;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number2);
	if (number2 % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�.\n\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n\n");

	//6�� 19 - if else�� (����, �и�)
	int num1, num2, result;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);
	printf("�и� �Է��Ͻÿ�: ");
	scanf_s("%d", &num2);
	if (num2 == 0)
		printf("0���� ���� ���� �����ϴ�.");
	else
	{
		result = num1 / num2;
		printf("����� %d�Դϴ�.\n\n", result);
	}

	//6�� 20 - if else�� (���� �Ǵ�)
	int year;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d���� �����Դϴ�.\n\n", year);
	else
		printf("%d���� ������ �ƴմϴ�.\n\n", year);

	//6�� 21 - �߰� ����
	int n1;
	printf("n1�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n1);
	if (n1 >= 100)
		printf("large\n\n");
	else
		printf("small\n\n");

	//6�� 26 - else if ���� ���� (90�� �̻� A, 80�� �̻� B, 70�� �̻� C, 60�� �̻� D, �� �̸� F
	int score;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);
	if (score >= 90)
		printf("����: A\n\n");
	else if (score >= 80)
		printf("����: B\n\n");
	else if (score >= 70)
		printf("����: C\n\n");
	else if (score >= 60)
		printf("����: D\n\n");
	else
		printf("����: F\n\n");

	//��6�� 27 - else if ���� �з�
	char ch;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &ch, sizeof(ch));
	if (ch >= 'A' && ch <= 'Z')
		printf("%c�� �빮���Դϴ�.\n\n", ch);
	if (ch >= 'a' && ch <= 'b')
		printf("%c�� �ҹ����Դϴ�.\n\n", ch);
	if (ch >= '0' && ch <= '9')
		printf("%c�� �����Դϴ�.\n\n", ch);
	else
		printf("%c�� ��Ÿ�����Դϴ�.\n\n", ch);

	//6�� 28 - �߰� ����
	int cup;
	printf("���� ����� �Է��Ͻÿ�: ");
	scanf_s("%d", &cup);
	if (cup >= 200)
		printf("large\n\n");
	else if (cup >= 100 && cup < 200)
		printf("medium\n\n");
	else
		printf("small\n\n");

	//��6�� 29 - �ǽ�: �������
	int x, y, result1;
	char op;
	printf("������ �Է��Ͻÿ�\n(��: 2 + 5)\n>>");
	scanf_s("%d %c %d", &x, &op, sizeof(op), &y);
	switch (op)
	{
	case '+':
		result1 = x + y;
		break;
	case '-':
		result1 = x - y;
		break;
	case '*':
		result1 = x * y;
		break;
	case '/':
		result1 = x / y;
		break;
	case '%':
		result1 = x % y;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�.\n\n");
	}
	printf("%d %c %d = %d\n\n", x, op, y, result1);

	//6�� 33 - lab: ����������
	double a, b, c, dis;
	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (a == 0)
	{
		printf("�������� ���� %lf�Դϴ�.\n\n", -c / b);
	}
	else
	{
		dis = b * b - 4.0 * a * c;
		if (dis >= 0)
		{
			printf("�������� ���� %lf�Դϴ�.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("�������� ���� %lf�Դϴ�.\n\n", (-b - sqrt(dis)) / (2.0 * a));
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�.\n\n");
	}

	//6�� 47 - ���� �ϼ� ���
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

	//6�� 51 - �߰� ����
	int fruit;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &fruit);
	switch (fruit)
	{
	case 1:
		printf("���\n\n");
		break;
	case 2:
		printf("��\n\n");
	case 3:
		printf("�ٳ���\n\n");
		break;
	default:
		printf("����\n\n");
		break;
	}

	//6�� 55 - mini project: �ùٸ� �ﰢ�� ����
	int d, e, f;
	printf("�ﰢ���� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &d, &e, &f);
	if ((d + e) > f && (e + f) > d && (f + d) > e)
		printf("�ùٸ� �ﰢ��\n\n");
	else
		printf("�ùٸ��� ���� �ﰢ��\n\n");
	
	return 0;
}
*/

int main(void)
{
	//7�� 14 - while�� (������)
	int n1;
	int i1 = 1;
	printf("����ϰ� ���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n1);
	while (i1 <= 9)
	{
		printf("%d*%d = %d\n", n1, i1, n1 * i1);
		i1++;
	}
	printf("\n");

	//7�� 15 - while�� (����)
	int n2 = 1;
	printf("====================\n");
	printf("   n   n�� ����\n");
	printf("====================\n");
	while (n2 <= 10)
	{
		printf("%5d   %5d\n", n2, n2 * n2);
		n2++;
	}
	printf("\n");

	//7�� 17,18,19 - while�� (1���� n������ ��)
	int num, i, sum1, sum2, sum3;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	i = 1;
	sum1 = 0;
	while (i <= num)
	{
		sum1 += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", num, sum1);
	
	i = 2;
	sum2 = 0;
	while (i <= num)
	{
		sum2 += i;
		i += 2;
	}
	printf("1���� %d������ ¦������ %d�Դϴ�.\n\n", num, sum2);
	
	int k;
	i = 0;
	sum3 = 0;
	while (i < 5)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf_s("%d", &k);
		sum3 += k;
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n\n", sum3);
	
	//7�� 22 - while�� (���� ����)
	int a = 3;
	while (a)
	{
		printf("%d�� ���Դϴ�.\n", a);
		a--;
	}
	printf("%d�� �����Դϴ�.\n\n", a);

	//7�� 24 ~ 27 - ��Ƽ�� (���� ���)
	int grade = 0, n = 0;
	float sum = 0, average;
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
	printf("����� %f���Դϴ�.\n\n", average);
	
	//��7�� 29 - Lab: �ִ� �����
	int x, y, r;
	printf("�� ���� ������ �Է��Ͻÿ�(ū ��, ���� ��): ");
	scanf_s("%d %d", &x, &y);
	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n\n", x);
	
	//��7�� 32 - Lab: �ݰ���
	int halflife;
	double initial, current;
	int years = 0;
	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	scanf_s("%d", &halflife);
	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� ��=%f\n", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð�=%d��\n\n", years);
	
	//7�� 36 - �������� 1 (���� ���)
	int sg, cur, hour;
	hour = 1;
	printf("����� ������ ���� �Է��ϼ���: ");
	scanf_s("%d", &sg);
	cur = sg;
	while (hour < 7)
	{
		cur = cur * 4;
		printf("%d�ð� �� ������ ��: %d����\n", hour, cur);
		hour++;
	}
	printf("7�ð� �� ������ ��: %d����\n\n", cur);

	//7�� 35 - �������� 2 (����)
	int jp = 1;
	double init, curr;
	init = 1.0;
	curr = init;
	while (curr > init / 100)
	{
		curr = curr / 2.0;
		printf("%d�� ������ �� ����: %lf\n", jp, curr);
		jp += 1;
	}


	return 0;
}