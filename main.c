#include <stdio.h>
#include <stdlib.h>
#include "Projeto.h"



int main()
{
	setlocale(LC_ALL, "Portuguese");
	barraCarregamento();
	do{	
	switch(opMenuPrincipal){
	case 1:{
		system("cls");
		MenuCadastro();
		break;
	}
	case 2:{ 
		system("cls");
		MenuOrcametos();
		break;
	}
	case 3:{ 
		MenuVeiculos();
		break;
	}
	case 4:{
		Contatos(); 
		break;
	}
	default:
		break;
	}
	}while(opMenuPrincipal!=5);
	
	return 0;
}