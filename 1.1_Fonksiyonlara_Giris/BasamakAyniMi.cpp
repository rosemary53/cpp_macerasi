/*
    Basamakları Aynı Olan Sayılar

    Bu program, 1'den N'e kadar olan sayılar içinde tüm basamakları aynı olanları ekrana yazdırır.
    İki fonksiyon kullanılmıştır:
    - basamaklarAyniMi: Sayının tüm basamaklarının aynı olup olmadığını kontrol eder ve geriye true/false döndürür.
    - ekranaYazdir: 1'den N'e kadar olan sayıları kontrol ederek uygun olanları ekrana yazdırır.

    Kod: rosemary tarafından yazılmıştır.
    Tarih: 21.06.2025

    KOD AÇIKLAMASI:
    Diyelim ki elimizde 444 sayısı olsun. Biz burada basamakların aynı olup olmadığını kontrol edeceğiz.
    Öncelikle elimizde karşılaştırma yapacağımız bir basamak değeri olmalı. Bunu da 444 % 10 ile yaparak son basamağı buluyoruz (=4).
    Daha sonra bu değeri, diğer basamaklarla karşılaştırmak için while döngüsüne giriyoruz.
    Her seferinde sayıyı 10’a bölerek bir basamağını siliyoruz ve kalan basamağı kontrol ediyoruz.
    Eğer herhangi bir basamak son basamaktan farklıysa, direkt false döndürüyoruz.
    Döngü başarıyla tamamlanırsa (yani tüm basamaklar aynıysa), fonksiyon true döndürüyor.
*/

#include <iostream>

bool basamaklarAyniMi(int sayi) {
    int sonBasamak{ sayi % 10 };        
    int basamak{};

    if (sayi == 0)
        return true;

    while (sayi > 0) {
        basamak = sayi % 10;
        sayi = sayi / 10;

        if (basamak != sonBasamak) {
            return false;
        }
    }

    return true;
}

void ekranaYazdir(int N) {
    for (int i = 0; i < N; i++) {
        if (basamaklarAyniMi(i)) {
            std::cout << i << "\n";
        }
    }
}

int main() {
    std::cout << "Basamaklari ayni olan sayilari ekrana yazdiriniz ^^" << "\n";
    ekranaYazdir(100);
    return 0;
}
