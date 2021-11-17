#Explicações

- p == &i retorna verdadeiro, pois o ponteiro p é exatamente o endereço da variavel i;
- *p - *q retornará -2 pois quando fazemos *p - *q, estamos pegando o valor contido no endereço p e subtraindo do valor contido no endereço q, ou seja pegando 3 e subtraindo de 5 que dará -2;
- **&p  retorna o conteúdo do conteúdo do endereço do ponteiro p, nesse caso como i = 3 então esse conteúdo armazenado no endereço de p é o valor de 3; 
- 3 - *p/(*q) + 7 usando os conhecimentos visto nas afirmações acima, os valores calculados retornam um resultado de 10.
