/*numeros aleatorios*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //libreria para el orden aleatorio
#define t 50 

int main()
{
		int vec[t],x,n, par, impar,mayor,menor; 
		// vec[20]--> a 20 lo puedo cambiar por una constante definida desde el inicio
	 
	 printf("numeros de elementos del vector: ");
	 scanf("%d",&n);
 
 	 srand(time(0));
	 	 for(x=0; x<n; x++)
	  {
	  vec[x]=rand()%100+100;
	  	
	  }
	  //para imprimir el vector por cada posicion
	 for(x=0; x<n; x++)
	  {
	  	printf("\n aleatorios: %d",vec[x]);
	  }

	return 0;
}
