#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

FILE *arquivo;

int opMenuPrincipal, opMenuCadastro, opMenuImpressao, opMenuVeiculos, opMenuOrcamentos;

int op;

int i, j;

int contadorDeNotaCarro,contadorDeNotaMoto,contadorDeNotaVan,contadorDeNotaCaminhao ;
	
	
char nomeCliente[80], 
veiculoCliente[50],	
problemaCliente[30], 
numeroCliente[11], 
cpfDoCliente[11], 
placaDoCarro[10], 
placaDaMoto[10],
placaDaVan[20],
placaDoCaminhao[20];

char cpfPorBusca[12];
char tipo[20];


 

char senhaAdm[12], loginAdm[20] , senha[12], login[20];





void criarArquivoCarro(){
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroCarro.txt", "a");
	if (arquivo == 0){
		printf("arquivo não gerado"); // boa prática no if, colocar primeiro a situação negativa
	}else
	{
		printf("arquivo gerado com sucesso\n");
	}
	fprintf(arquivo, "arquivo:%i\n", contadorDeNotaCarro);
	fprintf(arquivo, "Nome:%s\n", nomeCliente);
	fprintf(arquivo, "Veiculo:%s\n", veiculoCliente);
	fprintf(arquivo, "defeito(elétrico):%s\n", problemaCliente);
	fprintf(arquivo, "placa do carro:%s\n", placaDoCarro);
	fprintf(arquivo, "numero do telefone:%s\n", numeroCliente);
	fprintf(arquivo, "CPF:%s\n", cpfDoCliente);
	fprintf(arquivo, "\n");
	fclose(arquivo);
}

void criarArquivoMoto(){
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroMoto.txt", "a");
	if (arquivo == 0){
		printf("arquivo não gerado\n"); // boa prática no if, colocar primeiro a situação negativa
	}else
	{
		printf("arquivo gerado com sucesso\n");
	}
	fprintf(arquivo, "arquivo:%i\n", contadorDeNotaMoto);
	fprintf(arquivo, "Nome:%s\n", nomeCliente);
	fprintf(arquivo, "Veiculo:%s\n", veiculoCliente);
	fprintf(arquivo, "defeito(elétrico):%s\n", problemaCliente);
	fprintf(arquivo, "placa da moto:%s\n", placaDaMoto);
	fprintf(arquivo, "numero do telefone:%s\n", numeroCliente);
	fprintf(arquivo, "CPF:%s\n", cpfDoCliente);
	fprintf(arquivo, "\n");
	fclose(arquivo);
}
void criarArquivoVan(){
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroVan.txt", "a");
	if (arquivo == 0){
		printf("arquivo não gerado\n"); // boa prática no if, colocar primeiro a situação negativa
	}else
	{
		printf("arquivo gerado com sucesso\n");
	}
	fprintf(arquivo, "arquivo:%i\n", contadorDeNotaVan);
	fprintf(arquivo, "Nome:%s\n", nomeCliente);
	fprintf(arquivo, "Veiculo:%s\n", veiculoCliente);
	fprintf(arquivo, "defeito(elétrico):%s\n", problemaCliente);
	fprintf(arquivo, "placa da van:%s\n", placaDaVan);
	fprintf(arquivo, "numero do telefone:%s\n", numeroCliente);
	fprintf(arquivo, "CPF:%s\n", cpfDoCliente);
	fprintf(arquivo, "\n");
	fclose(arquivo);
}

void criarArquivoCaminhao(){
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroCaminhao.txt", "a");
	if (arquivo == 0){
		printf("arquivo não gerado\n"); // boa prática no if, colocar primeiro a situação negativa
	}else
	{
	   	printf("arquivo gerado com sucesso\n");
	}
	fprintf(arquivo, "arquivo:%i\n", contadorDeNotaCaminhao);
	fprintf(arquivo, "Nome:%s\n", nomeCliente);
	fprintf(arquivo, "Veiculo:%s\n", veiculoCliente);
	fprintf(arquivo, "defeito(elétrico):%s\n", problemaCliente);
	fprintf(arquivo, "placa do Caminhão:%s\n", placaDoCaminhao);
	fprintf(arquivo, "numero do telefone:%s\n", numeroCliente);
	fprintf(arquivo, "CPF:%s\n", cpfDoCliente);
	fprintf(arquivo, "\n");
	fclose(arquivo);
}
void RegistrosCarros(){
	system("cls");
	char linhas[200];
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroCarro.txt", "r"); // ler o arquivo
	if(arquivo == 0){
		printf("sem registros\n");
	}
	printf("|========== Registros dos Carros ==========|\n");
	while(fgets(linhas, sizeof(linhas), arquivo) ){ // fgets é uma função de leitura que lê os caracteres, e armazena em um array
		printf("%s", linhas);
	}
	
	fclose(arquivo);
	
	system("pause");
}

void RegistrosMotos(){
	system("cls");
	char linhas[200];
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroMoto.txt", "r"); // ler o arquivo
	if(arquivo == 0){
		printf("sem registros\n");
	}
	
	printf("|========== Registros das Motos ==========|\n");
	while(fgets(linhas, sizeof(linhas), arquivo) ){
		printf("%s", linhas);
	}
	
	fclose(arquivo);
	
	system("pause");
}

void RegistrosVan(){
	system("cls");
	char linhas[200];
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroVan.txt", "r"); // ler o arquivo
	if(arquivo == 0){
		printf("nada feito aqui\n");
	}
	
	printf("|========== Registros das Vans ==========|\n");
	while(fgets(linhas, sizeof(linhas), arquivo) ){
		printf("%s", linhas);
	}
	
	fclose(arquivo);
	
	system("pause");
}

void RegistrosCaminhao(){
	system("cls");
	char linhas[200]; // linhas para ler o arquivo 
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastroCaminhao.txt", "r"); // ler o arquivo
	if(arquivo == 0){
		printf("nada feito aqui\n");
	}
	
	printf("|========== Registros dos Caminhãos ==========|\n");
	while(fgets(linhas, sizeof(linhas), arquivo) ){ // função de leitura dos arquivo 
		printf("%s", linhas);
	}
	
	fclose(arquivo);
	
	system("pause");
}

void cadastroCarro(){
	do{
	system("cls");
	printf("Cadastro do carro:\n");
	printf("Digite o nome completo do cliente:\n");
	scanf(" %[^\n]", nomeCliente); // não precisa do "&", por se tratar de um array
	printf("Informe o modelo do carro:\n");
	scanf(" %[^\n]", veiculoCliente);
	printf("Motivo de contato com a oficina(problema elétrico):\n");
	scanf(" %[^\n]", problemaCliente);
	printf("placa do carro:\n");
	scanf(" %[^\n]", placaDoCarro);
	printf("Numero para contato:\n");
	scanf(" %[^\n]", numeroCliente);
	printf("CPF do cliente:\n");
	scanf(" %[^\n]", cpfDoCliente);
	contadorDeNotaCarro++;
	criarArquivoCarro();
	printf("Deseja mais algum usuário? se sim digite qualquer numero, se não digite 0:\n");
	scanf("%i", &op);
	}while(op != 0);
}

void cadastroMoto(){
	system("cls");
	do{
	printf("Cadastro da moto:\n");
	printf("Digite o nome completo do cliente:\n");;
	scanf(" %[^\n]", nomeCliente);
	printf("Informe o modelo da moto:\n");
	scanf(" %[^\n]", veiculoCliente);
	printf("Motivo de contato com a oficina(problema elétrico):\n");
	scanf(" %[^\n]", problemaCliente);
	printf("placa da moto:\n");
	scanf(" %[^\n]", placaDaMoto);
	printf("Numero para contato:\n");
	scanf(" %[^\n]", numeroCliente);
	printf("CPF do cliente:\n");
	scanf(" %[^\n]", cpfDoCliente);
	contadorDeNotaMoto++;
	criarArquivoMoto();
	printf("Deseja mais algum usuário? se sim digite qualquer numero, se não digite 0:\n");
	scanf("%i", &op);
	}while(op != 0);
}
void cadastroVan(){
	system("cls");
	do{
	printf("Cadastro da Van:\n");
	printf("Digite o nome completo do cliente:\n");
	scanf(" %[^\n]", nomeCliente);
	printf("Informe o modelo da van:\n");
	scanf(" %[^\n]", veiculoCliente);
	printf("Motivo de contato com a oficina(problema elétrico):\n");
	scanf(" %[^\n]", problemaCliente);
	printf("placa da van:\n");
	scanf(" %[^\n]", placaDaVan);
	printf("Numero para contato:\n");
	scanf(" %[^\n]", numeroCliente);
	printf("CPF do cliente:\n");
	scanf(" %[^\n]", cpfDoCliente);
	contadorDeNotaVan++;
	criarArquivoVan();
	printf("Deseja mais algum usuário? se sim digite qualquer numero, se não digite 0:\n");
	scanf("%i", &op);
	}while(op != 0);
}
void cadastroCaminhao(){
	system("cls");
	do{
	printf("Cadastro do Caminhao:\n");
	printf("Digite o nome completo do cliente:\n");
	scanf(" %[^\n]", nomeCliente);
	printf("Informe o modelo do caminhão:\n");
	scanf(" %[^\n]", veiculoCliente);
	printf("Motivo de contato com a oficina(problema elétrico):\n");
	scanf(" %[^\n]", problemaCliente);
	printf("placa da caminhão:\n");
	scanf(" %[^\n]", placaDoCaminhao);
	printf("Numero para contato:\n");
	scanf(" %[^\n]", numeroCliente);
	printf("CPF do cliente:\n");
	scanf(" %[^\n]", cpfDoCliente);
	contadorDeNotaCaminhao++;
	criarArquivoCaminhao();
	printf("Deseja mais algum usuário? se sim digite qualquer numero, se não digite 0:\n");
	scanf("%i", &op);
	}while(op != 0);
}
void CadastroAdm(){
	system("cls");
	printf("+===================================+\n");
	printf("|       CADASTRE SEU USUÁRIO        |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", loginAdm);
	printf("+===================================+\n");
	printf("|        COLOQUE SUA SENHA          |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", senhaAdm);
    LoginAdm();
}

void LoginAdm(){
	system("cls");
	printf("+===================================+\n");
	printf("|         LOGUE SEU USUÁRIO         |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", login);
	printf("+===================================+\n");
	printf("|         COLOQUE SUA SENHA         |\n");
	printf("|-----------------------------------|\n");
    scanf(" %[^\n]", senha);
    
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
	printf("|  OFICINA(eletronica) - SÃO MIGUEL |\n");
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
	case 1:{            // função cadastro de carro
		system("cls");
		cadastroCarro();
		break;
	}
	case 2:{
		cadastroMoto(); // função cadastro de moto
		break;
		}
	case 3:{
		cadastroVan();
		break;
	}		
	case 4:{
		cadastroCaminhao();
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

void MenuVeiculos(){
	system("cls");
	printf("+=================================+\n");
    printf("|     Veiculos registrados        |\n");
	printf("|---------------------------------|\n");
	printf("|   1-CARROS    | 2-MOTOS         |\n");
	printf("|---------------------------------|\n");
	printf("|   3-VANS      | 4-CAMINHÕES     |\n");
	printf("|---------------------------------|\n");
	printf("|Selecione uma opção ou 5 P/Voltar|\n"); 
	printf("+=================================+\n");
	
	scanf("%i", &opMenuVeiculos);
	
	switch(opMenuVeiculos){
		case 1:
			RegistrosCarros();
			break;
		case 2:
			RegistrosMotos();
			break;
		case 3:
			RegistrosVan();
			break;
		case 4:
			RegistrosCaminhao();
			break;
		case 5:{
			MenuPrincipal();
		}
	}
}

void MenuOrcametos(){
	system("cls");
	printf("+=================================+\n");
    printf("|           Orçamentos            |\n");
	printf("|---------------------------------|\n");
	printf("|1 - Registrar orçamentos         |\n");
	printf("|2 - Ver orçamentos               |\n");
	printf("|3 - Voltar                       |\n");
	printf("|---------------------------------|\n");	
	scanf("%i", &opMenuOrcamentos);
	
	switch(opMenuOrcamentos){
		case 1:
			buscarClienteParaOrcamentos();
			break;
		case 2:
			lerOrcamentos();
			break;
		case 3:
			MenuPrincipal();
			break;
			
	}
}
struct Orcamento // "struct" é uma estrutura que ajuda a organizar melhor o código
{
	int maoDeObra;
	int total;
	int opcao;
	int id;
	char pecas[200];
	char nome[50];
};

struct Orcamento orc;

void buscarClienteParaOrcamentos(){
	   system("cls");
	   printf("coloque o cpf do cliente:\n");
	   scanf(" %11s", cpfPorBusca);
	   printf("coloque o tipo de veiculo(van, moto, caminhão, carro):\n");
	   scanf(" %19s", tipo);
	   
	   char caminho[100] = "C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//cadastro";
	   
	   strcat(caminho, tipo);
	   strcat(caminho, ".txt");
	   
	   buscarcpf(cpfPorBusca,caminho);
	   system("pause");
   }
   
   void buscarcpf(const char *Cpf, const char *caminho){ 
   	system("cls");
	arquivo = fopen(caminho, "r"); // lendo o que foi copiado
	
	if (arquivo == NULL){
		system("cls");
		printf("erro abrir ao arquivo:%s\n", caminho);
		return;
	}
	
	char linha[256];
    int dentroRegistro = 0;
    int encontrouCpf = 0;
    char registro[20][256]; // Armazena até 20 linhas por registro
    int contadorLinhas = 0;

    while (fgets(linha, sizeof(linha), arquivo)) {
        
        linha[strcspn(linha, "\n")] = 0; // Remove quebra de linha

        if (strstr(linha, "arquivo:")) {
            if (dentroRegistro && encontrouCpf) break;
            dentroRegistro = 1;
            contadorLinhas = 0;
            memset(registro, 0, sizeof(registro)); // limpa o buffer
        }

        if (dentroRegistro) {
            strcpy(registro[contadorLinhas], linha); // 
            contadorLinhas++;

            if (strstr(linha, "CPF:") && strstr(linha, Cpf)) { // verifica se as strings de linhas, "CPF:" e a variavel com o número
                encontrouCpf = 1;
                
                
                int linhaNome = -1; // Encontra a linha do Nome
                for ( i = 0; i < contadorLinhas; i++) {
                    if (strstr(registro[i], "Nome:")) {
                        linhaNome = i;
                        break;
                    }
                }

                
                if (linhaNome != -1) { // Imprime do Nome até o CPF
                    printf("\n=== REGISTRO ENCONTRADO ===\n");
                    for (i = linhaNome; i < contadorLinhas; i++) {
                        printf("%s\n", registro[i]);
                    }
                    printf("=== FIM DO REGISTRO ===\n");
                }
                break;
            }
        }
    }

    if (!encontrouCpf) {
        printf("CPF %s não encontrado!\n", Cpf);
        return;
    }

    fclose(arquivo);
   
    printf("id do caso:\n");
    scanf("%i", &orc.id);
	printf("custo da mão de obra:\n");
	scanf("%i", &orc.maoDeObra);
	printf("==================================\n");
	printf("Escolha um dos problemas abaixos:\n");
	printf("1 - Bateria descarregada\n");
	printf("2 - Falha no altenador  \n");
	printf("3 - Problema no motor de partida\n");
	printf("4 - Fusível queimado    \n");
	printf("5 - Fiação elétrica     \n");
	printf("6 - Sensor de oxigênio com problema\n");
	printf("7 - Bombina de ignição com problema\n");
	printf("8 - Velas de ignição descartadas\n");
	printf("9 - Falhas no sensor de temperatura de motor (ECT)\n");
	printf("10- Sensor de velocidade com defeito\n");
	printf("==================================\n");
	scanf("%i", &orc.opcao);
	printf("nome do cliente:\n");
	scanf(" %[^\n]", orc.nome);
	switch(orc.opcao)
	{
	case 1:
		orc.total = 600 + orc.maoDeObra; // médias do valor da peças mais mão de obra
		printf("veja em registros\n");
		strcpy(orc.pecas,"Bateria descarregada\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 2:
		orc.total = 1300 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas,"Falha no alternador\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 3:
		orc.total = 650 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas, "Problema no motor de partida\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 4:
		orc.total = 20 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas,"Fusivel queimado\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 5:
		orc.total = 1025 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas, "Fiação elétrica\n");
		system("pause");
		RegistrosOrcamento();
		break;
    case 6:
		orc.total = 550 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas,"Sensor de oxigênio com problema\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 7:
		orc.total = 425 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas, "Bombina de ignição com problema\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 8:
		orc.total = 340 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas, "Velas de ignição desgastadas ou sujas\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 9:
		orc.total = 225 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas, "Falhas no sensor de temperatura de motor (ECT)\n");
		system("pause");
		RegistrosOrcamento();
		break;
	case 10:
		orc.total = 300 + orc.maoDeObra;
		printf("veja em registros\n");
		strcpy(orc.pecas, "Sensor de velocidade com defeito\n");
		system("pause");
		RegistrosOrcamento();
		break;
			
	default:
		break;
	}

}

void RegistrosOrcamento(){
	
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//orcamentos.txt", "a");
	if (arquivo == 0){
		printf("arquivo não gerado\n");
	}else
	{
		printf("arquivo gerado com sucesso\n");
	}
	
	fprintf(arquivo,"========= REGISTROS DE ORÇAMENTOS ========\n");
	fprintf(arquivo, "id:%i\n", orc.id );
	fprintf(arquivo, "total de custos:%i\n", orc.total );
	fprintf(arquivo, "peça do cliente:%s", orc.pecas);
	fprintf(arquivo, "nome do cliente:%s\n", orc.nome);
	fprintf(arquivo, "=========================\n");
	fprintf(arquivo, "\n");
	fclose(arquivo);
	MenuOrcametos();
}

void lerOrcamentos(){
    system("cls");
	char linhas[200]; // linhas para ler o arquivo 
	arquivo = fopen("C://Users//joaos//Projeto - São Miguel//Cadastro veiculo//orcamentos.txt", "r"); // ler o arquivo
	if(arquivo == 0){
		printf("nada feito aqui\n");
	}
	
	printf("|========== Registros Dos Orçamentos ==========|\n");
	while(fgets(linhas, sizeof(linhas), arquivo) ){ // função de leitura dos arquivo 
		printf("%s", linhas);
	}
	
	fclose(arquivo);
	
	system("pause");
}

void Contatos(){
	system("cls");
	printf("Contato da oficina:\n");
	printf("8694423074\n");
	printf("8681388174\n");
	system("pause");
	MenuPrincipal();
}