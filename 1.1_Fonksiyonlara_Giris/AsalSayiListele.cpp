#include <iostream>

//Kullanıcıdan bir sayı (N) al, ardından 1’den N’ye kadar olan tüm asal sayıları ekrana yazdır.

bool asalMi(int sayi) {                 //Öncelikle listeleyeceğimiz sayının asal olup olmadığını kontrol etmemiz gerek 

	if (sayi < 2)
		return false;

	if (sayi == 2)
		return true;

	for (int i = 2; i*i<= sayi; i++) {
		if (sayi % i == 0) {
			return false;
		}
	}
	return true;

}
void asalSayiListele(int sayi) {

	for (int i = 1; i <= sayi; i++) {    //Burada 1 den başlayarak kullanıcının girdiği sayıya kadar olan sayıları tek tek asal mi değil mi diye kontrol edeceğim.

		if (asalMi(i)) {                 //Herbir sayının asal olup olmadığına bakacağım.
			std::cout << i <<" ";
		}
	}
}
int main(){ 

	int sayi;
	std::cout << "Hangi sayiya kadar olan asal sayilari yazdirmak istersiniz?  ";
	std::cin >> sayi;
    
	std::cout << "1'den " << sayi << "'a kadar olan tum asal sayilar :";
	asalSayiListele(sayi);

	return 0;
}



