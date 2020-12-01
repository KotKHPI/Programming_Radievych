#include <stdlib.h>
#include <time.h>
#define N 3 // розмір матриці в N*N
int matrixEl(int matrixA[N][N]);
int main() {
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
int matrixEl(int matrixA[N][N]) {
    for (int i = 0; i < N; i++) { // перебір ряду матриці
        int temp = matrixA[i][0]; // зберігаємо перші елементи першого столбця матриці, бо при запуску циклів вони будуть втрачені
            for (int b = 0; b < N; b++) { // перебір стовбця матриці
                matrixA [i][b] = matrixA [i][b+1]; // кожному елементу матриці присвоюємо значення наступного елемента матриці
            }
        matrixA[i][N-1] = temp; // переміщаємо перші елементи першого стовбця матриці на останній стовбець матриці
    }
    return matrixA;
}
