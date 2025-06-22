#include <iostream>
/*
    Merhaba! Bu kod 22.06.2025 tarihinde rosemary tarafından yazılmıştır.

    Amaç: 1'den N'ye kadar olan sayılar arasında tüm basamakları aynı olan sayıları ekrana yazdırmak.

    Fikrim:
    Aynı basamaktan oluşan sayılar genellikle, basamak sayısı kadar 1'den oluşan bir sayının,
    basamak değeriyle çarpımı şeklinde ifade edilebilir.

    Örneğin:
    66   = 6 * 11
    111  = 1 * 111
    4444 = 4 * 1111

    Gözlemlerime göre:
    - Sayının basamak sayısını bulup o kadar "1"den oluşan bir sayı elde ediyorum. (örn: 111, 1111)
    - Ardından sayının son basamağı ile bu sayıyı çarpıp tekrar sayının kendisine eşit mi diye kontrol ediyorum.
    - Eğer eşitse, tüm basamaklar aynıdır.

    Not: 1 basamaklı sayılar (rakamlar) bu kurala zaten uyar. Bu nedenle onları doğrudan true kabul edebiliriz.
*/

int basamakSayisiBul(int sayi) {

    int basamakSayisi{ 0 };
    while (sayi != 0) {
        basamakSayisi++;
        sayi /= 10;
    }
    return basamakSayisi;
}

bool basamakAyniMi(int sayi) {

    int basamakSayisi{ basamakSayisiBul(sayi) };
    int basamakDegeri{ sayi % 10 };
    int carpanSayi{}; // Repunit sayı üretilecek: 1, 11, 111, ...

    if (sayi == 0 || basamakSayisi == 1)
        return true;

    while (basamakSayisi > 0) {
        carpanSayi = carpanSayi * 10 + 1;
        basamakSayisi--;
    }

    return (sayi % carpanSayi == 0);
}

void ekranaYazdir(int N) {
    for (int i = 0; i <= N; i++) {
        if (basamakAyniMi(i)) {
            std::cout << i << "\n";
        }
    }
}

int main() {
    std::cout << "Basamaklari ayni olan sayilar:\n";
    ekranaYazdir(10000);
    return 0;
}
