#include <iostream>
/*
* Merhaba bu kod 22.06.2025 tarihinde rosemary tarafından yazılmıştır.
* Basamak artan sayıları yazınız 123,469,12 gibi
*/
bool basamakArtanMi(int sayi) { //123

    int geciciBasamak{ sayi % 10 };
    int basamak{};                      // dongu içinde elde edilen basamaklar tutulacaktır.

    for (sayi; sayi != 0; ) {
        sayi /= 10;
        basamak = sayi % 10;

        if (geciciBasamak <= basamak) {  // 123 te gecici basamak 3 tutar eger 3 kendinden önceki basamağa eşit ve küçükse direkt sonlandır
            return false;
        }
        else {
            geciciBasamak = basamak;     // 3> 2 oldugu için geciciBasamak=2 olcak ve 1 ile kontrole gidecek
        }
    }
    return true;
}
void ekranaYazdir(int N) {

    for (int i = 0; i <= N; i++) {
        if (basamakArtanMi(i)) {
            std::cout << (i + 1) << ". basamak artan sayi : " << i << "\n";
        }
    }
}
int main(){

    std::cout << "Merhaba hosgeldiniz.Ekrana basamak artan sayilar yazilacaktir.\n";
    ekranaYazdir(1000);

    return 0;
}
