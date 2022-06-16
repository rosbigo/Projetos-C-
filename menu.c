#include  <stdio.h>
#include  <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int op,op1,op2,op3;

 do
{
 printf(" O que você deseja comprar? \n1.Periféricos\n2.Jogos\n3.Peças\n\n0.Sair \n\n");
  scanf("%d",&op);
 if(op==1)
 {
  do
  {
   printf("\n\n> PERIFÉRICOS\n1.Teclado - $40\n2.Mouse - $30\n\n0.Voltar\n\n");
    scanf("%d",&op1);
    if(op1==1)
    {
     printf("\nVocê comprou um teclado!");
    }
    else
    {
      if(op1==2)
      {
       printf("\nVocê comprou um mouse!");
      }
      else
      {
       if(op1>2)
       {
        printf("Número Inválido!!");
       }
      }
    }
  }while(op1!=0);
 }
 else
 {
  if(op==2)
  {
   do
   {
    printf("\n\n> JOGOS\n1.Bloodborne - $45\n2.Dark Souls - $30\n\n0.Voltar\n\n");
     scanf("%d",&op2);
     if(op2==1)
     {
      printf("\nVocê comprou Bloodborne!");
     }
     else
     {
       if(op2==2)
       {
        printf("\nVocê comprou Dark Souls!");
       }
       else
       {
        if(op2>2)
        {
        printf("\nNúmero Invalido!");
        }
       }
     }
   }while(op2!=0);
   }
   else
   {
    if(op==3)
    {
     do
     {
      printf("\n\n> PEÇAS\n1.Memória RAM 8GB - $90\n2.SSD 500GB - $300\n\n0.Voltar\n\n");
       scanf("%d",&op3);
       if(op3==1)
       {
        printf("\nVocê comprou uma memória ram de 8gb!");
       }
       else
       {
        if(op3==2)
        {
         printf("\nVocê comprou um ssd de 500gb!");
        }
        else
        {
         if(op3>2)
         {
         printf("\nNúmero Invalido!");
         }
        }
       }
     }while(op3!=0);
    }
   }
  }
 }while(op!=0);

 printf("\n\n\n");
return 0;
}
