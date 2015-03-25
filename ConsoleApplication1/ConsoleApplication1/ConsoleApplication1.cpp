// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "losango.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Desenhando Losango\n");
	desenha_losango();
	int n;
	printf("Digite um numero impar para desenhar um losango:\n");
	scanf("%d",&n);
	desenha_losango_n(n);
	fflush(stdin);
	getchar();
	return 0;
}

