#include <iostream>

void yazdir() {
    static int x = 0;                 //static değişken
    ++x;                              // önce x bir artır 
    std::cout << x << "\n";           // guncellenmiş halini ekrana yazdır
}
void yazdir2() {
    int x = 0;                        //yerel değişken
    ++x;                              // önce x bir artır 
    std::cout << x << "\n";           // guncellenmiş halini ekrana yazdır
}
int main()
{
    std::cout << "Static degisken ile yapilan islem sonucu\n";

    yazdir();
    yazdir();
    yazdir();

    std::cout << "Yerel degisken ile yapilan islem sonucu\n";

    yazdir2();
    yazdir2();
    yazdir2();
    return 0;
}

/*
* STATİCK DEĞİŞKENLER
* Statick değişkenler bellekte 1 defa oluşur.
* Her defasında fonksiyon çağrıldığından yeniden oluşmazlar hakiyle x değeri de sıfırlanmaz kaldığı yerden devam eder.
* Burada öncelikle x değişkeni bellekte 1 defalığına mahsus oluşur.
* ++x ile önce değeri bir artırılır.
* std :: cout<< ile ekrana güncellenmiş hali yazılır 1
* ardından 2 defa çağrıda daha bu işlem tekrarlanır ve sırasıyla alt alta
* 1
* 2
* 3 yazar.
* YEREL DEĞİŞKENLER
* yazdir2() fonksiyonu her çağrıldığında yeniden x değişkeni oluşacak ve başlangıçta int x = 0 değeri olduğu için sıfırlanacaktır.
* ardından ++x ile ekrana 1 yazacaktır.
* Fonksiyon sonlandığında ise stackten silinecektir.
* Yani yerel değişkenler her defasında fonksiyon çağrığımda tekrar oluşurlar.
ÇIKTI: 
  1
  1
  1
*/
