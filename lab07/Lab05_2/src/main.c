#include <stdlib.h>
#include <time.h>

int prime_number (int a); // прототип функції

int main() {
    srand(time(NULL));
    
    int b = 16; // границя для псевдовипадкових чисел, b > 0, за означенням
    int a = rand()% b; // випадкове число ділемо з остачою на задане число, тим самим задаючи діапазон випадкого числа від 0 до b
    
 int result = prime_number(a); // задання будь якого числа в функцію для перевірки числа (чи є воно простим)
   
return 0; // Якщо в кінці ми отримуємо result = 0, то число N просте, якщо result = -1 - число N не просте
}
int prime_number (int a) {
    int check = 0;
    if (a > 0) { // від 0, бо 1 та 2 теж є простими числами
        for(int i = 2, b = 0; i < a; i++) { //запуск циклу
        b = a % i; //запускаємо перевірна на просто число
        if (b == 0) { //Якщо при діленні в циклі, хоча б одне число ділиться націло - то воно не просте
          check = -1;
 }
}
           } else {
        check = -1; //число яке меньше 0, не може бути простим
}
    return check;
}
