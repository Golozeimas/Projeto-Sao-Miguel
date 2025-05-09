#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int opMenuPrincipal, opMenuCadastro, opMenuImpressao;

char nomeCliente[80], veiculoCliente[50];

char senhaAdm[12], loginAdm[20] , senha[12], login[20];


struct cadastroFunc
{
	
};

void cadastroVeiculo(){
	printf("Digite seu nome completo\n");
	scanf(" %[^\n]", &nomeCliente);
	printf("Informe o veiculo:\n");
	scanf(" %[^\n]", &veiculoCliente);
}

void CadastroAdm(){
	system("cls");
	printf("cadastre seu usuário:\n");
    scanf(" %[^\n]", &loginAdm);
	printf("coloque sua senha:\n");
    scanf(" %[^\n]", &senhaAdm);
    LoginAdm();
}

void LoginAdm(){
	system("cls");
	printf("logue seu usuário:\n");
    scanf(" %[^\n]", &login);
	printf("coloque sua senha:\n");
    scanf(" %[^\n]", &senha);
    
    if(strcmp(loginAdm, login) == 0 && strcmp(senhaAdm,senha) == 0) // cria uma comparação com a função "strcmp" 
	{
		
		MenuPrincipal();
	
	}
	
	else
	{
		printf("tente novamente\n");
		LoginAdm();
	}
    
}

void MenuPrincipal(){
	system("cls");
	printf("             Bem vindo!!!            \n");
	printf("+===================================+\n");
	printf("|       OFICINA - SÃO MIGUEL        |\n");
	printf("|-----------------------------------|\n");
	printf("|     1- CADASTRO | 2- ORÇAMENTO    |\n");
	printf("|-----------------------------------|\n");
	printf("|     3- VEICULOS | 4- CONTATOS     |\n");
	printf("|-----------------------------------|\n");
	printf("|Selecione a opção ou 5 para Sair   |\n");
	printf("+===================================+\n");
    scanf("%i",&opMenuPrincipal);
}

void MenuCadastro(){
	do{
	printf("+=================================+\n");
    printf("|       CADASTRO VEICULAR         |\n");
	printf("|---------------------------------|\n");
	printf("|   1-CARROS    | 2-MOTOS         |\n");
	printf("|---------------------------------|\n");
	printf("|   3-VANS      | 4-CAMINHÕES     |\n");
	printf("|---------------------------------|\n");
	printf("|Selecione uma opção ou 5 P/Voltar|\n"); 
	printf("+=================================+\n");
    scanf("%i",&opMenuCadastro);
    switch(opMenuCadastro){
	case 1:{ // 1- Casdastro 1
		system("cls");
		cadastroVeiculo();
		break;
	}
	case 2:{// 2- Casdastro 2
		break;
		}
	case 3:{// 3- Casdastro 3
		break;
	}		
	case 4:{// 4- Casdastro 4
		break;
	}
	default:
		break;
	}
	}while(opMenuCadastro!=5);
	MenuPrincipal();
}

void barraCarregamento(){
	int i, j;
	printf("\n\n Carregando \n\n");
	
	for(i = 0; i <= 100; i++){
		printf("  %d%%\r", i);
		fflush(stdout);
		for(j = 0; j < i; j++ ){
			if (!j){
				printf("  ");
			
			printf("%c", 219);
			Sleep(100);
			}
			if(i == 100){
			CadastroAdm();
			}
		}
	}
}

void MenuImpressao(){
    printf("+=================================+\n");
    printf("|       MENU IMPRESSAO            |\n");
	printf("|---------------------------------|\n");
	printf("|   1-ALUNO     | 2-CADASTRO2     |\n");
	printf("|---------------------------------|\n");
	printf("|   3-CADASTRO3 | 4-CADASTRO4     |\n");
	printf("|---------------------------------|\n");
	printf("|Selecione uma opção ou 5 P/Voltar|\n"); 
	printf("+=================================+\n");
	scanf("%i",&opMenuImpressao);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	do{
	barraCarregamento();	
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
}