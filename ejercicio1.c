//
// Created by Paul Contreras on 09/03/23.
//
/* Solución problema complementario 1
 * Leer un número entero obtenido al lanzar un dado de seis caras e imprimir el número en letras de la cara opuesta.
 * En las caras opuestas de un dado de seis caras están los números: 1-6, 2-5 y 3-4.
 * Si el número del dado capturado es menor que 1 o mayor que 6, se mostrará: “Un DADO no tiene ese número”.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void whatFace(int diceNumber){
    switch (diceNumber) {
        case 1:
            printf("La cara opuesta es SEIS\n");
            break;
        case 2:
            printf("La cara opuesta es CINCO\n");
            break;
        case 3:
            printf("La cara opuesta es CUATRO\n");
            break;
        case 4:
            printf("La cara opuesta es TRES\n");
            break;
        case 5:
            printf("La cara opuesta es DOS\n");
            break;
        case 6:
            printf("La cara opuesta es UNO\n");
    }
}

int main(){

    // Defino el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Defino la variable entera que el usuario es decir el número de cara que ingresara
    int diceNumber;

    printf("--------THE DICE--------\n");
    printf("Este programa imprime la cara opuesta de un dado\n");
    printf("Ingrese el número de la cara del dado: \n");
    scanf("%d", &diceNumber);

    if (diceNumber>=1 && diceNumber <= 6){
        whatFace(diceNumber);
    } else{
        printf("ESTE DADO no tiene ese número de cara\n");
    }

    system("pause");
    return 0;
}