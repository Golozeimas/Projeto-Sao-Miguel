#include <stdio.h>
#include <stdlib.h>
#include "Projeto.h"



int main()
{
	setlocale(LC_ALL, "Portuguese");
	barraCarregamento();
	do{	
	switch(opMenuPrincipal){
	case 1:{  // 1-OPCAO 1
		system("cls");
		MenuCadastro();
		break;
	}
	case 2:{ //2-OPCAO 2
		system("cls");
		MenuImpressao();
		break;
	}
	case 3:{ //3-OPCAO 3
		break;
	}
	case 4:{ //4-OPCAO 4
		break;
	}
	default:
		break;
	}
	}while(opMenuPrincipal!=5);
	
	return 0;
}