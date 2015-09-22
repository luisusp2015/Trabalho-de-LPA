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
	int k,j ;
	int *vetu;
	vetu = (int*)calloc(tamvet,sizeof (int));//usando o calloc para preencher os espaços vazios com o valor 0;
	/* iremos separar a situação em 2 casos
	1º - em que o tamanho do vetor é >1 ;
	2º - em que o tamanho do vetor é = 1;
	*/

	if(tamvet > 1 ){ // caso 1
		printf("O(s) valor(es) unico(s) eh(sao) :\n");
		
		for(i;i<tamvet;i++){
			j = i+1 ; 
			if(vetor[i]==vetor[j]){//cria um vetor formado pelos valores repetidos em suas respectivas posições de origem
				vetu[i] = vetor[i];
				vetu[j] = vetor[j];
			}	
		}
		for(q;q<tamvet;q++){
			k = vetor[q] - vetu[q];//realiza a subtração vetorial para eliminar os repetidos
			if(vetor[q]!=0 && k!=0){//para restringir  o caso especial em que  o elemento unico é o valor zero;
			if(k!= 0){ // imprime os valores que são != 0  , ou seja, não repetidos , unicos
				printf("%d ",vetor[q]);
				w++; // cria contador para verificar os casos em q nao existem elementos unicos;
			}
		} if(vetor[q]!= vetor[q+1]&&vetor[q]==0){ // caso especial em que o elemento unico é o zero;
			printf("%d ",vetor[q]);
		}
		}
			if(w==0){  
				printf("\aNao existem elementos unicos no conjunto!");				
			}
				
	}
	
	if(tamvet==1){ // caso 2
		system("cls");
		printf("Como existe apenas um valor ele eh unico:\n%d",vetor[0]);
	}
	
	
	
	
	
	
	
	
	
}

