#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求两个数的较大值
//题目内容：
//写一个函数求两个数的较大值
//int my_ADD(num1, num2)
//{
//	if (num1 >= num2)
//		return num1;
//	else
//		return num2;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int max=my_ADD(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	int n;
//	while (scanf("%d", &n != EOF)){
//
//	}
//
//	return 0;
//}
//结构体类型的声明 
//结构的自引用
//结构体变量的定义和初始化
//结构体内存对齐
struct stu  //结构体关键字
{
	int age;
	//char sex;     //结构体
	char name[9];
	//struct stu*next;//结构体的自引用
};
//struct stu s={20,"zhangsan"}
int main()
{
	struct stu s = { 20, "zhangsan"};
	printf("%c\n",s.name);
	return 0;
}