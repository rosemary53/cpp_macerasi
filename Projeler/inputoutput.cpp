#include <iostream>
#include "inputoutput.h"
#include "game_rules.h"

int sayiTahminEt() {

	std::cout << "Tahmininizi giriniz : ";
	int tahminSayi{};
	std::cin >> tahminSayi;

	return tahminSayi;
}
int gercekSayiUret() {
	return rand() % 10+1;
}
void durumYazdir() {

	int gercekSayi{ gercekSayiUret() };
	int sayi{};
	int durumKodu{};
	int secim{};
	int denemeSayisi{};

	do
	{
        sayi = sayiTahminEt();
		durumKodu = durumBul(sayi,gercekSayi);

		if (durumKodu == 0) {

			denemeSayisi++;
			std::cout << "Tebrikler ^^ " << denemeSayisi << ".denemede buldunuz" << "\n";
			std::cout << "Tekrar oynamak ister misin? (evet:1, hayir:0): ";
			std::cin >> secim;

			if (secim) {
				gercekSayi = gercekSayiUret();
				denemeSayisi = 0;
			}
			else {
				break;
			}
		}
		else if (durumKodu == 1 || (-1 * durumKodu) == 1) {
			std::cout << "Cok yakindasin !\n";
			denemeSayisi++;
		}
		else if (durumKodu == 2 || (-1 * durumKodu) == 2) {
			std::cout << "yakindasin !\n";
			denemeSayisi++;
		}
		else if (durumKodu == 3 || (-1 * durumKodu) == 3) {
			std::cout << "uzaklastin sanki !\n";
			denemeSayisi++;
		}
		else if (durumKodu == 4 || (-1 * durumKodu) == 4) {
			std::cout << "uzaksin sanki !\n";
			denemeSayisi++;
		}
		else {
			std::cout << "baya uzaksin sanki !\n";
			denemeSayisi++;
		}

	} while (true); 

}