#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y;

    /*
       --- Контрольные примеры ---
       x = -3, y = -3  -> попадает
       x =  2, y = -2  -> не попадает
       x = -1, y = -1  -> не попадает
       x =  0, y = -1.732 -> попадает
    */

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

    if (x <= 0 && y <= 0 && (x * x + y * y >= 3)) {
        printf("Точка (%.2f, %.2f) ПОПАДАЕТ в заштрихованную область.\n", x, y);
    }
    else {
        printf("Точка (%.2f, %.2f) НЕ ПОПАДАЕТ в заштрихованную область.\n", x, y);
    }

    return 0;
}

