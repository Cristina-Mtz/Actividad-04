#include <stdio.h>
#include <stdlib.h>
#include "PERSONAJE.h"
void capturar_enteros()
	{
			int enteros[5],i;
			float suma;
			for(i=0;i<=4;i++)
				{
					printf("Inserta el n%cmero %i\n",163,i+1);
						scanf("%d",&enteros[i]);
				}
			for(i=0;i<=4;i++)
				{
					printf("Posici%cn %d: %d\n",162,i+1,enteros[i]);
				}
			for(i=0;i<=4;i++)
				{
					suma=suma+enteros[i];
				}
				printf("SUMA TOTAL: %.1f\n",suma);
				printf("PROMEDIO: %.1f\n",suma/5);
		system("pause");
	}
void mostrar(int n, char cadena[])
	{
		int i;
		for(i=0;i<=n;i++)
		{
			printf("%s\n",cadena);
		}
	system("pause"); 	
	}

main()
	{
		int rep=0;
		char cadena[20];
		int n;
		do
			{
				int op;
					printf("Seleccione una opci%cn:\n1.Capturar enteros.\n2.Mostrar.\n3.Capturar personaje.\n4.Mostrar personajes\n5.Salir.\n",162);scanf("%d",&op);
				switch(op)
					{
						case 1: 
								capturar_enteros();
						break;
						case 2: 
								printf("Inserta la cadena de caracteres:\n");
								fflush(stdin);gets(cadena);
								printf("Inserta la cantidad de veces que se mostrara la cadena\n");
								scanf("%d",&n);
								mostrar(n,cadena);
						break;
						case 3: capturar_personaje();
						break;
						case 4: mostrar_personajes();
						break;
						case 5: rep=1;
						break;
						default:printf("OPCION INVALIDA");
			}
			system("cls");
	system("pause");
			}
		while(rep==0);
}
	
