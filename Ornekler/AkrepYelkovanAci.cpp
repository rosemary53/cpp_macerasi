#include <iostream>
//26.06.2025 tarihinde rosemary tarafından bu kod yazılmıştır.
//Akrep ile yelkovan arasındaki açının kaç derece olduğunu bulan kodu yazmaya çalıştım.Ayrıntılı algoritma aşamaları için readme.md ye bakabilirsiniz.

int saatDakikaAl() {

    int sayi{};
    std::cin >> sayi;
    return sayi;

}

int akrepDegeri(int saat) {

    return saat > 12 ? saat - 12 : saat; // 17 5 i nasıl gösterir 17-12 21-12= 9
}

int yelkovanDegeri(int dakika) { // 09.00 da mesela yelkovan 12 in üzerindedir görselleştirmek amacıyla bu bilgi

    if (dakika == 0) {
        return 12;
    }
    return dakika / 5;
}

float akrepIlerlemesi(int dakika) { 

    return float(5 * dakika) / 60.0;
}
float dereceHesapla(int saat,int dakika) {

    float derece{};
    
    derece = dakika * 6 - (akrepDegeri(saat)*30 + akrepIlerlemesi(dakika)*6);

    if (derece <= -180) {    //-195 ise 360+-195 = 85 tir ama -195 te doğru 
        derece = 360 + derece;
    }
    else if (derece < 0 && derece > -180) {
        derece = derece * -1;
    }
    else if (derece > 180) {
        derece = 360 - derece;
    }
    
    return derece; 
}

void dereceGoster(int saat,int dakika) {

    std ::cout 
        <<"\n"
        << "Akrep : " << akrepDegeri(saat)  << " un " 
        <<akrepIlerlemesi(dakika) 
        << " adim uzaginda bir konumda " << "\n"
        << "Yelkovan : " << yelkovanDegeri(dakika)
        << " uzerindedir." <<"\n" 
        << "Aralarindaki aci : " <<dereceHesapla(saat,dakika) << " derecedir.";
}
int main()
{
    std::cout << "Lutfen saat kismini giriniz : ";
    int saat{saatDakikaAl()};

    std::cout << "Lutfen dakika kismini giriniz : ";
    int dakika{ saatDakikaAl() };

    dereceGoster(saat,dakika);
    return 0;
}


