#include <stdio.h>

int main(){
	int salario;
	
	printf("Digite seu salário: ");
	scanf("%d", &salario);
	
	
	printf("\nSalários mínimos: %d", salario / 1518);
	
	return 0;
}
