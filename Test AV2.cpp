#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

//tentativa de implementar um menu para especialidades
void specialist () {
    printf("1 - Clinica Geral\n");
    printf("2 - Cardiologia\n");
    printf("3 - Oftalmologia\n");
    printf("4 - Pediatria\n");
    printf("5 - Ortopedia e Traumatologia\n");
    printf("6 - Neurologia e Psiquiatria\n");
    printf("7 - Ginecologia e Obstetricia\n");
}
void specialistMedicos1 () {
    printf("1 - Clinica Geral - 1 Dr. Huberto Castro\n");
    printf("1 - Clinica Geral - 2 Dr�. Liandra Cerqueira\n");
    printf("1 - Clinica Geral - 3 Dr. Magno Florencio\n");
}
void specialistMedicos2 () {
    printf("2 - Cardiologia - 1 Dr. Pedro Paulo Souza\n");
    printf("2 - Cardiologia - 2 Dr. Victor Almeida\n");
    printf("2 - Cardiologia - 3 Dr. Robert de Jesus\n");
}
void specialistMedicos3 () {
    printf("3 - Oftalmologia - 1 Dr�. Flavia Perelberg\n");
    printf("3 - Oftalmologia - 2 Dr. Matheus Costa\n");
    printf("3 - Oftalmologia - 3 Dr. Daniel da Cruz\n");
}
void specialistMedicos4 () {
    printf("4 - Pediatria - 1 Dr�. Alderiza Costa\n");
    printf("4 - Pediatria - 2 Dr�. Lis Alphontes\n");
    printf("4 - Pediatria - 3 Dr. Luiz Dahora\n");
}
void specialistMedicos5 () {
    printf("5 - Ortopedia e Traumatologia - 1 Dr. Huberto Celestim\n");
    printf("5 - Ortopedia e Traumatologia - 2 Dr�. Amanda Almeida\n");
    printf("5 - Ortopedia e Traumatologia - 3 Dr. Hildebrando Caetano\n");
}
void specialistMedicos6 () {
    printf("6 - Neurologia e Psiquiatria - 1 Dr�. Talita Rocha\n");
    printf("6 - Neurologia e Psiquiatria - 2 Dr. Amorim\n");
    printf("6 - Neurologia e Psiquiatria - 3 Dr. Joaquim\n");
}
void specialistMedicos7 () {
    printf("7 - Ginecologia e Obstetricia - 1 Dr. Celso Rodrigues\n");
    printf("7 - Ginelocogia e Obstetricia - 2 Dr�. Lorena Viega\n");
    printf("7 - Ginecologia e Obstetricia - 3 Dr�. Patricia Lima\n");
}
void unidades () {
	printf("1 - Unidade de Sa�de da Familia Brotas\n");
	printf("2 - Unidade de Sa�de da Familia Ribeira\n");
	printf("3 - Unidade de Sa�de da Familia Boca do Rio\n");
	printf("4 - Unidade de Sa�de da Familia Itapu�\n");
	printf("5 - Unidade de Sa�de da Familia Itinga\n");
	printf("6 - Hospital da Mulher\n");
	printf("7 - Hospital Geral do Estado\n");
	printf("8 - Hospital Menandro de Farias\n");
}

//tentativa de implementa��o de banco de dados simples em C

main(){
setlocale(LC_ALL,"");

int numspecialist, nummedico, op, saida=1;
    printf("Ol�, Bem Vindo ao nosso prototipo de APP\n");//estrutura de menu, a se implementar
    
    specialist();//chamando fun��o void
    printf("Escolha o numero da op��o de sua especialidade: ");
	scanf("%d", &numspecialist);
	//numspecialist = getche();
    system("cls");
    for(;;){
    switch(numspecialist){
    	case 1:
	    	specialistMedicos1 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		case 2:
	    	specialistMedicos2 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		case 3:
	    	specialistMedicos3 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		case 4:
	    	specialistMedicos4 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		case 5:
	    	specialistMedicos5 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		case 6:
	    	specialistMedicos6 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		case 7:
	    	specialistMedicos7 ();
	    	printf("Escolha o numero da op��o do m�dico de sua prefer�ncia: ");
			scanf("%d", &nummedico);
		break;
		default:
			printf("Op��o Inv�lida.\n");
			printf("Caso deseje tentar novamente, digite 1, caso queira sair digite 0: ");
			scanf("%d", &saida);
		}
	if(saida==0){
		break;
	}
	}
	printf("Conseguimos");
	return 0;
}
