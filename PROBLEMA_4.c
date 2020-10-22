#include <stdio.h>
#include <math.h>

int main(){
	
	/*Este programa calcula las raices 
	de una ecuacion de segundo grado*/
	
	float a,b,c;
	
	printf("Forma general de una ecuacion de 2 grado:\n");
	printf("\n(a)x^2+(b)x+c=0\n");
	printf("\nIntroduzca el valor de 'a':");
	scanf("%f",&a);
	printf("\nIntroduzca el valor de 'b':");
	scanf("%f",&b);
	printf("\nIntroduzca el valor de 'c':");	
	scanf("%f",&c);
	
	if((((b*b)-(4*a*c)))<0){
		printf("\nERROR\n");
		printf("\nNO HAY RAICES NEGATIVAS\n");
		printf("\nFIN DEL PROGRAMA");
	}
	
	if((((b*b)-(4*a*c)))==0){
		printf("\nSolo hay una solucion:");
		printf("\nX=%.2f",(((-b)+(sqrt(((b*b)-(4*a*c)))))/(2*a)));
		printf("\nFIN DEL PROGRAMA");		
	}
	
	if((((b*b)-(4*a*c)))>0){
		printf("\nLas soluciones son:\n");
		printf("\nX1=%.2f\n",(((-b)+(sqrt(((b*b)-(4*a*c)))))/(2*a)));
		printf("\nX2=%.2f\n",(((-b)-(sqrt(((b*b)-(4*a*c)))))/(2*a)));
		printf("\nFIN DEL PROGRAMA");		
	}

	
}
