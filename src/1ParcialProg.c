/*
 ============================================================================
1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y
devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y
un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);

int main(void) {
	setbuf(stdout,NULL);

	float precio=5000;
	float nuevoPrecio;
	int caracterCadena;
	char cadena[15]={"Antonella"};

	nuevoPrecio=aplicarDescuento(precio);

	caracterCadena=contarCaracteres(cadena, 'a');


	printf("1. Valor del producto con 5%% de descuento: %.2f", nuevoPrecio);
	printf("\n2. Cantidad de veces que se repite el caracter: %d", caracterCadena);

	return EXIT_SUCCESS;
}

int aplicarDescuento(float precio)
{
	float valorConDescuento;
	float valorDescuento;

	valorDescuento= precio*0.05;
	valorConDescuento=precio-valorDescuento;

	return valorConDescuento;
}

int contarCaracteres(char cadena[], char caracter)
{
	int cantidad=0;
	int tam;

	cadena=strlwr(cadena);
	tam=strlen(cadena);


	for(int i=0; i<tam; i++)
	{
		if(cadena[i]==caracter)
		{
			cantidad++;
		}
	}

	return cantidad;
}
