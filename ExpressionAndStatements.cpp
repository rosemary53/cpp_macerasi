#include <iostream>
/*
* Expression(ifade) Nedir?
* -Değer hesaplayan,üreten bir dizi literal(sabit),değişken,operatör,fonksiyon çağrılarıdır diyebiliriz.
* 
* Özellikleri Nelerdir?
* -Değer üretirler
* -Noktalı virgül içermezler.
* -Program tarafından yürütülmezler,derlenemezler.
* 
* Örnek:
* - 2
* - x (degiskenlerde degerlere sahiptir x=2 gibi)
* - five() (fonksiyonlar da geriye deger dondururler
* - 2+3 => Burada + operatörü 2 tam sayıyı işleme alarak 5 degerini üretir
* 
* Statement Nedir?
* -Programın yürütülebilen eyleme geçirilebilen komutlarıdır.
* -Noktalı virgülleri vardır.Bundan dolayı derleyici tarafından dikkate alınıp yürütülürler.
* -Expressionlardan oluşurlar denilebilir.
* 
* Örnek:
* - int     x         = 5;
* (type  identifier    ifade ; => statement)
* - x = 10;
* - y = 2-3;
* - fonksiyon();
* 
* 
*/
int ciftMi(int sayi) {

	return (sayi % 2 == 0 ? 1 : 0);

}
int main() {

	//Burada int(type) x(identifier yani tanımlayıcı) 5 ise degerdir yani ifadedir(expression).
	// Kodun bütününe baktığımızda ise sonunda ; bulunur ve bu yürütülebilir bir komuttur bundan dolayı da statement deriz .
	int sayi = 5;

	//Burada ciftMi(sayi) fonksiyonunu kullanarak deger üretebiliyoruz 1 ya da 0 olarak bu da bir ifadedir ancak sonuna ; geldiği an expression statement olur.
	int sonuc = ciftMi(sayi);

	if (sonuc) {
		std::cout << sayi <<" "<< "sayisi çifttir.\n";
	}
	else {
		std::cout << sayi <<" "<< "sayisi tektir.\n";
	}
	return 0;
	
}


