#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
int calcular_ultim_digit(int n){
	return abs(n) % 10;
}
int main(void) {
 assert(calcular_ultim_digit(3)==3);
 assert(calcular_ultim_digit(21)==1);
 assert(calcular_ultim_digit (78956)==6);
 assert(calcular_ultim_digit (0)==0);
 assert(calcular_ultim_digit (-37)==7);
 printf("Tots els casos de prova han passat!\n");
 int numero;
 printf("Introdueix un nombre enter: ");
 if (scanf("%d", &numero) == 1) {
 printf("L'última xifra és: %d\n", calcular_ultim_digit(numero));
 } else {
 printf("Error: L'entrada no és un nombre enter vàlid.\n");
 }
 return 0;
} 
