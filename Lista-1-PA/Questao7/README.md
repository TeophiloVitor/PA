Utilizando valores de testes para os casos:
- p = mat + 1; É válida, p é o endereço da variável mat[0+1];
- p = mat++; Não é válida, pois não pode se incrementar assim em um vetor;
- p = ++mat; Não é válida, pois há um erro do operador de incremento;
- x = (*mat)++; É válida, pois pegamos o valor de mat na primeira casa e somamos 1.

