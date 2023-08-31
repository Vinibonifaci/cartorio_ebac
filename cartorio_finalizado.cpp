#include <stdio.h> // biblioteca de comunica��o do usuario
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca da string

int registro()
{
   // Inicio cria��o de variave�s/string
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   // Final cria��o de variave�s/string
   
   printf("Digite o CPF a ser cadastrado:"); // Coletando informa��es do usu�rio
   scanf("%s", cpf); // %s refere-se a string

   strcpy(arquivo, cpf);// Responsavel por copiar os valores da string

   FILE *file;// cria o arquivo
   file = fopen(arquivo, "w");// cria o arquivo
   fprintf(file,cpf);// salvo o valor da variavel
   fclose(file);// fecha o arquivo

   file = fopen(arquivo, "a"); //Abre o arquivo e atualiza informa��es
   fprintf(file,","); 
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s", nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome),

   file = fopen(arquivo, "a");
   fprintf(file,sobrenome),
   fclose(file);

   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);

   printf("Digite o cargo a ser cadastrado: ");
   scanf("%s",cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
   
   system("pause");
   
}

int consulta()
{
     setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
    char conteudo[200];
 
    printf("Digite o CPF a ser consultado: ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
       printf("N�p foi possivel abrir o arquivo, n�o localizado! \n");
	}    

    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\n Essas s�o as informa��es do usu�rio: ");
	    printf("%s", conteudo);
	    printf("\n\n");
	}  

    system("pause");
}



int deletar()
{
   char cpf[40];
   
   printf("Digite o CPF do usu�rio a ser deletado: ");
   scanf("%s",cpf); 
   
   remove(cpf);
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
       printf("O usu�rio n�o se encontra no sistema!\n");
       system("pause");
    }
    
    else if(file!=NULL)
    {
     fclose(file);
	 printf("O arquivo foi deletado!\n");
	 system("pause");
	 	
	}
   
   
}


int main()
{
   int opcao=0;
   int x=1;
  
  for(x=1;x=1;)
  {
  
   setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
  
  system("cls");
 
  printf("Cart�rio da EBAC\n\n");//inicio do menu
  printf("Seja bem vindo, no que podemos te ajudar?\n\n");
  printf("Escolha a op��o no menu:\n\n");
  printf("\t1 - Registrar-se\n");
  printf("\t2 - Consultar cadastro\n");
  printf("\t3 - Deletar cadastro\n\n");
  printf("opcao:");  //fim do menu

  scanf("%d" , &opcao);//armazenando as escolhas dos usuarios
  
  system("cls");// responsavel por limpar a tela

   switch(opcao)
  {
       case 1: // Chamada de fun��es
       registro();
	   break;
	   
	   case 2: // Consulta de cadastros
	   consulta();
	   break;
	   
	   case 3:
	   deletar(); //Deletar cadastros
       break;
       
	   default: // 
       printf("Essa op��o n�o esta disponivel!\n");
       system("pause");
       break;
  }   //fim da sele��o
  
  
  }

  }







