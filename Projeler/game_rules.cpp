#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game_rules.h"

/*
* Bu fonksiyonda bilgisayar tarafýndan üretilen sayý ile kullanýcýn tahmin ettiði sayýnýn farkýný geriye dönderiyorum.
* Buradaki amaç aradaki fark 0 a yaklaþtýkca gercek sayýya yaklastýgýmýzý kullanýcýya bildirmek ve tahminlerini ona göre þekillendirmek
* geriye dönüþ deðerinini de durumKodunda tutuyoruz çaðýran fonksiyon içinde durumKodu 0 ise sayýyý doðru tahmin etmiþiz falan diyeceðiz.
*/
int durumBul(int tahminSayisi,int gercekSayi) { 
	return gercekSayi - tahminSayisi;
}
