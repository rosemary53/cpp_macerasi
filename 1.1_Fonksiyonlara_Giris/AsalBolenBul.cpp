/*
   Algoritma adımlarını şöyle düşündüm

   - Sayıyı alıyoruz 1 den başlayarak sayının kendisine kadar kendiside dahil sayıyı tam bölüyor mu bölmüyor mu kontrol ediyoruz
   4 diyelim sırayla 1,2,3,4.
   - Ardından sayıyı tam bölmeyenleri ele alıyoruz örneğin 6 sayısını kendisine kadar tam bölmeyenler 4,5 
   - Bu tam bölmeyenlerden 4,5 ten asal olanları  bulup ekrana yazdırıyorum.

   1)Kullanıcıdan sayı al
   2)Asal sayı kontrolü fonksiyonu oluştur
   3)Bölenleri bul 
   4)asal bölenleri bul
   5)ekran yazdır
*/
#include <iostream>

int asalMi(int sayi) {

	if (sayi < 2)
		return 0;

	if (sayi == 2)
		return 1;

	for (int i = 2; i * i <= sayi; i++) {

		if (sayi % i == 0)                    //1 tane bile 1 ve sayinin kendisinden başka böleni varsa asal değildir ve fonksiyon 0 geri dönüş değeriyle sonlanmalidir.
			return 0;
	}

	return 1;                               //1 ve kendisinden hariç başka bölen bulunmadıysa gelen sayi asaldir ve geriye donüş değeri 1 dir.
}

void asalBolenler(int sayi) {

	for (int i = 2; i <= sayi; i++) {

		if (sayi % i == 0 && asalMi(i) ) {    //Eger i sayiyi tam bölerse ve(&&) asalsa(bu kontrol asalMi fonksiyonu çağrılarak kontrol edilir) bu kod bloğuna girer.
		                                      // 1 AND 1 = 1 işlemi yapılır
			std::cout << i << " ";

		}
	}
}

int main(){

	int sayi{}; //degiskeni guvenli baslatamayi saglar.

	std::cout << "Bir sayi giriniz :";
	std::cin >> sayi;

	//Sayi 1 veya 1 den kucukse asal carpanlarla yazılamaz bunu da koda ekleyebilirsin

	std::cout << sayi << "'nin asal bolenleri : ";
	asalBolenler(sayi);

	return 0;
}

