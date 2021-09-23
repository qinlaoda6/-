#include "stdio.h"
//struct S
//{	
//	int a;
//	char b[10];
//	char arr[20];
//	float x;
//};
//struct T
//{
//	int x;
//	struct S s;
//	char  *pc;
//
//};
//int main()
//{
//	char arr[] = "qinlaoda";
//	struct T t = { 10,{20,"Zzz","Hello world",3.14},arr}; 
//	printf("%d\n",t.x);
//	printf("%s\n",t.pc);
//	printf("%d\n",t.s.a);
//	printf("%s\n", t.s.b);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.x);
//	return 0;
//}
 typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void print2(Stu *ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = {"ÕÅÈı",26,"13048204568","ÄĞ"};
	Print1(s);
	print2(&s);
	return 0;
}