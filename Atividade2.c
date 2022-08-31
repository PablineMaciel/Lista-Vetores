//Dado um vetor de n números reais, crie uma função que retorne o maior elemento do vetor, apresente o
//vetor.
#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"
int encontremaior (int vetor[],int n){
 	int i, maior=vetor[0];
 	for(i=1; i < n; i++){
 		if(vetor[i]>maior){
 			maior=vetor[i];
		}
	 }
	return maior;
 }
int main(){
 	int vetor[100];
 	int n, maior;
 	printf("\nInforme o numero de elementos:\t");
	scanf("%d",&n);
	geraVet(vetor, n);
	printVet(vetor, n);
 	maior=encontremaior(vetor, n);
 	printf("O maior elemento: %d\n",maior);

	return 0;
}
	

