// SI-Xiaolong

//9534
#include <stdio.h>
void main()
{
	int x = 0165, a = 322, b = -1;
	char c;
	c = a;
	printf("x1=%d,x2=%x,", x, x);
	printf("c=%c\n", c);
	printf("a:%d,%o,%x\n", a, a, a);
	printf("b:%d,%u,%x,%X\n", b, b, b, b);

}

//9436
#include <stdio.h>
void main()
{
	int a = 12, b = 5;
	printf("a/b=%d,b/a=%d\n", a / b, b / a);
	printf("%f,%f\n", (float)a / b, (float)(a / b));
	printf("a%%b=%d,b%%a=%d\n", a%b, b%a);
}

//9537
#include <stdio.h>
void main()
{
	unsigned int m;
	m = 4294967058;
	printf("m=%d\n", m);
	printf("m=%u\n", m);
}

//9538
#include <stdio.h>
#define LEN 5.5
void main()
{
	float a, b;
	a = 2 * 3.14 * LEN;
	b = 3.14*LEN*LEN;
	printf("圆周长=%.2f\n圆面积=%.2f\n", a, b);
}

//9539
#include <stdio.h>
#define LEN 5.5
void main()
{
	int a = 5;
	double x;
	printf("%d %d\n", sizeof(int), sizeof(a));
	printf("%d %d\n", sizeof(double), sizeof(x));
	printf("%d %d\n", sizeof(float), sizeof(char));
}

//9540
#include <stdio.h>
void main()
{
	int x = -1, y = 5, z = 6, k;
	k = x++ >= 0 && !(y-- <= 0) || (z = x + y);
	printf("x=%d\ny=%d\nz=%d\nk=%d\n", x, y, z, k);
}

//9541
#include <stdio.h>
void main()
{
	//start 
	printf("********************\n");
	printf("welcome to C world!\n");
	printf("********************");
	//end
}
