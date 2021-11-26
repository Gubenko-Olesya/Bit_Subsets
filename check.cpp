#include <stdio.h>

int check(int n, int N)//Gubenko Olesya 112
{
	int i, mask=1, c=0;
	for (i=1; i<=N; i++) {//schitaem kolichestvo edinits
		if ((n&mask)!=0)
			c++;
		mask=mask<<1;
	}
	return c;//vivodim kolichestvo edinits
}
