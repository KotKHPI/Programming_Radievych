#define X -0.4 // записуємо значення х
int main() {
	float y;
	if (X <= -1) {
	y = -1/X; //значення функції на проміжку х <= -1
}
	if (X > -1 && X <= 1) {
	y = X*X; // значення функції на проміжку від х > -1 до x <= 1
}
	if (X > 1){
	y = 1; //значення функції на проміжку х > 1
}
	return 0;
}
