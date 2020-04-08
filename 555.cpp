#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[80];
	int max;
	int i, n, sum, flag = 0;
	printf("请输入数组长度：");
	scanf_s("%d", &n);
	// printf("\n");
	printf("请输入数组元素：");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] > 0) flag = 1;
	}
	// printf("\n");
	if (flag == 0)
	{
		printf("0\n");
		return 0;
	}
	max = a[0];
	if (a[0] < 0) max = 0;
	sum = max;
	for (i = 0; i < n - 1; i++)
	{
		sum = sum + a[i + 1];
		if (sum > max)
		{
			max = sum;
		}
		else if (sum < 0)
			sum = 0;
	}
	printf("最大字段和为：%d\n", max);
	system("pause");
	return 0;
}