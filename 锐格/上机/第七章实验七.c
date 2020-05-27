//SI-Xiaolong

//10159
#include <stdio.h>
void main()
{
    int i;
	int f[20] = { 1,1 };
	for (i = 2; i < 20; i++)
		f[i] = f[i - 2] + f[i - 1];
	for (i = 0; i < 20; i++)
	{
		printf("%d,", f[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}

//10160
#include <stdio.h>
void main()
{
    int i;
	int N;
	scanf("%d", &N);
	int f[1000] = { 1,1 };
	for (i = 2; i < N; i++)
		f[i] = f[i - 2] + f[i - 1];
	for (i = 0; i < N; i++)
	{
		printf("%d,", f[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}
