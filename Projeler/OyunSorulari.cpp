#include <iostream>
#include <cstdlib>  
#include <ctime>
#include "OyunSorulari.h"

int kullaniciCevabi() {
    int cevap{};
    std::cout << "Lutfen sorunun cevabini veriniz : ";
    std::cin >> cevap;
    return cevap;
}
int basamakSayisiBul(int sayi) {
    int basamakSayisi{};
    int geciciSayi{ sayi };

    while (geciciSayi != 0) {
        basamakSayisi++;
        geciciSayi /= 10;
    }
    return sayi == 0 ? 1 : basamakSayisi;
}
int sondanKacinciDeger(int sayi, int sira) { //Bu fonksiyon sondan n.elemanın ne oldugunu soyler 

    int sayac{};
    int basamak{};

    while (sayac < sira) {
        basamak = sayi % 10;
        sayi /= 10;
        sayac++;
    }
    return basamak;
}
int bastanKacinciDeger(int sayi, int sira) {

    int sayac{};
    int basamak{};
    int basamakSayisi{ basamakSayisiBul(sayi) };

    while (sayac < basamakSayisi - sira + 1) {
        basamak = sayi % 10;
        sayi /= 10;
        sayac++;
    }
    return basamak;
}
int mukemmelSayiMi(int sayi) {
    int carpanToplam{};

    for (int i = 1; i < sayi; i++) {
        if (sayi % i == 0) {
            carpanToplam += i;
        }
    }
    return carpanToplam == sayi;
}
int kesirliKisim(int sayi, int bolen) {
    return sayi % bolen;
}
int sayininKupu(int sayi, int sira) {
    int num{ bastanKacinciDeger(sayi,sira) };
    return num * num * num;
}
int skor{};
void skorArtir() {

    skor = skor + 1;
}
int skorDondur() {

    return skor;
}
void ekranMesaji(int dogruCevap, int kullaniciCevap) {

    if (kullaniciCevap == dogruCevap) {
        std::cout << "Tebrikler dogru cevap verdiniz" << "\n\n";
        skorArtir();
    }
    else {
        std::cout << "Maalesef yanlis cevap verdiniz dogru cevap " << dogruCevap << " olacakti." << "\n\n";
    }

}

void soruListesi() {

    srand(time(0));
    int soruSirasi{}; // guvenli baslangic
    int dogruCevap{};
    int kullaniciCevap{};

    while (soruSirasi < 5) {

        int rastgeleSayi = rand() % (100000 - 50000) + 50000; // 50000 – 100000 arası
        int siraNo = 3;
        int bolen = rand() % (1000 - 500) + 500;

        switch (soruSirasi) {

        case 0:
            std::cout << "1)Soru ---> " << rastgeleSayi
                << " sayisinin sondan "
                << siraNo << " .elemani nedir?" << "\n";

            dogruCevap = sondanKacinciDeger(rastgeleSayi, siraNo);
            kullaniciCevap = kullaniciCevabi();

            ekranMesaji(dogruCevap, kullaniciCevap);

            break;

        case 1:

            std::cout << "2)Soru ---> " << rastgeleSayi
                << " sayisinin bastan "
                << siraNo << " .elemani nedir?" << "\n";

            dogruCevap = bastanKacinciDeger(rastgeleSayi, siraNo);
            kullaniciCevap = kullaniciCevabi();

            ekranMesaji(dogruCevap, kullaniciCevap);

            break;

        case 2:
            rastgeleSayi = rand() % (100 - 50) + 50;
            std::cout << "3)Soru ---> " << rastgeleSayi
                << " mukemmel sayi midir? (evet ise 1 e hayir ise 0 a basiniz " << "\n";

            dogruCevap = mukemmelSayiMi(rastgeleSayi);
            kullaniciCevap = kullaniciCevabi();

            ekranMesaji(dogruCevap, kullaniciCevap);

            break;

        case 3:
            rastgeleSayi = rand() % (10000 - 50000) + 50000; // 500–1000 arası
            std::cout << "4)Soru ---> " << rastgeleSayi
                << " sayisinin " << bolen << " ile bolumunden kalan  " << "\n";

            dogruCevap = kesirliKisim(rastgeleSayi, bolen);
            kullaniciCevap = kullaniciCevabi();

            ekranMesaji(dogruCevap, kullaniciCevap);


            break;

        case 4:

            std::cout << "5)Soru ---> " << rastgeleSayi
                << " sayisinin bastan "
                << siraNo << " .elemanin kupu nedir? " << "\n";

            dogruCevap = sayininKupu(rastgeleSayi, siraNo);
            kullaniciCevap = kullaniciCevabi();

            ekranMesaji(dogruCevap, kullaniciCevap);

            break;
        default:
            break;
        }
        soruSirasi++; //her sorudan sonra soruSirasini 1 artirmaliyiz ki diger sorulara gecebilelim.
        if (soruSirasi == 5) {
            std::cout << "Oyuncu skoru : " << skorDondur() << "\n\n";
            std::cout << "Oyuna tekrardan baslamak ister misiniz ? (evet : 1 hayir :0 tuslayiniz)\n";
            if (kullaniciCevabi()) {
                soruSirasi = 0;
                skor = 0; // oyun yeniden basladigi icin
            }
            else {
                std::cout << "Oyun sonlandiriliyor...\n";
            }
        }
    }

}