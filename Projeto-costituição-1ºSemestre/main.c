#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>




void codigo();	//subfunção
void estatutos(); //subfunção
void legislacao_federal(); //fução principal 
void decreto_leis(); //subfunção
void constituicao_federal(); //subfunção


int main() {

	int opcao;
	setlocale(LC_ALL,"portuguese");
	do{
		system("cls");
		legislacao_federal();
		printf("\n\n(1)-Finalizar!\n(2)-Retornar ao menu inicial!\n");
		scanf("%d",&opcao);
	}while(opcao==2);
	
	system("cls");
	printf("\nPROGRAMA FINALIZADO!");

	return 0;
}

/*Essa função, assim como as outras, faz o uso de switch para charmar a informação requisitada pelo usuário.
 em cada case o arquivo que consta a informação pedida pelo usuário é aberto e é lido. faço o uso de um laço for,que por sua vez está 
 rodando dentro de um (do-while), para limitar o número de caractere para 1000 e depois faço um teste lógico(if-else) da seguinte maneira: 
 se estiver caractere diponivel no arquivo 
 então pergunta ao usuário se quer passar para a próxima página, se não, força a saida do laço e fecha o arquivo; 
*/

void legislacao_federal(){
	int x;
	system("cls");
	printf("(1)-constituição Federal\t(2)-Códigos\t(3)-Estatutos\t(4)-Decretos-Leis\n\n");
	scanf("%d",&x);
		switch(x){
			case 1:
				constituicao_federal();
				break;
			case 2:
				codigo();
				break;
			case 3:
				estatutos();
				break;
			case 4:
				decreto_leis();
			break;

			default :
				printf("\nInformação Inválida\n\n");

	}

}

void constituicao_federal(){
		FILE *arquivo;
		int op,i;
		char cons_fed;
		system("cls");
				arquivo=fopen("constituicao federal.txt","r");
				printf("\n\n");
					do{
						system("cls");
						for(i=0;i<1000;i++){
							cons_fed=fgetc(arquivo);
							printf("%c",cons_fed);
 						}
 						if(cons_fed!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
}

void codigo(){
		FILE *arquivo;
		char codigo;
		int x=0,i=0,op;
		system("cls");
		printf("\nQual código deseja?\n(1)-Código Civil\t(2)-Código de Processo Civil-1973\t(3)-Código de Processo Penal\t(4)-Código penal\n(5)-Código Tributário Nacional\t(6)-Consolidação das Leis do Trabalho\t(7)-Código de Defesa do Consumidor\t(8)-Código de Trânsito Brasileiro\n(9)-Código Eleitoral\t(10)-Código Florestal\t(11)-Código de Minas\t(12)-Código Penal Militar\n(13)-Código Brasileiro de aeronáutica\t(14)-Código Brasileiro de Telecomunicações\t(15)-Código Comercial\t(16)-código da Água\t(17)-Código de Processo Penal Militar\t(18)-Código de Processo Civil-2015\n ");
		scanf("%i",&x);
		switch(x){
			case 1:
				arquivo=fopen("codigo civil.txt","rt"); //abre o arquivo
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){			//limitado para ler apenas 1000 caracteres antes de entrar no teste lógico. 
							codigo=fgetc(arquivo);		
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){										//  se ainda houver caracterce, o programa pergunta 																			
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");		//ao usuário se deseja proseguir para a próxima "Página".
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2; 	//forço a saida do do-while
						 }
 					}while(op!=2);
				fclose(arquivo); //fecha o arquivo
 				printf("\n\n");
				break;
			case 2:

				arquivo=fopen("codigo de processo civil-1973.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 3:

				arquivo=fopen("codigo de processo penal.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 4:

				arquivo=fopen("codigo penal.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 5:

				arquivo=fopen("codigo tributario nacional.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 6:

				arquivo=fopen("consolidacao das leis do trabalho.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 7:

				arquivo=fopen("codigo de defesa do consumidor.txt","r");
				system("cls");
				printf("\n\n");
						do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 8:

				arquivo=fopen("codigo de transito brasileiro.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 9:

				arquivo=fopen("codigo eleitoral.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 10:

				arquivo=fopen("codigo florestal.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 11:

				arquivo=fopen("codigo de minas.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 12:

				arquivo=fopen("codigo penal militar.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 13:

				arquivo=fopen("codigo brasileiro de aeronautica.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 14:

				arquivo=fopen("codigo brasileiro de telecomunicacoes.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
				break;
			case 15:

				arquivo=fopen("codigo comercial.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 16:

				arquivo=fopen("codigo de aguas.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 17:

				arquivo=fopen("codigo de processo penal militar.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;
			case 18:

				arquivo=fopen("codigo de processo civil-2015.txt","r");
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){
							codigo=fgetc(arquivo);
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){
 							printf("\n\n(1)-Próxima Página\n(2)-Fim!\n");
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2;
						 }
 					}while(op!=2);
				fclose(arquivo);
 				printf("\n\n");
				break;


			default:
				system("cls");
				printf("\nInformação invalida");



		}
}

void estatutos(){

	FILE *arquivo;
	char estatuto;
	int x, txt=0, i;
	system("cls");
	printf("(1)-Estatuto da Criança e do Adolescente\t(2)-Estatuto da Cidade\t(3)-Estatuto de Defesa do Torcedor\t(4)-Estatuto do Desarmamento\n(5)-Estatuto do Estrangeiro\t(6)-Estatuto do Idoso");
	printf("\t(7)-Estatuto da Igualdade Racial\t(8)-Estatuto do índio\t(9)-Estatuto da Juventude\n(10)-Estatuto da Metrópole\t(11)-Estatuto dos Militares\t(12)-Estatuto dos Museus");
	printf("\t(13)-Estatuto Nacional da Micloempresa e da Empresa de Pequeno Porte\n(14)-Estatuto da Pessoa com Câncer\t(15)-Estatuto dos Refugiados\t(16)-Estatuto da Terra\n");
	scanf("%i",&x);
	switch(x){
		case 1:
				arquivo=fopen("eca.txt","r");
				system("cls");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){											
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
				
 				fclose(arquivo);
 			
		break;
		case 2:
				system("cls");
				arquivo=fopen("ec.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);    
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){												
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 3:
				system("cls");				
					arquivo=fopen("estatuto do torcedor.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																						
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 4:
				system("cls");
					arquivo=fopen("estatuto do desarmamento.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																		
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");

		break;
		case 5:
				system("cls");
					arquivo=fopen("estatuto do estrangeiro.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																	
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 6:
				system("cls");
					arquivo=fopen("estatuto do idoso.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){					
																				
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 7:
				system("cls");			
				arquivo=fopen("estatuto da igualdade racial.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																					
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 8:
				system("cls");	
				arquivo=fopen("estatuto do indio.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){					
																				
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 9:
				system("cls");
				arquivo=fopen("estatuto da juventude.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																			
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 10:
				system("cls");
				arquivo=fopen("estatuto da metropole.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																			
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 11:
				system("cls");	
				arquivo=fopen("estatuto dos militares.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){					
																				
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 12:
				system("cls");
				arquivo=fopen("estatuto dos museus.txt","r");
				system("cls");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																		
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 13:
				system("cls");
				arquivo=fopen("enmepp.txt","r");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){					
																				
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 14:
				system("cls");
				arquivo=fopen("estatuto da pessoa com cancer.txt","r");	
				printf("\n\n");
				do{
					system("cls");
					for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
					if (estatuto!=EOF){																				
						printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
						scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
					system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		case 15:
				system("cls");
				arquivo=fopen("estatuto dos refugiados.txt","r");
				system("cls");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																					
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
		break;
		case 16:
				system("cls");
				arquivo=fopen("estatuto da terra.txt","r");
				system("cls");
				printf("\n\n");
				do{
						system("cls");
						for(i=0;i<1000;i++){
						estatuto=fgetc(arquivo);     
						printf("%c",estatuto);
					}
				if (estatuto!=EOF){																						
				printf ("\n\nDeseja passa a página? (1) Sim e (2) Não: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da Página\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		default:
			system("cls");
			printf("\nInformação Inválida\n");
	}

}

void decreto_leis(){
	int y,i=0,op=0;
	FILE *arquivo;
	char decreto;
		printf("\n'1'para (1937 a 1946)\t'2'para (1965 a 1988)\n");
		scanf("%i",&y);
		switch(y){
			case 1:
			system("cls");
			arquivo=fopen("decreto-leis-(1937 a 1946).txt","r");
			printf("\n\n");
			do{
				system("cls");
				for(i=0;i<1000;i++){
					decreto=fgetc(arquivo);
					printf("%c",decreto);
				}
				if(decreto!=EOF){
					printf("\n\n(1)-Próxima Página\n(2)-Fim\n");
					scanf("%d",&op);
					}else{
						printf("\t\tFim\n");
						op=2;
				}
			}while(op!=2);
 			fclose(arquivo);
 			printf("\n\n");
		break;
		case 2:
			system("cls");
			arquivo=fopen("decreto-leis-(1965 a 1988).txt","r");
			printf("\n\n");
				do{
				system("cls");
				for(i=0;i<1000;i++){
					decreto=fgetc(arquivo);
					printf("%c",decreto);
				}
				if(decreto!=EOF){
					printf("\n\n(1)-Próxima Página\n(2)-Fim\n");
					scanf("%d",&op);
					}else{
						printf("\t\tFim\n");
						op=2;
				}
			}while(op!=2);
 			fclose(arquivo);
 			printf("\n\n");
		break;
		default:
		printf("\nInformação inválida\n");
	}
}

/*todo o conteúdo jurídico foi retirado do site oficial do planalto.*/

