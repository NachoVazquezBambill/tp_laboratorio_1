#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
 * \brief Se pasan los numeros ingresados por el usuario a la funcion
 * \param x, y Numeros con los que se va a realizar la operacion
 * \return Devuelve el resultado
 *
 */
float suma (float x,float y)
{
    float result;
    result = x + y;
    return result;
}

/**
 * \brief Se pasan los numeros ingresados por el usuario a la funcion
 * \param x, y Numeros con los que se va a realizar la operacion
 * \return Devuelve el resultado
 *
 */
float resta (float x,float y)
{
    float result;
    result = x - y;
    return result;
}

/**
 * \brief Se pasan los numeros ingresados por el usuario a la funcion
 * \param x, y Numeros con los que se va a realizar la operacion
 * \return Devuelve el resultado
 *
 */
float multiplicacion (float x,float y)
{
    float result;
    result = x * y;
    return result;
}

/**
 * \brief Se pasan los numeros ingresados por el usuario a la funcion
 * \param x, y Numeros con los que se va a realizar la operacion
 * \return Devuelve el resultado
 *
 */
float division (float x,float y)
{
    float result;
    if(y==0) //Se verifica que sea distinto a 0
    {
        printf("No se puede dividir por 0, por favor reigrese otro numero: ");
        scanf("%f", &y);
    }
    result = x / y;
    return result;
}

/**
 * \brief Se pasan los numeros ingresados por el usuario a la funcion
 * \param n Numero a factoriar
 * \return Devuelve el resultado
 *
 */
float factorial (float n)
{
    int fact;
    if(n==0) //Se verifica que sea distinto a 0
    {
        printf("Se ha producido un error, por favor reigrese otro numero: ");
        scanf("%f", &n);
        printf("El resultado de la factorizacion de %.2f es: %.2f\n", n, factorial(n));
    }
    if(n==1)
    {
        return 1;
    }
    fact = n * factorial(n-1);
    return fact;
}
