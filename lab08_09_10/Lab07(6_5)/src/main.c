#include <stdlib.h>
#include <time.h>
/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функцію, яка яка виконує циклічне зрушення елементів рядка масиву в напрямку справа наліво. 
 *
 *
 * @author Radievych V.
 * @date 04-dec-2020
 * @version 1.0
 */
#define N 3 // Розмір матриці в N*N

/**
 * @param matrixA - масив
 * @param N - розмір масива
*/

void matrixEl(int matrixA[N][N]);

int main() { /**Функція main: формує масив с заданої кількості елементів з випадковими значенями від 0 до 10. Викликає функцію matrixEl*/
    
    srand(time(NULL));
    
    int matrixA [N][N];
    for (int i = 0; i < N; i++) { // цикл заповнення масиву матриці
            for (int j = 0; j < N; j++) {
                matrixA[i][j] = rand() % 10; // заповнення масиву псевдовипадковими числами від 0 до 10
            }
        }
    matrixEl(matrixA);
    
    return 0;
}
void matrixEl(int matrixA[N][N]) { /*Функція matrixEl: виконує цинлічне зрушення елементів рядка масиву в напрямку справа наліво*/
    
    for (int i = 0; i < N; i++) { // перебір ряду матриці
        int temp = matrixA[i][0]; // зберігаємо перші елементи першого столбця матриці, бо при запуску циклів вони будуть втрачені
            for (int b = 0; b < N; b++) { // перебір стовбця матриці
                matrixA [i][b] = matrixA [i][b+1]; // кожному елементу матриці присвоюємо значення наступного елемента матриці
            }
        matrixA[i][N-1] = temp; // переміщаємо перші елементи першого стовбця матриці на останній стовбець матриці
    }
}