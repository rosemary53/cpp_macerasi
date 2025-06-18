#include <iostream>

bool asalMi(int sayi) {

    if (sayi < 2) {                      // Normalde asallık doğal sayılarda aranır ancak en küçük asal sayı 2 oldugu için direkt 2 den küçük sayılara false döndürdüm.
        return false;
    }

    if (sayi == 2) {                     // Gelen sayı 2 ise direkt asaldır deyip true döndürdüm.
        return true;
    }

    for (int i = 2; i < (sayi+1)/2; i++) {// Bölen kontrolüne 2 den başladım ve sayının yarısına kadar döngüyü sürdürdüm çünkü sayının yarısından sonra zaten kendisine bölünmez.
        if (sayi % i == 0) {              // Eğer 1 ve kendisinden başka bölenine rastlarsak if bloğuna girsin ve direkt geriye false döndürsün istedim
            return false;
        }
    }
    return true;                          //Eğer for döngüsü içerisinde bölene rastlanmadıysa döngüden çıkacak ve geriye true döndürecek yani asal oldugunu bildirecek
}

int main()
{
    int sayi{};                          //değişkeni güvenli bir şekilde başlatıyorum.
    std::cout << "Bir sayi giriniz:";
    std::cin >> sayi;

    if (asalMi(sayi)) {
        std::cout << "Sayi asaldir";
    }
    else
    {
        std::cout << "Sayi asal degildir.";
    }

    return 0;
}


