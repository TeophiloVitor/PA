#include <stdio.h>
#include <stdlib.h>
//criamos o produto matricial soma com os 4 argmentos, sendo 3 deles mtarizes criados na int main 
// realizara o produto matricial seguindo do pressuposto que as matrizes podem ser multiplicadas
void produtomatricial(int matriz1[][] , int matriz2[][] ,int matriz3[][] , int linhas1 , int colunas2){
	int i , j, somaprod , linha , coluna;
	for(linha=0; linha< linhas1 ; linha++)
    for(coluna=0; coluna< colunas2; coluna++){
      somaprod=0;
      for(i=0; i< linhas1; i++) somaprod+= matriz1[linha][i]*matriz2[i][coluna];
      matriz3[linha][coluna]=somaprod;
    }
    printf("Imprimindo Matriz C = MatrizA * MatrizB \n");
	for(linha=0; linha< linhas1; linha++){
    	for(coluna=0; coluna<colunas2; coluna++){
      		printf("%d ", matriz3[linha][coluna]);
      	}
      	printf("\n");
    }
    	
}
// criamos o void preencher para colocar valores dentro das nossas matrizes quando for chamado
void preencher(int matriz[][] , int linhas , int colunas){
	int i , j;
	printf("Coloque os valores de cada casa da matriz \n")
	for(i = 0 ; i < linhas ; i++){
		for(j=0 ; j < colunas ; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
}

int main(){
	int num , linhas1 , linhas2 , colunas1 , colunas2;
	printf("Digite o numero de termos de linhas e colunas da matriz A ");
  	scanf("%d%d", &linhas1 , &colunas1);
  	printf("Digite o numero de termos de linhas e colunas da matriz B ");
  	scanf("%d%d", &linhas2 , &colunas2);
  	int matriz1[linhas1][colunas1] , matriz2[linhas2][colunas2] , matriz3[linhas1][colunas2];
  	//chamamos os voids
  	preencher(matriz1,linhas1 , colunas1);
  	preencher(matriz2 ,linhas2 , colunas2);
  	produtomatricial(matriz1 , matriz2 , matriz3 , linhas1 , colunas2);
	return 0;
}