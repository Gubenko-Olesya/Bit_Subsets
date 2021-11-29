//programma vivodit v fail podmnozhestva dliny k zadannogo chislovogo mnozhestva dliny N
#include <stdio.h>
#include "my_functions.h"

int main(void) //Gubenko Olesya 112
{
	FILE *fout;
	int N, dN, k, i;
	printf("Programma vivodit v fail podmnozhestva dliny k zadannogo chislovogo mnozhestva dliny N.\n");
	fout=fopen("output.txt", "w");
	if (fout==NULL) {
		printf("File output.txt is not opened.\n");
		return -1;
	}
	printf("Define the size of the set: \n");
	if ((scanf("%d", &N) != 1)||(N>32)) {
		printf("Unexpectable error, please try again.\n");
		return -1;
	}
	printf("Define the size of the subset: \n");
	if ((scanf("%d", &k) != 1)||(k>N)) {
		printf("Unexpectable error, please try again.\n");
		return -1;
	}
	dN=2<<(N-1); //opredelyaem mnozhestvo, sostoyashee iz vseh chisel, bitovoe predstavleniye kotorikh imeet N znachashih cifr
	for (i=1; i<dN; i++) //dlya kazdogo iz takih chisel proveryaem, skolko v nem 1, i esli ih k, to pechataem podmnozhestvo, s kotorim ustanovleno sootvetstviye
		raspechatka(i, N, k, fout);
	fclose(fout);
	return 0;
}
