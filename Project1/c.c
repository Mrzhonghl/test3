#include<stdio.h>

void main()
{
	char ch[7] = { "65ab21" };
	int i, s = 0;
	for (i = 0; ch[i] >= '0' && ch[i] <= '9'; i + 2)
		s = 10 * s + ch[i] - '0';
	printf("dfgadfgdf");
	printf("%d", s);

	
	return 0;
}