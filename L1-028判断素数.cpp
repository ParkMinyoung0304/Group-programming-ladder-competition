#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int sushu_judge(int n)
{
	int i;
	if (n == 1)
		return 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)   //判断因子
			return 0;
	}
	return 1;
}
int main()
{
	int count, num;
	scanf("%d", &count);
	for (int j = 0; j < count; j++)
	{
		scanf("%d", &num);
		if (sushu_judge(num))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}


