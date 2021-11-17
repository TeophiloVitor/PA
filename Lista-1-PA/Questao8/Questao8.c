#include <stdio.h>

int main(void){
  // Aqui tem presente os dois códigos onde cada um tem seus printf nos for
  int vet[] = {4,9,13};
  int i;
  //Codigo 1
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
  printf("\n");
  //Código 2
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }

}
