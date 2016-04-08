/*******************************************************************
*Programa: Trabajo Practico N°1, Calculadora.
*
*Objetivo:  Hacer una calculadora que pida 2 operandos al usuario y
        realice una o todas estas operaciones:
            Sumar.
            Restar.
            Dividir.
            Multiplicar.
            Calcular el factorial.
*
*
*Version: 0.1 del 07 abril de 2016.
*Autor: Ignacio Vazquez Bambill.
*
********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';//Variable para terminar el bucle while
    int opcion=0;//Opcion del menu
    float num1=0;
    float num2=0;
    /*Las variables num1 y num2 son los numeros ingresados por el
    usuario. Se inicializan en 0 para que no entre en el programa
    ningun dato basura que haya quedado en la direccion de memoria
    */

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");//Limpia la consola

        switch(opcion)
        {
            case 1://Pide el primer numero
                printf("Ingrese el 1er operando: ");
                scanf("%f", &num1);
                system("cls");
                continue;
            case 2://Pide el segundo numero
                printf("Ingrese el 2do operando: ");
                scanf("%f", &num2);
                system("cls");
                continue;
            case 3://Llama a la funcion suma y muestra el resultado
                printf("El resultado de la suma es: %.2f\n", suma(num1, num2));
                break;
            case 4://Llama a la funcion resta y muestra el resultado
                printf("El resultado de la resta es: %.2f\n", resta(num1, num2));
                break;
            case 5://Llama a la funcion division y muestra el resultado
                printf("El cociente de la division es: %.2f\n", division(num1, num2));
                break;
            case 6://Llama a la funcion multiplicacion y muestra el resultado
                printf("El producto de la multiplicacion es: %.2f\n", multiplicacion(num1, num2));
                break;
            case 7://Llama a la funcion factorial para cada operando y muestra los resultados
                factorial(num1);
                factorial(num2);
                break;
            case 8://Llama a todas las funciones y muestra todos los resultados
                printf("El resultado de la suma es: %.2f\n", suma(num1, num2));
                printf("El resultado de la resta es: %.2f\n", resta(num1, num2));
                printf("El producto de la multiplicacion es: %.2f\n", multiplicacion(num1, num2));
                printf("El cociente de la division es: %.2f\n", division(num1, num2));
                factorial(num1);
                factorial(num2);
                break;
            case 9://Salir del programa
                seguir = 'n';
                break;
            default://Verifica que se ingrese una opcion valida del menu
                printf("La opcion es invalida, por favor elija una opcion del menu.\n");
        }
        system("pause");//Congela la consola para ver el resultado
        system("cls");//Limpia la pantalla
        num1 = 0;//Vuelvo a asignarle 0 a las variables num1 y num2 para empezar el programa de nuevo
        num2 = 0;
    }
    return 0;
}
