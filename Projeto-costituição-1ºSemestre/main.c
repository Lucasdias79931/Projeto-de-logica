#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>




void codigo();	//subfun��o
void estatutos(); //subfun��o
void legislacao_federal(); //fu��o principal 
void decreto_leis(); //subfun��o
void constituicao_federal(); //subfun��o


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

/*Essa fun��o, assim como as outras, faz o uso de switch para charmar a informa��o requisitada pelo usu�rio.
 em cada case o arquivo que consta a informa��o pedida pelo usu�rio � aberto e � lido. fa�o o uso de um la�o for,que por sua vez est� 
 rodando dentro de um (do-while), para limitar o n�mero de caractere para 1000 e depois fa�o um teste l�gico(if-else) da seguinte maneira: 
 se estiver caractere diponivel no arquivo 
 ent�o pergunta ao usu�rio se quer passar para a pr�xima p�gina, se n�o, for�a a saida do la�o e fecha o arquivo; 
*/

void legislacao_federal(){
	int x;
	system("cls");
	printf("(1)-constitui��o Federal\t(2)-C�digos\t(3)-Estatutos\t(4)-Decretos-Leis\n\n");
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
				printf("\nInforma��o Inv�lida\n\n");

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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
		printf("\nQual c�digo deseja?\n(1)-C�digo Civil\t(2)-C�digo de Processo Civil-1973\t(3)-C�digo de Processo Penal\t(4)-C�digo penal\n(5)-C�digo Tribut�rio Nacional\t(6)-Consolida��o das Leis do Trabalho\t(7)-C�digo de Defesa do Consumidor\t(8)-C�digo de Tr�nsito Brasileiro\n(9)-C�digo Eleitoral\t(10)-C�digo Florestal\t(11)-C�digo de Minas\t(12)-C�digo Penal Militar\n(13)-C�digo Brasileiro de aeron�utica\t(14)-C�digo Brasileiro de Telecomunica��es\t(15)-C�digo Comercial\t(16)-c�digo da �gua\t(17)-C�digo de Processo Penal Militar\t(18)-C�digo de Processo Civil-2015\n ");
		scanf("%i",&x);
		switch(x){
			case 1:
				arquivo=fopen("codigo civil.txt","rt"); //abre o arquivo
				system("cls");
				printf("\n\n");
					do{
						for(i=0;i<1000;i++){			//limitado para ler apenas 1000 caracteres antes de entrar no teste l�gico. 
							codigo=fgetc(arquivo);		
							printf("%c",codigo);
 						}
 						if(codigo!=EOF){										//  se ainda houver caracterce, o programa pergunta 																			
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");		//ao usu�rio se deseja proseguir para a pr�xima "P�gina".
 							scanf("%d",&op);
						 }else{
						 	printf("\t\t\tFim");
						 	op=2; 	//for�o a saida do do-while
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
 							printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim!\n");
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
				printf("\nInforma��o invalida");



		}
}

void estatutos(){

	FILE *arquivo;
	char estatuto;
	int x, txt=0, i;
	system("cls");
	printf("(1)-Estatuto da Crian�a e do Adolescente\t(2)-Estatuto da Cidade\t(3)-Estatuto de Defesa do Torcedor\t(4)-Estatuto do Desarmamento\n(5)-Estatuto do Estrangeiro\t(6)-Estatuto do Idoso");
	printf("\t(7)-Estatuto da Igualdade Racial\t(8)-Estatuto do �ndio\t(9)-Estatuto da Juventude\n(10)-Estatuto da Metr�pole\t(11)-Estatuto dos Militares\t(12)-Estatuto dos Museus");
	printf("\t(13)-Estatuto Nacional da Micloempresa e da Empresa de Pequeno Porte\n(14)-Estatuto da Pessoa com C�ncer\t(15)-Estatuto dos Refugiados\t(16)-Estatuto da Terra\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
																				
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
																				
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
																				
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
																				
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
						printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
						scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
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
				printf ("\n\nDeseja passa a p�gina? (1) Sim e (2) N�o: ");
				scanf("%d",&txt);
					}else {
						txt=2;
						printf("\n\nFim da P�gina\n\n");
					}
				system("cls");
				}while(txt!=2);
 				fclose(arquivo);
 				printf("\n\n");
		break;
		default:
			system("cls");
			printf("\nInforma��o Inv�lida\n");
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
					printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim\n");
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
					printf("\n\n(1)-Pr�xima P�gina\n(2)-Fim\n");
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
		printf("\nInforma��o inv�lida\n");
	}
}

/*todo o conte�do jur�dico foi retirado do site oficial do planalto.*/

