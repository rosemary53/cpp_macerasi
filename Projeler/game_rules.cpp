#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game_rules.h"

/*
* Bu fonksiyonda bilgisayar taraf�ndan �retilen say� ile kullan�c�n tahmin etti�i say�n�n fark�n� geriye d�nderiyorum.
* Buradaki ama� aradaki fark 0 a yakla�t�kca gercek say�ya yaklast�g�m�z� kullan�c�ya bildirmek ve tahminlerini ona g�re �ekillendirmek
* geriye d�n�� de�erinini de durumKodunda tutuyoruz �a��ran fonksiyon i�inde durumKodu 0 ise say�y� do�ru tahmin etmi�iz falan diyece�iz.
*/
int durumBul(int tahminSayisi,int gercekSayi) { 
	return gercekSayi - tahminSayisi;
}
