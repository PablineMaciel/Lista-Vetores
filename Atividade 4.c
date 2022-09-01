//Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, crie uma função que receba
//esse vetor e conte quantos valores impares existem no vetor. Retorne a quantidade de impares.

#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

int encontreimpar (int vetor[],int n){
 	int i, impar=vetor[0];
 	for(i=-1; i <- n; i++){
 		if(vetor[i]<impar){
 			impar=vetor[i];
		}
	 }
	return impar;
 }
int main(){
 	int vetor[100];
 	int n, impar;
 	printf("\nInforme o numero de elementos:\t");
	scanf("%d",&n);
	geraVet(vetor, n);
	printVet(vetor, n);
 	impar=encontreimpar(vetor, n);
 	printf("O elemento impar: %d\n",impar);

	return 0;
}
	

