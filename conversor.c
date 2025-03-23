#include <stdio.h>

// Función para mostrar el menú y obtener la opción del usuario
int mostrarMenu() {
    int opcion;
    printf("\nConversor de Monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    printf("7. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Función principal
int main() {
    int opcion;
    float cantidad, resultado;
    const float QUETZAL_A_DOLAR = 0.13; // Tasa de conversión
    const float QUETZAL_A_EURO = 0.12;
    const float DOLAR_A_QUETZAL = 7.75;
    const float DOLAR_A_EURO = 0.92;
    const float EURO_A_QUETZAL = 8.45;
    const float EURO_A_DOLAR = 1.09;

    do {
        opcion = mostrarMenu();

        switch (opcion) {
            case 1: // Quetzales a Dólares
                printf("Ingrese la cantidad en Quetzales: ");
                scanf("%f", &cantidad);
                resultado = cantidad * QUETZAL_A_DOLAR;
                printf("Equivale a %.2f Dólares.\n", resultado);
                break;
            case 2: // Quetzales a Euros
                printf("Ingrese la cantidad en Quetzales: ");
                scanf("%f", &cantidad);
                resultado = cantidad * QUETZAL_A_EURO;
                printf("Equivale a %.2f Euros.\n", resultado);
                break;
            case 3: // Dólares a Quetzales
                printf("Ingrese la cantidad en Dólares: ");
                scanf("%f", &cantidad);
                resultado = cantidad * DOLAR_A_QUETZAL;
                printf("Equivale a %.2f Quetzales.\n", resultado);
                break;
            case 4: // Dólares a Euros
                printf("Ingrese la cantidad en Dólares: ");
                scanf("%f", &cantidad);
                resultado = cantidad * DOLAR_A_EURO;
                printf("Equivale a %.2f Euros.\n", resultado);
                break;
            case 5: // Euros a Quetzales
                printf("Ingrese la cantidad en Euros: ");
                scanf("%f", &cantidad);
                resultado = cantidad * EURO_A_QUETZAL;
                printf("Equivale a %.2f Quetzales.\n", resultado);
                break;
            case 6: // Euros a Dólares
                printf("Ingrese la cantidad en Euros: ");
                scanf("%f", &cantidad);
                resultado = cantidad * EURO_A_DOLAR;
                printf("Equivale a %.2f Dólares.\n", resultado);
                break;
            case 7: // Salir
                printf("Gracias por usar el conversor de monedas. ¡Adiós!\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 7);

    return 0;
}
