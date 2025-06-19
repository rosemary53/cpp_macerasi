#include <iostream>
/*
* Armstrong Sayi  --> 12345 = 1^5+2^5+3^5+4^5+5^5 =? 12345 bunu kontrol ediyoruz
 
 1)Öncelikle verilen sayının basamak sayısını bul 12345 =  5 basamaklı 
 2)Ardından sayının basamakları sırasıyla bul
 3)Bulunan basamakları basamak sayısı kadar çarp ve bir değişkene ekle 1 i 5 defa kendisi ile carp 1*1*1*1*1 burada dongu kurcaz 
 4)En sonunda elde edilen toplamı sayının kendisine eşit mi değil mi diye kontrol et geriye true false dondur.

*/

int basamakSayisiBul(int sayi) { //Öncelikle kullanıcı tarafından girilen sayının basamak sayısını bulalım geriye sayı dondureceğimiz için fonksiyon tipi int olacak

	int basamakSayisi{};

	if (sayi == 0)
		return 1;

	while (sayi != 0) {
		basamakSayisi++;
		sayi = sayi / 10;
	}
	return basamakSayisi;
}

bool armstrongMu(int sayi) {                   //Basamak sayısı bilgisini kullanarak sayının armstrong mu değil mi onu kontrol etcem sonuca göre geriye true false dondureceğim

	int toplam{}, basamak{},carpim = 1;
	int geciciSayi = sayi;                     //En sonda sayi ve elde edilen sayinin değeri birbirine eşit mi kontrol için gerçek sayi bilgisini kaybetmemem gerekiyor
	int basamakSayisi = basamakSayisiBul(sayi);

	while (geciciSayi != 0) {

		basamak = geciciSayi % 10;
		geciciSayi = geciciSayi / 10;

		for (int i = 0; i < basamakSayisi; i++) {
			carpim = carpim * basamak;
		}
		toplam = toplam + carpim;
		carpim = 1;                            // her basamak için tekrardan önceki haline getirmemiz gerekiyor
	}
	
	return sayi == toplam ;                    // karşılaştırma yapıyorlar eşitse true dondürür değilse false 
}
int main() {

	int sayi;
	std::cout << "Lutfen bir sayi giriniz :";
	std::cin >> sayi;
	std::cout << sayi << " sayisinin basamak sayisi :" << basamakSayisiBul(sayi) << "\n";
	
	if (armstrongMu(sayi)) {
		std::cout << sayi << " sayisi bir armstrong sayidir.";
	}
	else {
		std::cout << sayi << " sayisi bir armstrong sayi degildir.";

	}
	return 0;
}
