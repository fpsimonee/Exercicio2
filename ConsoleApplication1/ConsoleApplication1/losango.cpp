/*
Implementação das funçoes de desenho
*/

#include "stdafx.h"
#include "losango.h"



void desenha_losango(){
	int numero=9,
		espacos,
		asteriscos;



		//Imprimindo a parte de cima do losango
		asteriscos = 1;
		espacos = (numero - 1) / 2; //encontrando o meio do losango
		for (int linha = 1; espacos > 0; linha++){

			//Espaços
			for (int count = 1; count <= espacos; count++){
				printf(" ");
			}

			//Asteriscos
			for (int count = 1; count <= asteriscos; count++){
				printf("*");
			}

			espacos--;
			asteriscos += 2;
			printf("\n");
		}

		//Imprimindo a parte de baixo do diamante
		for (int linha = 1; asteriscos > 0; linha++){

			//Espaços
			for (int count = 1; count <= espacos; count++){
				printf(" ");
			}

			//Asteriscos
			for (int count = 1; count <= asteriscos; count++){
				printf("*");
			}

			espacos++;
			asteriscos -= 2;
			printf("\n");
		}

}

void desenha_losango_n(int n){
	int numero = n,
		espacos,
		asteriscos;



	//Imprimindo a parte de cima do losango
	asteriscos = 1;
	espacos = (numero - 1) / 2; //encontrando o meio do losango
	for (int linha = 1; espacos > 0; linha++){

		//Espaços
		for (int count = 1; count <= espacos; count++){
			printf(" ");
		}

		//Asteriscos
		for (int count = 1; count <= asteriscos; count++){
			printf("*");
		}

		espacos--;
		asteriscos += 2;
		printf("\n");
	}

	//Imprimindo a parte de baixo do diamante
	for (int linha = 1; asteriscos > 0; linha++){

		//Espaços
		for (int count = 1; count <= espacos; count++){
			printf(" ");
		}

		//Asteriscos
		for (int count = 1; count <= asteriscos; count++){
			printf("*");
		}

		espacos++;
		asteriscos -= 2;
		printf("\n");
	}

}
