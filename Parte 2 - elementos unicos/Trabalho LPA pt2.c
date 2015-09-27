#include<stdio.h>
#include<stdlib.h>

void insertionsort(int vet[],int tam);
void identificador(int vetor[],int tamvet);


void main(){
	int n,k=0;
	int *vet1;
	printf("Entre com o valor da quantidade de numeros que serao colocados em teste : ");
	scanf("%d",&n);
		while(n<=0){// while de segurança caso o usuario  coloque um valor de n diferente de n>0;
		system("cls");
		printf("O valor de entrada para a quantidade de numeros  \ndeve ser um valor  maior que zero ,por favor digite novamente o valor de n:\n");
		scanf("%d",&n);
	}
	vet1  = (int *)malloc(sizeof(int)*n);
	system("cls");
	printf("Entre com os valores inteiros que serao estudados,\nseparado-os por espaco:\n\n");
     
	for(k ; k<n ; k++){
		scanf("%d",&vet1[k]);
	}
	
	insertionsort(vet1,n);//Ordena o vetor dos valores
		
	identificador(vet1,n);//checa quais são os valores unicos e os imprime.
	getch();
}


void insertionsort(int vet[],int tam){
	int i,j,eleito;
	
	for (i = 1; i < tam; i++){
      eleito = vet[i];
      j = i - 1;
      while ((j>=0) && (eleito < vet[j])) {
         vet[j+1] = vet[j];
         j--;
      }
      vet[j+1] = eleito;
   }
}

void identificador(int vetor[],int tamvet){
	int i=0;
	int q=0;
	int w=0;
	int k,j , r;
	int *vetu;
	vetu = (int*)calloc(tamvet,sizeof (int));//usando o calloc para preencher os espaços vazios com o valor 0;
	/* iremos separar a situação em 2 casos
	1º - em que o tamanho do vetor é >1 ;
	2º - em que o tamanho do vetor é = 1;
	*/

	if(tamvet > 1 ){ // caso 1
		printf("O(s) valor(es) unico(s) eh(sao) :\n");
		
		for(i;i<tamvet;i++){
		if(i==0){
			if(vetor[0]!=vetor[1]){ // compara o primeiro com o segundo;
				printf("%d ",vetor[0]);w++;
			}
		}
		if(i>=1&& i<tamvet-1){ // compara o termo com seu visinho a esquerda e a direita;
			if(vetor[i]!=vetor[i+1]&&vetor[i-1]!=vetor[i]){
				printf("%d ",vetor[i]);w++;
			}
		}
		if(i==tamvet-1){ // compara o ultimo com o penultimo;
			if(vetor[i]!=vetor[i-1]){
				printf("%d ",vetor[i]);w++;
			}
		}
	}
			if(w==0){  // caso especial em que não existem valores unicos;
				printf("\aNao existem elementos unicos no conjunto!");				
			}
				
	}
	
	if(tamvet==1){ // caso 2
		system("cls");
		printf("Como existe apenas um valor ele eh unico:\n%d",vetor[0]);
	}
	
	
	
	
	
	
	
	
	
}

