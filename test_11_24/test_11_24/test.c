#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//void init(int(*parr)[4])//int arr[3][4]
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//parr[i][j] = 4 * i + j+1;
//			//*(parr + 4 * i + j) = 4*i+j+1;
//			*(*(parr + i) + j) = 4 * i + j + 1;
//		}
//	}
//}
//
//
//void print(int(*parr)[4])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\n",parr[i][j]);
//		}
//	}
//}
//void init(int *parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		parr[i] = i;
//	}
//}
//void print(int *parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", parr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[3][4];
//	arr[0][0];
//	//init((int *)arr,sizeof(arr)/sizeof(arr[0][0]));
//	//print((int *)arr, sizeof(arr) / sizeof(arr[0][0]));
//	init(arr[0], sizeof(arr) / sizeof(arr[0][0]));
//	print(arr[0], sizeof(arr) / sizeof(arr[0][0]));
//	system("pause");
//	return  0;
//}


//
//
//#include <stdio.h>
//
//void fun(int **p)
//{
//
//}
//int main()
//{
//	int **q = NULL;
//	int *r = NULL;
//	int *arr[10];
//	fun(q);
//	fun(&r);
//	fun(arr);
//	return 0;
//}
//
//#include <stdio.h>
//
//void fun(int arr[][4][5])
//{
//
//}
//void fun2(int (*p)[4][5])
//{
//
//}
//int main()
//{
//	int arr[3][4][5];
//	//fun(arr);
//	fun2(arr);
//	return 0;
//}

//
//
//#include <stdio.h>
//
//void fun()
//{
//	printf("test fun()\n");
//}
//
//
//char * fun2(char *pc, int *pi, double d)
//{
//	return NULL;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	int *arr[10];
//
//	void (*pfun)() = fun;
//	char *(*pfun2)(char*, int *, double) = &fun2;
//	/*printf("%p\n", fun);
//	printf("%p\n", &fun);
//	fun();
//	(*fun)();*/
//	pfun();
//	(*pfun)();
//	int *(*parr)[10] = &arr;
//	system("pause");
//	return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//enum OP
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a*b;
//}
//int _div(int a, int b)
//{
//	if (b == 0)
//	{
//		printf("除数位0\n");
//	}
//	return a / b;
//}
//
//
//void menu()
//{
//	printf("*************************\n");
//	printf("**** 1.add   2.sub   ****\n");
//	printf("**** 3.mul   4.div   ****\n");
//	printf("******** 0.exit *********\n");
//	printf("*************************\n");
//}
//
////转移表
//int(*pfun[5])(int, int) = {0, _add, _sub, _mul, _div};
//
//int main()
//{
//	int input = 1;
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	while (input)
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		printf("请输入两个整数操作数>:");
//		scanf("%d%d", &num1, &num2);
//		if (input >= 1 && input <= 4)
//		{
//			ret = pfun[input](num1, num2);
//		}
//		else if (input == 0)
//		{
//			exit(EXIT_FAILURE);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		/*switch (input)
//		{
//		case 1:
//			ret = _add(num1, num2);
//			break;
//		case 2:
//			ret = _sub(num1, num2);
//			break;
//		case 3:
//			ret = _mul(num1, num2);
//			break;
//		case 4:
//			ret = _div(num1, num2);
//			break;
//		case 0:
//			exit(EXIT_FAILURE);
//			break;
//		default:
//			printf("选择错误,请重新选择.\n");
//			break;
//		}*/
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}
//




/*
int main()
{
	int *p;
	int*arr[10];
	int(*pfun[4])(int , int);
	pfun[0] = add;
	pfun[1] = sub;
	pfun[2] = mul;
	pfun[3] = div;
	return 0;
}*/


//#include <stdio.h>
//int main()
//{
//	int *(*pfun[4])(int *, char *);
//	int *(*(*ppfun)[4])(int *, char *) = &pfun;
//
//	return 0;
//}


//typedef 
//
//#include <stdio.h>
//
//typedef unsigned int uint;
//typedef int(*ptrArr)[4] ;//ptrArr是数组指针类型
//
//typedef char(*ptr_c_c_i)(char *, int *);
//typedef char*(*pptr_c_c_i)(char *, int *);
//typedef int *(*(*ppfun)[4])(int *, char *);
//
////fun和fun2是相同的函数，只是名字不同
//pptr_c_c_i fun(int *, ptr_c_c_i pfun);
//char *(*fun2(int *, char(*pfun)(int *, char *)))(char *, int*);
//int main()
//{
//	//int(*p)[4];
//	//int(*q)[4];
//	
//	int arr[4];
//	ptrArr p = &arr;
//	ppfun q;
//	return 0;
//}

//
//
//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//typedef struct Stu
//{
//	int score;
//	char name[10];
//}Stu;
//
//
//int intcmp(const void *a, const void *b)
//{
//	if (*(int*)a > *(int *)b)
//	{
//		return 1;
//	}
//	else if (*(int*)a == *(int *)b)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int str_cmp(const void *a, const void *b)
//{
//	if (strcmp((char *)(*(int *)a), (char *)(*(int *)b)) > 0)
//	{
//		return 1;
//	}
//	else if (strcmp((char *)(*(int *)a), (char *)(*(int *)b)) == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//
//int stu_cmp(const void *a, const void *b)
//{
//	if (((Stu*)a)->score > ((Stu*)b)->score)
//		return 1;
//	else if (((Stu*)a)->score == ((Stu*)b)->score)
//		return 0;
//	else
//		return -1;
//}
//
//int main()
//{
//	Stu stu[] = { { 100, "zhangsan" }, { 10, "lisi" }, { 50, "wangwu" } };
//	qsort(stu, 3, sizeof(Stu), stu_cmp);
//	int i = 0;
//	for(i = 0; i < 3; i++)
//	{
//		printf("%s\n", stu[i].name);
//	}
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	//int arr[10] = {1,3,5,7,9,2,4,6,8,10};
//	int i = 0;
//	char *arr[] = { "aaaa", "dddd", "cccc", "bbbb" };
//	//qsort(arr, 10, 4, intcmp);
//	qsort(arr, 4, 4, str_cmp);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
void operation(int (*pfun)(int, int), int num1,int num2)
{
	int ret = 0;
	ret = pfun(num1, num2);
	printf("ret = %d\n", ret);
}

int bubble(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int a = 10;
	int b = 20;
	operation(add,a,b);
	operation(sub,a,b);
	return 0;
}