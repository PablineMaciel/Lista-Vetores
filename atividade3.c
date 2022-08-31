//Dado um vetor de n números reais, crie uma função que retorne o menor elemento do vetor, apresente o
//vetor.
#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"
int encontremenor (int vetor[],int n){
 	int i, menor=vetor[0];
 	for(i=1; i < n; i++){
 		if(vetor[i]<menor){
 			menor=vetor[i];
		}
	 }
	return menor;
 }
int main(){
 	int vetor[100];
 	int n, menor;
 	printf("\nInforme o numero de elementos:\t");
	scanf("%d",&n);
	geraVet(vetor, n);
	printVet(vetor, n);
 	menor=encontremenor(vetor, n);
 	printf("O menor elemento: %d\n",menor);

	return 0;
}
	

