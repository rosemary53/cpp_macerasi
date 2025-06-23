#include <iostream>
#include <cstdlib>  
#include <ctime>
#include "OyunSorulari.h"

int main() {

    int secim{};
    std::cout << "--->Merhaba Kim Hesap Makinesi Olmak Ister Oyununa Hosgeldiniz" << "\n";
    std::cout << "--->Bu oyunda size 5 adet soru sorulacaktir." << "\n";
    std::cout << "---?Hazirsaniz baslayalim mi ? (evet icin 1 e hayir icin sifira basin ve enter tuslayiniz)" << "\n";
    std::cin >> secim;

    if (secim) {
        soruListesi();
    }

    return 0;
}
