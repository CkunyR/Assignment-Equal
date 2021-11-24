#include <stdio.h>

int main()
{
	int num = 10;

	if (5 == num)//为防止漏掉 = ，使用此方法书写较为妥善
	{
		printf("lll\n");
	}
	//if (num = 8)// = 赋值，    == 相等
	//{
	//	printf("kkk\n");
 //   }
	return 0;
}