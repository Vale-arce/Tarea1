#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *archivo;
    char linea[MAX_LINE_LENGTH];

    // Abrir el archivo CSV en modo lectura
    archivo = fopen("ventas.csv", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    // Leer el archivo línea por línea y mostrar cada línea
    while (fgets(linea, MAX_LINE_LENGTH, archivo) != NULL) {
        printf("%s", linea);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
