// 1SV2 GONZALEZ MARTINEZ JOSE MANUEL
#include <stdio.h>
#include <math.h>

int main(){
	/*Se introducira un valor de tipo entero
	y el programa nos dira si es par o impar*/
	
	int x;
	
	printf("Introduzca un valor entero (sin decimales):");
	scanf("%d", &x);
	
	if((x%2)==0){
		printf("\nEl numero %d es par\n", x);
	}
	else {
		printf("\nEl numero %d es impar\n", x);
	}
	printf("\nFIN DEL PROGRAMA");
}
