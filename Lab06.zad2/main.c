#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int64_t seconds;

    do {
        printf("Podaj liczbę sekund (100-1500000): ");
        if (scanf("%lld", &seconds) != 1 || seconds < 100 || seconds > 1500000) {
            printf("Nieprawidłowa wartość. Podaj liczbę z zakresu 100-1500000.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);

    int64_t hours, minutes, remaining_seconds;
    hours = seconds / 3600;
    remaining_seconds = seconds % 3600;
    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    printf("%04lld:%02lld:%02lld\n", hours, minutes, remaining_seconds);

    return 0;
}
