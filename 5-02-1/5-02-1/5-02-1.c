#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


/*
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//abcdef  ===>  fedcba  ==>字符数组
//char *str = "abcdef";  readonly  只读
//reverse_string(str);

void reverse_string(char *str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char str[] = "abcdef";
    //str[0]='g';
	printf("%s\n", str);
	reverse_string(str);
	printf("%s\n", str);

	//char *str = "abcdef";//readOnly
	//*(str+1) = 'g';

    system("pause");
	return 0;
}

//递归
void reverse_string(char *p)
{
	int len = strlen(p);
	char tmp = *p;
	*p = *(p + len - 1);
	*(p + len - 1) = '\0';
	if (strlen(p + 1) > 1)
	{
		reverse_string(p + 1);
	}
	*(p + len - 1) = tmp;
}
int main()
{
	char str[] = "abcdef";
	printf("%s\n", str);
	reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
*/


/*
//1      A==>C     1
//2     A==>B   A==>C  B==>C     3
//3     A==>C  A==>B  C==>B   A==>C   B==>A   B==>C  A==>C   7
//64      2^64-1

void Move(char pos1, char pos2)
{
	printf("%c-->%c\n", pos1, pos2);
}
void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		Move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2);
		Move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	Hanoi(3, 'A', 'B', 'C');
	system("pause");
	return 0;
}
*/


/*
//递归和非递归分别实现strlen 
//非递归
//int MyStrlen(char *str)
//{
//	
//	int count = 0;
//	//assert(str != NULL);//断言 是宏 不是函数 在DEBUG条件下有作用（调试、开发）   
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归
int MyStrlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + MyStrlen(str + 1);
	}
}
int main()
{
	char *str = "abcdef";     //6
	//char *str = "abcdef\0xyz";  //6
	
	int len = MyStrlen(str);
	
	//int len = MyStrlen(NULL);
	printf("%d\n", len);
	system("pause");
	return 0;
}
*/


/*
//递归方式实现打印一个整数的每一位
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}
int main()
{
	print(123);
	system("pause");
	return 0;
}
*/


/*
//递归和非递归分别实现求第n个斐波那契数
//递归   1  1  2  3  5  8   13    21   34
int count = 0;
//int Fabonaci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		count++;
//		return 1;
//	}
//	else
//	{
//		return Fabonaci(n - 1) + Fabonaci(n - 2);
//	}
//}

//非递归    非递归的速度快于递归
int Fabonaci(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	int res = Fabonaci(5);
	printf("%d\n",res);
    printf("%d\n",count);
	system("pause");
	return 0;
}
*/


/*
//编写一个函数实现n^k，使用递归实现 
//n^k   2^3-->2*2^2  ==>2*2*2^1
int MyPow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*MyPow(n, k - 1);//n*n^k-1 = n^k
	}
}
int main()
{
	int res = MyPow(2,3);
	printf("%d\n", res);
	system("pause");
	return 0;
}
*/


/*
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19 
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return DigitSum(n / 10) + n % 10;
	}
}
int main()
{
	int res = DigitSum(1729);
	printf("%d\n", res);
	system("pause");
	return 0;
}
*/


/*
//递归和非递归分别实现求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

int Fac(int n)//5! = 5*4!   5*4*3!
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*Fac(n - 1);
	}
}
int main()
{
	printf("%d\n", Fac(5));
	system("pause");
	return 0;
}
*/