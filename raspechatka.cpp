#include <stdio.h>
#include "my_functions.h"

int raspechatka(int n, int N, int k, FILE *fout)//Gubenko Olesya 112
{
	int i, mask=1;
	if (check(n, N)==k) { //esli v dannom chisle k edinits
		fprintf(fout, "{ "); //pechataem mnozhestvo pozitsiy edinits
		for (i=1; i<=N; i++) {
			if((n&mask)!=0)
				fprintf(fout, "%d ", i);
			mask=mask<<1;
			}
		fprintf(fout, "}\n");
	}
	return 0;
}
