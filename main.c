#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio, fin;
    double tiempoTranscurrido;

    printf("Presiona Enter para iniciar el cronometro...");
    getchar(); // Espera a que el usuario presione Enter

    // Registra el tiempo de inicio
    inicio = clock();

    printf("Cronometro en marcha. Presiona Enter para detenerlo...");
    getchar(); // Espera a que el usuario presione Enter nuevamente

    // Registra el tiempo de finalización
    fin = clock();

    // Calcula el tiempo transcurrido en milisegundos
    tiempoTranscurrido = (double)(fin - inicio) / CLOCKS_PER_SEC * 1000.0;

    // Calcula horas, minutos, segundos y milisegundos
    int horas = (int)(tiempoTranscurrido / 3600000);
    int minutos = (int)((tiempoTranscurrido - horas * 3600000) / 60000);
    int segundos = (int)((tiempoTranscurrido - horas * 3600000 - minutos * 60000) / 1000);
    int milisegundos = (int)(tiempoTranscurrido - horas * 3600000 - minutos * 60000 - segundos * 1000);

    printf("Tiempo transcurrido: %02d:%02d:%02d.%03d\n", horas, minutos, segundos, milisegundos);
    printf(" HH :mm :s .ms");

    return 0;
}
