#include <stdio.h>

/*
1 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da 
     gasolina é R$ 4,88 e o preço do litro do álcool é R$ 3,18.
*/

float g = 4.88, a = 3.18, litro = 0, p, pf;
int tipo;

int main(void) {

  do {
  printf("Digite o combustivel 1 = alcool ou 2 = gasolina: ");
  scanf(" %d", &tipo);
  printf("\n");
    if (tipo != 1 && tipo != 2){
        printf("Tipo de combustivel invalido.\n\n");
    }
  } while (tipo != 1 && tipo != 2);

  switch(tipo){

    case 1: 
     printf("A-álcool. Digite a quantidade em litros: ");
     scanf("%f", &litro);
     if(litro <= 20){

        p = (a * litro);
        pf = p - (p * 0.03);

         printf("\nSaldo devido: %.2f", pf);
     } else {
        p = (a * litro);
        pf = p - (p * 0.05);

         printf("\nSaldo devido: %.2f", pf);
     }
    break;

    case 2: 
    printf("G-gasolina. Digite a quantidade em litros: ");
     scanf("%f", &litro);
     if(litro <= 20){

        p = (g * litro);
        pf = p - (p * 0.04);

         printf("\nSaldo devido: %.2f", pf);
     } else {
        p = (g * litro);
        pf = p - (p * 0.06);

         printf("\nSaldo devido: %.2f", pf);
     }
    break;  
  } 
  return 0;
}