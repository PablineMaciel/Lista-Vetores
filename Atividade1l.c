//Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usu�rio
//e o limite do vetor � 100) e passe o mesmo como par�metro para uma fun��o que retorne a soma de seus
//elementos.

#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"
int main(){
	int n,i,soma=0,vet[100];
		printf("\nInforme o numero de elementos:\t");
		scanf("%d",&n);
		geraVet(vet, n);
		printVet(vet, n);
	if(n<=100) {
		for(i=0;i<n;i++)
			soma+=vet[i];
   		printf("\nSoma :%d",soma);
	}
		
	return 0;
}
