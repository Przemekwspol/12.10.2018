
#include "stdio.h"

int main() {
    int Alfa = 5;
    float Beta = 12.45;
    printf("Wynik: \n Alfa = %d,\t Beta = %f\n",
           Alfa, Beta + 500);
// Wynik:
// Alfa = 5, Beta = 512.450000
    char opcja = 'X';
    char *Napis = "Opis programu.";
    printf("Wybrano opcję %c : %31s", opcja, Napis);
// Wybrano opcję X : Opis programu.


    return 0;
}
