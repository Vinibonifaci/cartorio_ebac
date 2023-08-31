#include <stdio.h> // biblioteca de comunicação do usuario
#include <stdlib.h> // biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> // biblioteca da string

int registro()
{
   // Inicio criação de variaveís/string
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   // Final criação de variaveís/string
   
   printf("Digite o CPF a ser cadastrado:"); // Coletando informações do usuário
   scanf("%s", cpf); // %s refere-se a string

   strcpy(arquivo, cpf);// Responsavel por copiar os valores da string

   FILE *file;// cria o arquivo
   file = fopen(arquivo, "w");// cria o arquivo
   fprintf(file,cpf);// salvo o valor da variavel
   fclose(file);// fecha o arquivo

   file = fopen(arquivo, "a"); //Abre o arquivo e atualiza informações
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
       printf("Nãp foi possivel abrir o arquivo, não localizado! \n");
	}    

    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\n Essas são as informações do usuário: ");
	    printf("%s", conteudo);
	    printf("\n\n");
	}  

    system("pause");
}



int deletar()
{
   char cpf[40];
   
   printf("Digite o CPF do usuário a ser deletado: ");
   scanf("%s",cpf); 
   
   remove(cpf);
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
       printf("O usuário não se encontra no sistema!\n");
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
 
  printf("Cartório da EBAC\n\n");//inicio do menu
  printf("Seja bem vindo, no que podemos te ajudar?\n\n");
  printf("Escolha a opção no menu:\n\n");
  printf("\t1 - Registrar-se\n");
  printf("\t2 - Consultar cadastro\n");
  printf("\t3 - Deletar cadastro\n\n");
  printf("opcao:");  //fim do menu

  scanf("%d" , &opcao);//armazenando as escolhas dos usuarios
  
  system("cls");// responsavel por limpar a tela

   switch(opcao)
  {
       case 1: // Chamada de funções
       registro();
	   break;
	   
	   case 2: // Consulta de cadastros
	   consulta();
	   break;
	   
	   case 3:
	   deletar(); //Deletar cadastros
       break;
       
	   default: // 
       printf("Essa opção não esta disponivel!\n");
       system("pause");
       break;
  }   //fim da seleção
  
  
  }

  }







