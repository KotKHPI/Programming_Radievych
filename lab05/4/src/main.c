#define N 6
int main() {
 int sum = 1; /* змінній присвоюємо значення 1, бо якщо два однакових числа поділити,
то в результаті ми отримаємо 1. Таким чином, ми використовуємо нерівнисть i < N, щоб позбутися дії циклу ділення
двох однакових чисел. Бо дільник буде дорівнювати N */
 int result = 0; // змінна для виділення результату

for (int i = 2; i < N; i++) {
	if (N % i ==0) {
	 sum += i; // знаходимо суму всіх дільників числа N
}
	 if (sum == N) {
	  result = 1; /* відображення результату: чи є число N досконалим? Якщо результат 1, то числа досконале,
якщо 0 - то число не досконале*/
}
}
	return 0;
}
