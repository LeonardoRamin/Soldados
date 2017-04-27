#include <stdio.h>
#include <stdlib.h>

/* Convocar soldados para o serviço militar. */

int main(int argc, char *argv[]) {
	char sexo, trabalho, guerra, voluntaria;
	int idade;
	printf("Qual o seu sexo?");
	scanf("%c",&sexo);
	fflush(stdin);
	printf("Voce trabalha?");
	scanf("%c",&trabalho);
	fflush(stdin);
	printf("Esta acontecendo uma guerra?");
	scanf("%c",&guerra);
	fflush(stdin);
	printf("Qual a sua idade?");
	scanf("%i",&idade);
	fflush(stdin);
	if(guerra=='s'){
		if((sexo=='m')&&(trabalho=='n')&&(idade>=14)&&(idade<=60)){
			printf("Convocado!");
		}
		else{
			if((sexo=='m')&&(idade>=18)&&(idade<=30)){
			printf("Convocado!");
			}
			else{
				if((sexo=='f')&&(trabalho=='n')&&(idade>=25)&&(idade<=50)){
					printf("Convocada!");
				}
				else{
					if((sexo=='f')&&(idade>=18)&&(idade<=50)){
						printf("Voce eh volutaria?");
						scanf("%c",&voluntaria);
						if(voluntaria=='s'){
							printf("Entao esta convocada.");
						}
						else{
							printf("Va para casa.");
						}
					}
					else{
						printf("Rejeitado(a).");
					}
				}
			}
		}
	}
	else{
		if((sexo=='m')&&((idade==18)||(idade==19))){
				printf("Convocado!");
		}
		else{
			if((sexo=='f')&&(idade==18)){
				printf("Convocada!");
			}
			else{
				printf("Rejeitado(a).");
			}
		}
	}
	return 0;
}
