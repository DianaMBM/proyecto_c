#include <stdio.h>

int main() {
  // Declaración de variables
  float cantidad, tasa_quetzal_usd, tasa_quetzal_eur, resultado;
  int opcion;

  // Inicialización de tasas de cambio (aproximadas)
  tasa_quetzal_usd = 0.125;
  tasa_quetzal_eur = 0.10;

  // Menú de opciones
  printf("**¡Convertidor de monedas genial!**\n");
  printf("1. Quetzales a Dólares\n");
  printf("2. Quetzales a Euros\n");
  printf("3. Dólares a Quetzales\n");
  printf("4. Euros a Quetzales\n");
  printf("5. Salir\n");
  printf("Elige una opción: ");
  scanf("%d", &opcion);

  // Bucle para realizar conversiones
  while (opcion != 5) {
    switch (opcion) {
      case 1:
        printf("Ingrese la cantidad en Quetzales: ");
        scanf("%f", &cantidad);
        resultado = cantidad * tasa_quetzal_usd;
        printf("%.2f Quetzales equivalen a %.2f Dólares\n", cantidad, resultado);
        break;
      case 2:
        printf("Ingrese la cantidad en Quetzales: ");
        scanf("%f", &cantidad);
        resultado = cantidad * tasa_quetzal_eur;
        printf("%.2f Quetzales equivalen a %.2f Euros\n", cantidad, resultado);
        break;
      case 3:
        printf("Ingrese la cantidad en Dólares: ");
        scanf("%f", &cantidad);
        resultado = cantidad / tasa_quetzal_usd;
        printf("%.2f Dólares equivalen a %.2f Quetzales\n", cantidad, resultado);
        break;
      case 4:
        printf("Ingrese la cantidad en Euros: ");
        scanf("%f", &cantidad);
        resultado = cantidad / tasa_quetzal_eur;
        printf("%.2f Euros equivalen a %.2f Quetzales\n", cantidad, resultado);
        break;
      default:
        printf("Opción no válida. Intente de nuevo.\n");
    }
    // Mostrar el menú de nuevo
    printf("Elige una opción: ");
    scanf("%d", &opcion);
  }

  // Mensaje de despedida
  printf("¡Hasta pronto! \n");

  return 0;
}