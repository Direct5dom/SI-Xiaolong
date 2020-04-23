//SI-Xiaolong

//9542
//题目貌似有问题

//9543
#include <stdio.h>
void main()
{
	float x, y, z1, z2, z3, z4;
	scanf("%f,%f", &x, &y);
	z1 = x + y;
	z2 = x - y;
	z3 = x * y;
	z4 = x / y;
	printf("x+y=%.2f\nx-y=%.2f\n", z1, z2);
	printf("x*y=%.2f\nx/y=%.2f\n", z3, z4);
}

//9544
#include <stdio.h>
void main()
{
	int x, y;
	float z1, z2, z3, z4;
	scanf("%d,%d", &x, &y);
	z1 = x + y;
	z2 = x - y;
	z3 = x * y;
	z4 = (float)(x) / (float)(y);
	printf("x+y=%.0f\nx-y=%.0f\n", z1, z2);
	printf("x*y=%.0f\nx/y=%.2f\n", z3, z4);
}

//9545
#include <stdio.h>
void main()
{
	char c1, c2;
	int m;
	scanf("%c%c", &c1, &c2);
	m = ((c1 - '0') * 10 + (c2 - '0')) * 10;
	printf("the result is:%d\n", m);
}

//9546
#include <stdio.h>
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	int a, b, c, d;
	a = c1 - 48;
	b = c2 - 48;
	c = a * 10 + b;
	d = c * 10;
	printf("the result is:%d", d);
}

//9547
#include <stdio.h>
void main()
{
	int H, M, S;
	H = 40000 / 3600;
	M = (40000 / 60) % 60;
	S = 40000 % 60;
	printf("%d:%d:%d", H, M, S);
}

//9548
#include <stdio.h>
void main()
{
	int a;
	int H, M, S;
	scanf("%d", &a);
	H = a / 3600;
	M = (a / 60) - (H * 60);
	S = (a)-(M * 60) - (H * 3600);
	printf("%d:%d:%d", H, M, S);
}

//9550
#include <stdio.h>
void main()
{
	char c1, c2, c3;
	c1 = getchar();
	c2 = c1 - 1;
	c3 = c1 + 1;
	printf("字符:%c\n前导字符:%c\n后续字符:%c", c1, c2, c3);
}

//9551
#include <stdio.h>
void main()
{
	int a;
	scanf("%d", &a);
	printf("八进制数:%o\n十六进制数:%x", a, a);
}

//9552
#include <stdio.h>
void main()
{
	float r, h, S;
	scanf("%f,%f", &r, &h);
	S = (3.14*r*r*h) / 3;
	printf("体积为:%.2f", S);
}

//9554
#include <stdio.h>
#include<math.h>
void main()
{
	float a, b, c, d, e;
	//a利息 b本金 c年利率 d存款年数 e(1+c)^d
	scanf("%f,%f,%f", &b, &d, &c);
	e = pow((1 + c), d);
	a = b * e - b;
	printf("利息:%.0f", a*0.8);
}
