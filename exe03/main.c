#include <stdio.h>

int main() {
  //ENTRADA
   int num;
   scanf("%i", &num);

  // PROCESSAMENTO
  if(num == 0){
    printf("NUMERO NEUTRO\n");
  }else{

    if(num%2==0){

      printf("NUMERO PAR ");

      if(num < 0){
        printf("NEGATIVO\n");
      }else{
        printf("POSITIVO\n");
      }

    }else{
      printf("NUMERO IMPAR ");

      if(num < 0){
        printf("NEGATIVO\n");
      }else{
        printf("POSITIVO\n");
      }


    }

  }

   return 0;
}