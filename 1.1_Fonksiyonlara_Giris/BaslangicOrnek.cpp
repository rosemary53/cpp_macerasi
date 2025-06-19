#include <iostream>
int sayiAl() {

	int sayi;
	std::cout << "Lutfen bir sayi giriniz :";
	std::cin >> sayi;

	return sayi; //eğer buraya return ile bir şey eklemezsek geriye hiçbir şey donmez bu da tanımsız davranışa sebep olabilir
}

int main()
{
	int kullaniciGirisi{ sayiAl() };
	std::cout << "Kullanici tarafindan girilen sayi : " << kullaniciGirisi;
	return 0;
}
/*Dikkat!!!
* Geriye değer donduren int,bool vb. tipe sahip fonksiyonlarda mutlaka tipe uygun olacak şekilde değer döndürmeniz gerekir.
* return ifadesi ile değer döndürmediğiniz takdirde tanımsız davranışa yol açarsınız.
* 
* Main fonksiyonunda ise bir istisna vardır. return 0 eklemediğiniz takdirde bile derleyici onu otomatikmen return 0 olarak algılayacaktır.
  Ancak yine de her zaman main fonksiyonuna return 0 eklemenizi tavsiye ederim.

  Fonksiyonlar geriye yalnızca tek bir değer döndürebilir
  Döndürülen değerler literal(sabit),değişken,aritmetik işlem sonucu vb olabilir.
  return 5;       //literal
  return "Selam"; //literal
  return 4*8;     //aritmetik işlem 
  return x;       //değişken

*/
