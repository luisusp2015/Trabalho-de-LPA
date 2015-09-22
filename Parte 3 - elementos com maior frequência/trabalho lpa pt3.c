#include<stdio.h>
#include<stdlib.h>

void insertionsort(int vet[],int tam);
void insertion(int vt[],int tm);
void identificador(int vetor[],int tamvet);


void main(){
	int n,k=0;
	int *vet1;
	printf("Entre com o valor da quantidade de numeros que serao colocados em teste : ");
	scanf("%d",&n);
	vet1  = (int *)malloc(sizeof(int)*n);
	system("cls");
	printf("Entre com os valores inteiros que serao estudados,\nseparado-os por espaco:\n\n");
     
	for(k ; k<n ; k++){
		scanf("%d",&vet1[k]);
	}
	
	insertionsort(vet1,n);//Ordena o vetor dos valores
		
	identificador(vet1,n);//checa quais são os valores com maior frequencia.
	getch();
}


void insertionsort(int vet[],int tam){ // ordena em ordem crescente
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

void insertion(int vt[],int tm){//ordena o vetor em ordem decrescente
	int i,j,eleito;
	
	for (i = 1; i < tm; i++){
      eleito = vt[i];
      j = i - 1;
      while ((j>=0) && (eleito > vt[j])) {
         vt[j+1] = vt[j];
         j--;
      }
      vt[j+1] = eleito;
   }
}



void identificador(int vetor[],int tamvet){
	
	int q=0;int g=0;int p=0;int i=0;int k=0;int j=0;
	int *w;
	int h,c,o,u;
	
	w=(int*)calloc(tamvet,sizeof(int));//cria o vetor w
	

	
	for(i;i<tamvet-1;i++){//começaa leitura do vetor vetor[];
		
		u=i+1;
		
		if(vetor[i]==vetor[u]){ // faz a comparação para saber qual a frequencia;
			q++;
		}else{
			q=0;
		}
	
		w[i]=q; // atribui os valores de maiores frequencias para o vetor  w
	}
	
	insertion(w,tamvet); // ordena em ordem decrescente o vetor w;

	
	printf("O(s) valo(res) com maior frenquencia eh(sao):\n");

	h = w[0]; // atribui o valor de w[0] (maior frequencia) para h;
	i=0;//restaura a variável contadora;
	c=tamvet-1;
	
	for(i;i<c;i++){ // irá ler o vetor
		u= i+1;
		if(vetor[i] == vetor[u]){//irá  checar quala frenquencia dos termos;
			p++;
			
		}else{
			p=0;
		}
		//compara o valor da maior frequencia(h) com o valor da frequencia dos termos do vetor;
		if(h == p){ // irá imprimir  os valores que possuem a maior frequência;
			printf("\n%d",vetor[i]);
			p=0;
		}
	}
}
