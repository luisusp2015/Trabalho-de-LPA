#include<stdio.h>
#include<stdlib.h>

void insertionsort(int vet[],int tam);
void diferenciador(int v[],int tamvet);


void main(){
	printf("                  Pares com a menor diferenca         \n\n\n\n");
	int n,k=0;
	int *vet1;//ponteiro pois o tamanho nao eh definido ainda
	printf("Entre com o valor da quantidade de numeros que serao colocados em teste : ");
	scanf("%d",&n);
	while(n<=0){// while de segurança caso o usuario  coloque um valor de n diferente de n>0;
		system("cls");
		printf("O valor de entrada para a quantidade de numeros  \ndeve ser um valor  maior que zero ,por favor digite novamente o valor de n:\n");
		scanf("%d",&n);
	}
	vet1  = (int *)malloc(sizeof(int)*n);
	system("cls");
	printf("Entre com os valores inteiros que serao estudados,separado-os por espaco:\n\n");
     
	for(k ; k<n ; k++){
		scanf("%d",&vet1[k]);
	}
	
	insertionsort(vet1,n);//Ordena o vetor dos valores
		
	diferenciador(vet1,n);//checa qual par tem a menor diferença
	
	free(vet1);//desaloca o vetor vet1
	
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

void diferenciador(int v[],int tamvet){
	int i=0;//criou-se contadores i e k ;
	int k=0;
	int *menores,h,w,c,j;//criou-se um vet "menores" com alocação dinamica , para armazenar o valor das diferenças
	
	menores = (int*)malloc(sizeof(int)*tamvet-1);//aloca dinamicamente
	
	if(tamvet>=3){
		c = tamvet-1 ;
		printf("O(s) par(es) com a menor diferenca eh(sao): \n ");
		for(i;i<c;i++){ // irá percorrer o vetor realizando a diferença dos pares consecutivos e armazenando essa diferença no vetor menores
			j=i+1;
			w = v[j] - v[i];
		    menores[i] = w;
		}
		
		insertionsort(menores,tamvet-1);
	
	
		i=0;
		for(i;i<c;i++){//lê novamente o vetor realizando a diferença dos consecutivos  , só que imprimindo aqueles  pares cuja diferença é igual a "h";
			j=i+1;
			h = v[j] - v[i];
			if(h == menores[0]){
				printf("(%d,%d)\n",v[i],v[j]);
			}
		}
	}
		
	if(tamvet<3){// caso especial em que existe apenas um par
		j=i+1;
		printf("Como existe apenas um par de valores ele proprio possui\n a menor diferenca :");	
	
	printf("\n\n\aO par ,formado pelos valores, com a menor diferenca eh : (%d,%d)",v[i],v[j]);
    }
	
	free(menores);//desaloca o vetor menores
}


