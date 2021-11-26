#include <stdio.h>

//funksiya vozvodit 2 v stepen
int power2(int N)//Gubenko Olesya 112
{
	if (N==0)
		return 1;
	return 2*power2(N-1);
}
