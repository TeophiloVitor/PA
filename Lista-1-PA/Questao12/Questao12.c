#include <stdio.h>

//Criamos uma função simples que só faz somar 
int soma(int a, int b) {
  return a + b;
}

int main(){
  int x,y,z;
  //atribuimos valores a x e a y 
  x = 5;
  y = 10 ;
  //Agora criamos nosso ponteiro para função que ele tem em seus parametros 2 inteiros e irá retornar um só inteiro
  int (*p) (int , int);
  //atribuimos ao nosso ponteiro a função de soma 
  p = soma;
  // chamamos nosso ponteiro de função com nossos parametros 
  z = p(x,y);
  // a resposta será a aplicação da soma de x e y 
  printf("%d\n", z );
  return 0;
}