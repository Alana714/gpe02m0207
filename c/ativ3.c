#include<stdio.h>

main(){

  float larg, comp, area;

  printf("Digite a largura: ");
  scanf("%f", &larg); 

  printf("Digite o comprimento: ");
  scanf("%f", &comp);  

  area = larg * comp;

  printf("A area da sala e: %.2fm2", area);
}