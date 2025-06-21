/*
FONKSİYONLARDA OVERLOADING(FONKSIYON AŞIRI YUKLEMESİ)
C++,java vb. dillerde aynı tipte aynı isime sahip fonksiyon tanımlanabilir ancak burada dikkat edilmesi gerekn nokta parametre sayılarının veya tiplerinin farklı olması gerektiğidir.
int topla(int x,int y){
return x+y;
}
int topla(int x,int y,int z){
return x+y+z;
}
*/
#include <iostream>
int topla(int a, int b) {
	return a + b;
}
//Function Overloading
int topla(int a, int b, int c) {
	return a + b;
}
int main() {
	std :: cout << topla(2, 3) << "\n";
	std :: cout << topla(4, 5, 7);
	return 0;
}
