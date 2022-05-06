 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	*(p + 2);//第三个元素 - arr[2]
//}
//int main()
//{
//	char* a[] = { "work","at","aibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main() 
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c }; 
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3); 
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//题目：字符串逆序
//#include<string.h>
//#include<assert.h>
//
//void reverse(char*str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	//abcdef --> fedcba
//	//逆序函数
//	reverse(arr);
//	printf("逆序后的字符串：%s\n", arr);
//	return 0;
//}题目：eg:2+22+222+2222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//
//		sum +=ret ;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//题目：水仙花数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数(自幂数）
//		//1.计算i的位数 n 位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//			
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//			
//		}
//		//比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//把图形分为上下两部分
//	//上七行,下六行
//	for (i = 0; i < line; i++)
//	{
//		//图形无非由两部分组成" " "*"
//		//先打印空格
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//再打印星号
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//先打印空格
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//题目：喝汽水,1瓶汽水1元,2个空瓶可以换一瓶汽水,给20元,可以买多少汽水.
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	if (money == 0)
//		total = 0;
//	else
//	    total = 2 * money - 1;
//
//	//total = money;
//	//empty = money;
//	////换回来的汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//
//	//}
//	printf("total=%d\n", total);
//
//	return 0;
//
//}
//题目：模拟实现strlen函数
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	const char* p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left != right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;

		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}