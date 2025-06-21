#include <iostream>

int sayiAl() {              //Kullanıcıdan 3 defa sayı alacağım. Tekrarı önlemek için bu işlemi gerçekleştiren fonksiyon oluşturuyorum

    static int sayac = 1;   //Burada static değişken bellekte bir defa oluşur bundan dolayı her fonksiyon çağrıldığında kaldığı değerden devam eder.
    int sayi{};
    std::cout << sayac++ << ".ci sayiyi giriniz :";
    std::cin >> sayi;

    return sayi;
}

int enBuyukHesapla(int x, int y, int z) {

    int enBuyuk{ x };

    if (enBuyuk < y)
        enBuyuk = y;

    if (enBuyuk < z)
        enBuyuk = z;

    return enBuyuk;
}

int main()
{
    int x{ sayiAl() };
    int y{ sayiAl() };
    int z{ sayiAl() };

    std::cout << "Sayilar arasinda en buyuk olan deger : " << enBuyukHesapla(x, y, z);

    return 0;
}

