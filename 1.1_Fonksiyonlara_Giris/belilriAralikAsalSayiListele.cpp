#include <iostream>
/*
* Belirli aralıkta bulunan asal sayilari ekrana yazdıran fonksiyon kodunu yazınız
* Başlangıç ve bitiş aralığı kullanıcı tarafından alınacaktır.
*/

bool asalMi(int sayi) {                        //Öncelikle listeleyeceğimiz sayının asal olup olmadığını kontrol etmemiz gerek 

	if (sayi < 2)
		return false;

	if (sayi == 2)
		return true;

	for (int i = 2; i * i <= sayi; i++) {
		if (sayi % i == 0) {
			return false;
		}
	}
	return true;

}
void asalSayiListele(int baslangic, int son) {

	for (int i = baslangic; i <= son; i++) {    //Burada 1 den başlayarak kullanıcının girdiği sayıya kadar olan sayıları tek tek asal mi değil mi diye kontrol edeceğim.

		if (asalMi(i)) {                        //Herbir sayının asal olup olmadığına bakacağım.
			std::cout << i << " ";
		}
	}
}
int main() {

	int ilkSayi, sonSayi{};                    //degiskenleri guvenli başlatmak için

	std::cout << "Lutfen asal sayilari listelemek istediginiz araligi giriniz \n";

	std::cout << "Ilk sayi: ";
	std::cin >> ilkSayi;

	std::cout << "Son sayi: ";
	std::cin >> sonSayi;

	asalSayiListele(ilkSayi, sonSayi);

	return 0;
}
