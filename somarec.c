#include <stdio.h>

/*Função para realização da soma recursiva*/
int somarec(int n[10], int k){
	int s = 0;
	if(k == -1)
		return s;
	else
		s = s + n[k];
return s + somarec(n,k-1);
}

/*Função principal*/
void main(){
	int n[10],k,i;
	printf("Entre com o tamanho da sequencia que deseja somar: ");
	scanf("%d",&k);
	for (i=0;i<k;i++){
		printf("Entre com o elemento: ");
		scanf("%d", &n[i]);
	}
	printf("Essa eh a sua soma: %d ", somarec(n,k-1));
}
