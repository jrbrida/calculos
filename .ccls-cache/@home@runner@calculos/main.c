#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
double num1, num2, soma, produto, quadrado, raiz, quadrado2, diferenca, seno = 0;
  printf("Digite o Primeiro Número: \n");
  printf("\t\t\t\t\t\t\t\n>>> ");
  scanf("%lf", &num1);
  printf("Digite o Segundo Número: \n");
  printf("\t\t\t\t\t\t\t\n>>> ");
  scanf("%lf", &num2);
  setbuf(stdin,NULL);
  soma = num1 + num2;
  printf("O valor da soma é %.2lf!!\n", soma);
  produto = num1 * (num2 * num2);
  printf("O produto do primeiro número pelo quadrado do segundo é %.2lf!!\n", produto);
  quadrado = pow(num1,2);
  printf("O quadrado do primeiro número é %.2lf!!\n", quadrado);
  quadrado2 = pow(num1, 2) + pow(num2, 2);
  //raiz = sqrt(quadrado2); tive problemas com a biblioteca math
  printf("A raiz quadrada da soma dos quadrados é %.2lf!!\n", raiz);
  diferenca = num1 -num2;
  //seno = sin(diferenca);tive problemas com a biblioteca math
  printf("O seno da diferença do primeiro número pelo segundo é %.2lf!! ", seno);




  return 0;
}