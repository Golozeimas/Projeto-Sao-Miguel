#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

FILE *arquivo;

int opMenuPrincipal, opMenuCadastro, opMenuImpressao;

int op;

char nomeCliente[80], veiculoCliente[50], problemaCliente[30];

char senhaAdm[12], loginAdm[20] , senha[12], login[20];

void criarArquivos(){
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroVeicular.txt", "w+");
	if (arquivo == 0){
		printf("arquivo não gerado"); // boa prática no if, colocar primeiro a situação negativa
	}else
	{
		printf("arquivo gerado com sucesso\n");
	}

	fprintf(arquivo, "Nome:%s\n", nomeCliente);
	fprintf(arquivo, "Veiculo:%s\n", veiculoCliente);
	fprintf(arquivo, "defeito:%s\n", problemaCliente);
}


void cadastroVeiculo(){
	do{
	printf("Digite seu nome completo\n");
	scanf(" %[^\n]", &nomeCliente);
	printf("Informe o veiculo:\n");
	scanf(" %[^\n]", &veiculoCliente);
	printf("Problema com o veículo:\n");
	scanf(" %[^\n]", &problemaCliente);
	criarArquivos();
	printf("Deseja mais algum usuário? se sim digite qualquer numero, se não digite 0:\n");
	scanf("%i", &op);
	}while(op != 0);
}

void CadastroAdm(){
	system("cls");
	printf("+===================================+\n");
	printf("|       CADASTRE SEU USUÁRIO        |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", &loginAdm);
	printf("+===================================+\n");
	printf("|        COLOQUE SUA SENHA          |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", &senhaAdm);
    LoginAdm();
}

void LoginAdm(){
	system("cls");
	printf("+===================================+\n");
	printf("|         LOGUE SEU USUÁRIO         |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", &login);
	printf("+===================================+\n");
	printf("|         COLOQUE SUA SENHA         |\n");
	printf("|-----------------------------------|\n");
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
	system("cls");
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
	system("color a"); // muda a cor para verde do terminal
	int i, j;
	
	printf("Carregando:[");
	
	for(i = 0; i < 40; i++){
		printf("#");
		Sleep(200);// pausa entre os #, 0,2 ms
	}
	printf("]Concluído\n");
	system("pause");
	if(i == 40){
		CadastroAdm();
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