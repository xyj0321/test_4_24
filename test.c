#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���������Ľϴ�ֵ
//��Ŀ���ݣ�
//дһ���������������Ľϴ�ֵ
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
//�ṹ�����͵����� 
//�ṹ��������
//�ṹ������Ķ���ͳ�ʼ��
//�ṹ���ڴ����
struct stu  //�ṹ��ؼ���
{
	int age;
	//char sex;     //�ṹ��
	char name[9];
	//struct stu*next;//�ṹ���������
};
//struct stu s={20,"zhangsan"}
int main()
{
	struct stu s = { 20, "zhangsan"};
	printf("%c\n",s.name);
	return 0;
}