/*
Progama: Serie Fibonacci.
*/
#include <stdio.h>

int main()
{
	//Declaracion de variables
	int a = 0, b = 1, c = 0;
	int i;
	int number = 0;
	
	//Almacenamos el numero de repeticiones para
	//ejecutar el ciclo for
	printf("Ingrese un numero: ",number);
	scanf("%i",&number);
	
	printf("%i\n",c);
	//ciclo for para generar el numero de repeticiones
	//muestra la secuencia fibonacci.
	for(i=0;i<number;i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%i\n",c);  
	}
	

	return 0;
}