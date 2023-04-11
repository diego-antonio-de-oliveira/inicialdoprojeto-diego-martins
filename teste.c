#include <stdio.h>
#include <stdlib.h>

int main () {

int salario, mes;
float hora;

printf("digite seu salario no mes: ");
scanf("%d", &salario);
 printf("digite mes: ");
 scanf("%d", &mes);

hora = salario/mes;

printf("o valor da hora e %f", hora);






return 0;
}
