//
// Created by Paul Contreras on 09/03/23.
//
/*
 * En un supermercado, se realizan descuentos por las compras a partir de unas bolitas de colores:
 * Verde 20%, amarilla 25%, negra del 30%; la blanca no aplica ningún descuento.+
 * Leer el importe de la compra y el color de la bolita e imprimir lo que debe pagar dicho cliente.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const float v = 0.20; // 20%
const float a = 0.25; // 25%
const float n = 0.30; //


void menu(){
    printf("-----------------------\n");
    printf("|    SELECCIONE UN COLOR |\n");
    printf("-----------------------\n");
    printf("|       v - Verde        |\n");
    printf("|       a - Amarillo     |\n");
    printf("|       n - Negro        |\n");
    printf("|       b - Blanco        |\n");
    printf("-----------------------\n");
}

int myDesc(char ballColor, float importe){
    float desc;
    switch (ballColor) {
        case 'v':
            desc = importe * v;
            printf("Felicidades ganaste un 20 de descuento :)\n");
            return desc;
            break;
        case 'a':
            desc = importe * a;
            printf("Felicidades ganaste un 25 de descuento :)\n");
            return desc;
            break;
        case 'n':
            desc = importe * n;
            printf("Felicidades ganaste un 30 de descuento :)\n");
            return desc;
            break;
        case 'b':
            printf("Felicidades no ganaste ningun descuento :(\n");
            return 0;
            break;
        default:
            printf("No tienes descuento \n");
            return 0;
    }
    return 0;
}

int myFinalPrice(float importe, float myDesc){
    float pago;

    pago = importe - myDesc;

    printf("Usted tendra que pagar %.2f ", pago);
}

int main(){
    // Definimos el idioma
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos las variables a usar
    float importe, miDescuento;
    char myColor;

    printf("--------------------------------\n");
    printf("|  CALCULADORA DE PRECIO MI SUPER |\n");
    printf("--------------------------------\n");
    menu();
    printf("Seleccione un color: ");
    myColor = getchar();
    printf("Ingrese el importe de su compra: \n");
    scanf("%f", &importe);
    miDescuento = myDesc(myColor, importe);
    myFinalPrice(importe, miDescuento);

    system("pause");

    return 0;

}