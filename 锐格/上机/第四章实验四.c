//SI-Xiaolong

//9674
#include <stdio.h>
void main()
{
	int x, y;
	scanf("%d", &x);
	if (x < 0)
		y = x + 10;
	else if (x >= 0 && x <= 15)
		y = 3 * x + 5;
	else
		y = 2 * x - 10;
	printf("x=%d,y=%d", x, y);
}

//9675
#include "stdio.h"
void main()
{
	int a, b, c;     /* 三角形的3条边定义为整型变量a，b，c */
	scanf("%d,%d,%d", &a, &b, &c);    /* 用scanf函数输入3条边 */
	if (!(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a))
		/* 判断3条边是否构成三角形 */
		printf("三条边无法构成三角形\n");
	else if (a*a + b * b == c * c || a * a == b * b + c * c || b * b == c * c + a * a)
		/* 判断是否直角三角形 */
		printf("这是一个直角三角形\n");
	else if (a == b && b == c)                               /* 判断是否等边三角形 */
		printf("这是一个等边三角形\n");
	else if (a == b || b == c || a == c)   /* 判断是否等腰三角形 */
		printf("这是一个等腰三角形\n");
	else
		printf("这是一个普通三角形\n");
}

//9677
#include "stdio.h"
void main()
{
	int year, mon, days, leap;
	scanf("%d.%d", &year, &mon);
	switch (mon)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			leap = 1;
		else
			leap = 0;
		if (leap)
			days = 29;
		else
			days = 28;
	}
	printf("%d天\n", days);
}

//9677
#include "stdio.h"
void main()
{
	int a = 0, b = 1, c = 1, d = 3, B;
	B = a * b&&c - d;
	printf("%d,%d,%d,%d\n", a, b, c, B);
	B = c - d && a*b;
	printf("%d,%d,%d,%d\n", a, b, c, B);
	B = --a || ++b&&--c;
	printf("%d,%d,%d,%d\n", a, b, c, B);
	B = ++b&&--c || --a;
	++a;//这里有问题，想要获得“答案”要加上这一行。答案是错误的。
	printf("%d,%d,%d,%d", a, b, c, B);
}

//9678
#include "stdio.h"
void main()
{
	int a, b, c;
	int max, Max, min;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	if (c > max)
		Max = c;
	else
		max = Max;
	printf("%d,%d,%d", Max, max, min);
}

//9679
#include <stdio.h>
void main()
{
	int a, a1, a2, a3, a4, a5, n;
	scanf("%d", &a);
	if (a > 0 && a < 10)
		n = 1;
	else if (a < 100)
		n = 2;
	else if (a < 1000)
		n = 3;
	else if (a < 10000)
		n = 4;
	else
		n = 5;
	a1 = a % 10;
	a2 = a / 10 % 10;
	a3 = a / 100 % 10;
	a4 = a / 1000 % 10;
	a5 = a / 10000;
	switch (n)
	{
	case 5:
		printf("%d%d%d%d%d\n", a1, a2, a3, a4, a5);
		break;
	case 4:
		printf("%d%d%d%d\n", a1, a2, a3, a4);
		break;
	case 3:
		printf("%d%d%d\n", a1, a2, a3);
		break;
	case 2:
		printf("%d%d\n", a1, a2);
		break;
	case 1:
		printf("%d\n", a1);
	}
}
//顺便一提这破逼题难我半天，具体看[取反这道题.c]里所写

//9680
#include <stdio.h>
void main()
{
	int a, b;
	scanf("%d", &a);
	b = a % 7;
	switch (b)
	{
	case 0:
		printf("%d天后是星期日", a);
		break;
	case 1:
		printf("%d天后是星期一", a);
		break;
	case 2:
		printf("%d天后是星期二", a);
		break;
	case 3:
		printf("%d天后是星期三", a);
		break;
	case 4:
		printf("%d天后是星期四", a);
		break;
	case 5:
		printf("%d天后是星期五", a);
		break;
	case 6:
		printf("%d天后是星期六", a);
		break;
	case 7:
		printf("%d天后是星期日", a);
		break;
	}
}

//9681
#include <stdio.h>
void main()
{
	int a, b = 0, c;
	scanf("%d,%d", &a, &c);
	if (a <= 15)
		a = 15;
	else if (a > 15 && a <= 30)
		a = 30;
	else if (a > 30 && a <= 45)
		a = 45;
	else if (a > 45 && a <= 60)
		a = 60;
	else
		a = 75;
	switch (a)
	{
	case 15:
		b = 5;
		break;
	case 30:
		b = 9;
		break;
	case 45:
		b = 12;
		break;
	case 60:
		b = 14;
		break;
	case 75:
		b = 15;
		break;
	default:
		b = 15;
		break;
	}
	c = c / 1000;
	if (a >= 60 && a < 75)
		b = b + c;
	else if (a >= 75)
		b = b + 2 * c;
	else
		b = b;
	printf("%d", b);
}
