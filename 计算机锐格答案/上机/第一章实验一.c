//SI-Xiaolong

//9527
#include "stdio.h"
void main()
{
	float a, b;
	a = 6.2;
	b = a * a;
	printf("b=%.2f\n", b);
}

//9528
#include "stdio.h"
void main()
{
	int year, leap;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		leap = 1;
	else if (year % 400 == 0)
		leap = 1;
	else leap = 0;
	if (leap == 1)
		printf("%d is a leap year \n", year);
	else printf("%d is not a leap year \n", year);
}

//9529
#include "stdio.h"
void main()
{
	int x;
	scanf("%d", &x);
	if (x % 2 != 0)
		printf("%d is an odd \n", x);
	else
		printf("%d is an even \n", x);
}

//9530
#include "stdio.h"
void main()
{
	int i, sum;
	i = 1;
	sum = 0;
	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}
	printf("sum=%d\n", sum);
}

//9531
#include "stdio.h"
void main()
{
	int i, n;
	long p;
	p = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		p = p * i;
	printf("n!=%d\n", p);
}

//9532
#include <stdio.h>
int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return(z);
}
void main()
{
	int a, b, c;
	scanf("%d,%d", &a, &b);
	c = max(a, b);
	printf("max=%d\n", c);
}

//9533
#include <stdio.h>
void main()
{
	int x, y;
	for (x = 0; x <= 25; x++)
		for (y = 0; y <= 50; y++)
			if (4 * x + y * 2 == 100)
				printf("兔=%d,鸡=%d\n", x, y);
}
