#define N 245
int main() {
	int n1 = N/100; // вираження першого числа
	int n2 = N%100/10;// вираження другого числа
	int n3 = N%100%10; // віраження третього числа
	int c; // порожня змінна
	int result = 0;

	c = n1;
	n1 = n3;
	n3 = c;

result = n1 * 100 + n2 * 10 + n3;
return 0;
}
