#include <stdio.h>
#include <stdlib.h>

int main () {

int salario, mes, hora;


printf("digite seu salario no mes: ");
scanf("%d", &salario);
 printf("digite mes: ");
 scanf("%d", &mes);

hora = salario/mes;

printf("o valor da hora e %d", hora);

if (hora <= 10){

printf("\nta ganhando pouco em!\n");
}
else if(hora > 10){
	printf("\nta ganhando bem!");
}





return 0;
}
