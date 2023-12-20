#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    fflush(stdout);
    fflush(stdin);
    int n;

    const char* numbers_below_20[] = {"", "jeden", "dwa", "trzy", "cztery", "pięć", "sześć", "siedem", "osiem", "dziewięć",
                                      "dziesięć", "jedenaście", "dwanaście", "trzynaście", "czternaście", "piętnaście", "szesnaście",
                                      "siedemnaście", "osiemnaście", "dziewiętnaście"};
    const char* tens[] = {"", "", "dwadzieścia", "trzydzieści", "czterdzieści", "pięćdziesiąt", "sześćdziesiąt", "siedemdziesiąt",
                          "osiemdziesiąt", "dziewięćdziesiąt"};
    const char* ones[] = {"", " jeden", " dwa", " trzy", " cztery", " pięć", " sześć", " siedem", " osiem", " dziewięć"};

    do {
        printf("Podaj n[10..99]: ");
        scanf("%d", &n);
    } while (n < 10 || n > 99);

    printf("\nWprowadzona liczba to: %d\n", n);
    printf("\n\nNaciśnij Enter, aby zakończyć...");
    getchar();
    return 0;
}


