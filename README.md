<h1>Домашнее задание по теме 6. РЕАЛИЗАЦИЯ РАЗВЕТВЛЯЮЩИХСЯ АЛГОРИТМОВ</>

<h2>Задача - Составить программу, которая проверяет принадлежит ли заданная пользователем точка с
координатами (х, у) заданным закрашенным (заштрихованным) областям, показанным на рисунках
в табл., и выводит на экран сообщение.</h2>

<h2>Условия задачи</h2>
<p>Область:</p>
<img width="355" height="234" alt="image" src="https://github.com/user-attachments/assets/6f160e58-7afd-48e9-81c7-522a0f37d1ac" />

<h2>Блок-схема:</h2>
<img width="320" height="540" alt="diagram (8)" src="https://github.com/user-attachments/assets/6cf8c078-8ec3-453d-9c50-a5ac74619cc8" />

<h2>Код:</h2>

```c
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
```
