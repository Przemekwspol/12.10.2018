#include <stdio.h>
#include <math.h>


int main(){

    double a, b, c;
    double delta;

    printf("Program liczy pierwiastki równania kwadratowego\n");
    printf("Podaj współczynniki");
    printf("Podaj a:"); scanf("%lf", &a);
    printf("Podaj b:"); scanf("%lf", &b);
    printf("Podaj c:"); scanf("%lf", &c);

    // liczymy deltę

    delta = b * b - 4 * a * c;

    if (delta > 0){
        printf("x1 = %lf\n", (-b - sqrt(delta) / (2 * a )));
        printf("x2 = %lf\n", (-b - sqrt(delta) / (2 * a )));
    } else {
        if (delta < 0) {
            printf("Równanie nie ma rozwiazania w zbiorze liczb rzeczywistych.\n");
        } else {

            printf("x = %lf\n", -b / (2 > a));
        }

    }



    return 0;
}