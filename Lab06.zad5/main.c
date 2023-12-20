#include <stdio.h>
#include <math.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int choice;
    double num1, num2, result;

    printf("Kalkulator prostych dzialan arytmetycznych\n");
    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");

    printf("Wybierz opcje (1-4): ");
    scanf("%d", &choice);

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &num1);

    printf("Podaj druga liczbe: ");
    scanf("%lf", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Wynik dodawania: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Wynik odejmowania: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Wynik mnozenia: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Wynik dzielenia: %.2lf\n", result);
            } else {
                printf("Nie mozna dzielic przez zero.\n");
            }
            break;
        default:
            printf("Nieprawidlowy wybor opcji.\n");
    }

    return 0;
}
