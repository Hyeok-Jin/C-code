//file: arrayparam.c
#include <stdio.h>
int sumary(int* ary, int SIZE);
int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int* address = point;
	int arylength = sizeof(point) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < arylength; i++)
		sum += *(point + i);
	printf("���ο��� ���� ���� %d\n", sum);
	address = point;
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(point, arylength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], arylength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(address, arylength));

	return 0;
}
int sumary(int* ary, int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += *ary++;
	}
	return sum;
}