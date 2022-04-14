#include <stdio.h>

//Array
int binsearch(int list[], int n, int searchnum);

int main()
{
	int june[30] = { 1, 3, 5, 6, 7, 8, 11, 12, 14, 15, 24, 26, 42, 43, 48, 49, 51, 55, 56, 59, 66, 67, 69, 70, 71, 73, 75, 80, 96, 99 };
	int index, searchnum;

	for (int i = 0; i < 5; i++) {
		printf("ã���ô� ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &searchnum);
		
		index = binsearch(june, 30, searchnum);

		if (index == -1)
			printf("ã���ô� ���ڰ� �����ϴ�.\n\n");
		else
			printf("ã���ô� ������ index �� : %d\n\n", index);
	}
	
	return 0;
}

int binsearch(int list[], int n, int searchnum) {
	int mid;
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		mid = (left + right) / 2;
		if (searchnum < list[mid])
			right = mid - 1;
		else if (searchnum == list[mid])
			return mid;
		else    //searchnum > list[mid]
			left = mid + 1;
	}
	return -1;
}
