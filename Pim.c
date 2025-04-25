#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void estetica_tela_geral();
void duas_opcao_inicial ();
void tela_menu ();
void LevalidaPrint ();
void elogio_reclamacao ();
void telas_entrada_relatorios ();

//CHAMAMENTO AGENDAMENTO DE CONSULTA//
void agendamento_consulta ();
void cancelamento_consulta();
//FECHAMENTO AGENDAMENTO DE CONSULTA//

//CHAMAMENTO CADASTRO PACIENTES//
char nome_cadastro2 ();
char levalidaSexo2 ();
char LevalidaEndereco2 ();
char LevalidaConvenio2 ();
char area_especializado2 ();
int data_de_nascmiento2 ();
int LevalidaCpf2 ();
int LevalidaRg2 ();
int LevalidaEmail2 ();
int telefone2 ();
//FECHAMAMENTO CADASTRO PACIENTES//

//CHAMAMENTO CADASTRO MÉDICOS//
char nome_cadastro4 ();
char levalidaSexo4 ();
char LevalidaEndereco4 ();
char LevalidaConvenio4 ();
char area_especializado4 ();
int data_de_nascmiento4 ();
int LevalidaCpf4 ();
int LevalidaRg4 ();
int LevalidaEmail4 ();
int telefone4 ();
//FECHAMENTO DO CADASTRO MÉDICOS//

//CHAMAMENTO CADASTRO FUNCIONÁRIOS//
char nome_cadastro5 ();
char levalidaSexo5 ();
char LevalidaEndereco5 ();
char cargo5 ();
int data_de_nascmiento5 ();
int LevalidaCpf5 ();
int LevalidaRg5 ();
int LevalidaEmail5 ();
int telefone5 ();


int main (){
	setlocale(LC_ALL, "Portuguese"); //Comando para acentamento


	int i, tela, senha, login, senha_informada, login_informado;
	char opcao, opcao2, sair;
	sair = 'n';

	senha_informada = 6543456;
	login_informado = 6543456;
	
	do {
	
	tela_menu();
	
	duas_opcao_inicial ();

	
	printf ("Digite a opção: ");
	scanf (" %c", &opcao2);
	
	system ("cls");
//-----------------------------------------//
	 
	if (opcao2 =='0'){
	
	estetica_tela_geral();
	
	LevalidaPrint();

	printf ("Digite a opção: ");
	scanf (" %c", &opcao); 
	printf ("\n****************************************\n");
	
	switch (opcao){
	
	case '1':	
		
		printf ("\n******** TELA DE LOGIN ********\n");
		printf ("\n");
		printf ("** Login: ");
		fflush (stdin);
		scanf ("%d", &login);		
		printf ("** Senha: ");
		fflush (stdin);
		scanf ("%d", &senha);	
		
		if (login == login_informado && senha == senha_informada){
			printf ("Acesso Permitido\n");
		}else{
			printf ("Acesso Negado\n");
		}
		
	break;
	
	
	case '2': 
		printf ("******** Cadastro de Paciente ********\n\n");
		
	nome_cadastro2 ();
	
	data_de_nascmiento2 ();
	
	levalidaSexo2 ();
	
	LevalidaCpf2 ();
	
	LevalidaRg2 ();
	
	telefone2 ();
	
	LevalidaEndereco2 ();
	
	LevalidaConvenio2 ();
	
	LevalidaEmail2 ();
	
	break;
	
	
	case '3':
		printf ("******** Tela de Agendamentos ********\n\n");
		
	agendamento_consulta ();
	
	break;
	
	case '4':
		printf("******** Cadastro de médicos ********\n");
		
	nome_cadastro4 ();
	
	data_de_nascmiento4 ();
	
	levalidaSexo4 ();
	
	LevalidaCpf4 ();
	
	LevalidaRg4 ();
	
	telefone4 ();
	
	LevalidaEndereco4 ();
	
	area_especializado4 ();
	
	LevalidaEmail4 ();
	
	break;
	
	
	case '5':
		printf ("******** Cadastro de Funcionários ********\n");
	
	nome_cadastro5 ();
	
	data_de_nascmiento5 ();
	
	levalidaSexo5 ();
	
	LevalidaCpf5 ();
	
	LevalidaRg5 ();
	
	telefone5 ();
	
	LevalidaEndereco5 ();
	
	cargo5 (); 
	
	LevalidaEmail5 ();
	
	break;
	
	
	case '6':
		printf ("******** Cancelamento de consultas********\n\n");
		
	cancelamento_consulta();
	
	break;
	
	case '7':
		printf ("Redirecionado para Reclamações e Elogios\n\n");
		printf ("****************************\n");
		
	elogio_reclamacao ();
	
	break;
	}

	}
	
	if (opcao2 == '-'){
		
	telas_entrada_relatorios ();
	
	printf ("Redirecionado para aba de Relatórios.\n");
			
	system ("start https://unbbr-my.sharepoint.com/:x:/g/personal/190129221_aluno_unb_br/EYa58H33aUNFuOEzrQM9KncBA6sZbBqkBYOls0AN7ptmcQ?e=fcv9ZF");
		
	}else{
		printf ("\n\t**Programa encerrado.**\n");

	}

	printf ("\n*******************\n");
	printf ("Deseja sair [s/n]?");
	fflush (stdin);
	scanf (" %c", &sair);
	system ("cls");
	}while (sair != 's');
		printf ("Programa encerrado");
	
		
return 0 ;
}

//------------------------------------------------------//

//CADASTRO PACIENTE//

char nome_cadastro2 (){
			
		char nome_completo[150];
		printf ("****************************\n");
		printf ("** Nome do Paciente:\n");
		scanf (" %c\n\n", &nome_completo); 
		printf ("\n****************************\n");
return nome_completo;
}
		
int data_de_nascmiento2 (){
		
	int data_nascimento;
		
	printf ("** Data de Nascimento:\n");
	fflush (stdin);
	scanf ("%d\n\n", &data_nascimento);
	printf ("****************************\n");
		
return data_nascimento;
}
	
int LevalidaCpf2 (){
	
	int cpf;
		
	printf ("** CPF:");
	fflush (stdin);
	scanf ("%d", &cpf);
	printf ("****************************\n");
		
return cpf;
}
	
int LevalidaRg2 (){
	
	int rg;
		
	printf ("** RG:");
	fflush (stdin);
	scanf ("%d", &rg);
	printf ("****************************\n");
		
return rg;
}
	
int LevalidaEmail2 (){
	
	int email;
		
	printf ("** E-Mail:");
	fflush (stdin);
	scanf ("%d", &email);
	printf ("****************************\n");
		
return email;
}
	
char levalidaSexo2 (){
		
	char sexo;
		
	do{	
		printf ("** Informe o sexo [m/f]:\n");
		fflush (stdin);
		scanf ("%[^\n]s", &sexo);
	}while (sexo != 'm' && sexo != 'f');
	printf ("****************************\n");
		
return sexo;
}
	
char LevalidaEndereco2 (){
		
	char endereco [500];
		
	printf ("** Endereço do Paciente:\n");
	fflush (stdin);
	scanf (" %c\n", &endereco);
	printf ("****************************\n");
		
return endereco;
}
	
char LevalidaConvenio2 (){
		
	char convenio [20];
		
	printf ("** Tipo de Convênio:\n");
	fflush (stdin);
	scanf (" %c\n", &convenio);
	printf ("****************************\n");
		
return convenio;
}
	
int telefone2 (){
		
	int numero;
		
	printf ("** Telefone:");
	fflush (stdin);
	scanf ("%d", &numero);
	printf ("****************************\n");
		
return numero;
}
//CONLUSÃO CADASTRO PACIENTE//


//CADASTRO DOS FUNCIONÁRIOS//

char nome_cadastro5 (){
			
		char nome_completo[150];
		printf ("****************************\n");
		printf ("** Nome do Funcionário:\n");
		scanf (" %c\n\n", &nome_completo); 
		printf ("\n****************************\n");
return nome_completo;
}
		
int data_de_nascmiento5 (){
		
	int data_nascimento;
		
	printf ("** Data de Nascimento:\n");
	fflush (stdin);
	scanf ("%d\n\n", &data_nascimento);
	printf ("****************************\n");
		
return data_nascimento;
}
	
int LevalidaCpf5 (){
	
	int cpf;
		
	printf ("** CPF:");
	fflush (stdin);
	scanf ("%d", &cpf);
	printf ("****************************\n");
		
return cpf;
}
	
int LevalidaRg5 (){
	
	int rg;
		
	printf ("** RG:");
	fflush (stdin);
	scanf ("%d", &rg);
	printf ("****************************\n");
		
return rg;
}
	
int LevalidaEmail5 (){
	
	int email;
		
	printf ("** E-Mail:");
	fflush (stdin);
	scanf ("%d", &email);
	printf ("****************************\n");
		
return email;
}
	
char levalidaSexo5 (){
		
	char sexo;
		
	do{	
		printf ("** Informe o sexo [m/f]:\n");
		fflush (stdin);
		scanf ("%[^\n]s", &sexo);
	}while (sexo != 'm' && sexo != 'f');
	printf ("****************************\n");
		
return sexo;
}
	
char LevalidaEndereco5 (){
		
	char endereco [500];
		
	printf ("** Endereço do Funcionário:\n");
	fflush (stdin);
	scanf (" %c\n", &endereco);
	printf ("****************************\n");
		
return endereco;
}
	
int telefone5 (){
		
	int numero;
		
	printf ("** Telefone:");
	fflush (stdin);
	scanf ("%d", &numero);
	printf ("****************************\n");
		
return numero;
}

char cargo5 (){
	
	char cargo;
	
	printf ("** Cargo de Atuação:");
	fflush (stdin);
	scanf (" %c", &cargo);
	printf ("****************************\n");

return cargo;
}
//CONCLUSÃO CADASTRO FUNCIONÁRIOS//


//CADASTRO DE MÉDICOS//

char nome_cadastro4 (){
			
		char nome_completo[150];
		printf ("****************************\n");
		printf ("** Nome do Médico:\n");
		scanf (" %c\n\n", &nome_completo); 
		printf ("\n****************************\n");
		
return nome_completo;
}
		
int data_de_nascmiento4 (){
		
	int data_nascimento;
		
	printf ("** Data de Nascimento:\n");
	fflush (stdin);
	scanf ("%d\n\n", &data_nascimento);
	printf ("****************************\n");
		
return data_nascimento;
}
	
int LevalidaCpf4 (){
	
	int cpf;
		
	printf ("** CPF:");
	fflush (stdin);
	scanf ("%d", &cpf);
	printf ("****************************\n");
		
return cpf;
}
	
int LevalidaRg4 (){
	
	int rg;
		
	printf ("** RG:");
	fflush (stdin);
	scanf ("%d", &rg);
	printf ("****************************\n");
		
return rg;
}
	
int LevalidaEmail4 (){
	
	int email;
		
	printf ("** E-Mail:");
	fflush (stdin);
	scanf ("%d", &email);
	printf ("****************************\n");
		
return email;
}
	
char levalidaSexo4 (){
		
	char sexo;
		
	do{	
		printf ("** Informe o sexo [m/f]:\n");
		fflush (stdin);
		scanf ("%[^\n]s", &sexo);
	}while (sexo != 'm' && sexo != 'f');
	printf ("****************************\n");
		
return sexo;
}
	
char LevalidaEndereco4 (){
		
	char endereco [500];
		
	printf ("** Endereço do Médico:\n");
	fflush (stdin);
	scanf (" %c\n", &endereco);
	printf ("****************************\n");
		
return endereco;
}
	
int telefone4 (){
		
	int numero;
		
	printf ("** Telefone:");
	fflush (stdin);
	scanf ("%d", &numero);
	printf ("****************************\n");
		
return numero;
}

char area_especializado4 (){
	
	char area;
	
	printf ("** Especialização em :");
	fflush (stdin);
	scanf (" %c", &area);
	printf ("****************************\n");
	
return area;
}
//CONCLUSÃO CADASTRO MÉDICOS//

//RECLAMAÇÕES E ELOGIOS//

void elogio_reclamacao (){
	
	char op, elogio[300], reclamacao[300];
	
	printf ("Para fazer um Elogio digite '+' e Reclamação digite '-'.\n"); 
	printf ("Digite a opção: ");
	fflush (stdin);
	scanf ("%s", &op);
	
	switch (op){
	
	case '+': 
		printf ("\n\nVocê foi direcionado para aba de Elogio\n\n");
		printf ("+----------------------------+\n");
		printf ("Faça o seu elogio logo abaixo:\n\n");
		fflush (stdin);
		scanf ("%[^\n]s", elogio);
		printf ("\n");
		printf ("Obrigado pele seguinte elogio: %s\n", elogio);
		
	break;
	
	case '-' :
		printf ("Você foi direcionado para aba de Reclamação\n\n");
		printf ("+----------------------------+\n");
		printf ("Faça sua reclamação logo abaixo:\n\n");
		fflush (stdin);
		scanf ("%[^\n]s", reclamacao);
		printf ("\n");
		printf ("Obrigado pela reclamação e volte sempre!\n\n");
	break;
	}
}
//CONCLUSÃO RECLAMAÇÕES E ELOGIOS//


//AGENDAMENTOS DE CONSULTA//
void agendamento_consulta (){

	char ops;
	
	printf ("Único horário disponivel para consulta é 24/11 as 11h.\n\n");
	printf ("Para confirmar tecle 1 , para recusar tecle 2.\n");
	printf ("Digite a opção: ");
	scanf (" %c", &ops);
	
	switch (ops){
		
		case '1' :
			printf ("Consulta marcada, aguardamos você.\n");
			printf ("\n");
		break;
	
		case '2' :
			   printf ("Tudo bem, desculpe e volte sempre.\n");	
			   printf ("\n");
		break;
	}
}
//CONCLUSÃO AGENDAMENTO DE CONSULTA//


//CANCELAMENTO DE CONSULTAS//
void cancelamento_consulta(){
	
char sim, nao, digitar_opcao;
	
	printf ("Deseja cancelar a consulta do dia 24/11 as 11h?\n");
	printf ("\n");
	printf ("Tecle ['s' para cancelar/Qualquer letra para manter a consulta]: \n");
	fflush (stdin);
	printf ("Digite a opção: ");
	scanf ("%[^\n]s", &digitar_opcao);
	printf ("\n");

	if (digitar_opcao == 's'){
			printf ("Consulta Cancelada, obrigado pela atenção.\n");
			printf ("\n");
	}else{
			printf ("Mantivemos sua Consulta.\n");
	}
}
//CONCLUSÃO CANCELAMENTO DE CONSULTAS//


//TELA DE INIO DO CADASTRO//
void tela_menu (){
	
	printf ("\t\t\t\t\t***********************************\n");
	printf ("\t\t\t\t\t**** CLÍNICA SANTA CONSOLADORA ****\n");
	printf ("\t\t\t\t\t***********************************\n\n");
	
}

void LevalidaPrint(){
	
	
	
	printf ("-> Para acessar a Tela de Login tecle (1).\n");
	printf ("-> Para acessar Cadastro de Paciente tecle (2).\n");
	printf ("-> Para acessar Agendamento tecle (3).\n");
	printf ("-> Para acessar Cadastro de médicos tecle (4).\n");
	printf ("-> Para acessar Cadastro de Funcionários tecle (5).\n");
	printf ("-> Para Cancelar sua Consulta tecle (6).\n");
	printf ("-> Caso queira fazer alguma Reclamação ou elogio tecle (7).\n\n");

	
}

void duas_opcao_inicial (){
	
	char op; 
	
	printf ("-> Para acessar a Tela Geral tecle (0):\n");
	printf ("-> Para acessar a Tela de Relatório tecle (-):\n\n");

}

void telas_entrada_relatorios (){
	
	int i;
	char opcao_relatorio_teste;
	
	printf ("\n");
	for (i=0; i<=18;i++){
		printf ("-");}
	printf ("\nTELA DE RELATÓRIOS \n");
	for (i=0; i<=18;i++){
		printf ("-");}
	printf ("\n");
	
}

void estetica_tela_geral(){
	
	int i;
	
	printf ("\n");
	for (i=0; i<=10;i++){
		printf ("*");}
	printf ("\nTELA GERAL\n");
	for (i=0; i<=10;i++){
		printf ("*");}
	printf ("\n");
	printf ("\n");
}
