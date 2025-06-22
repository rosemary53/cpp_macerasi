#include <iostream>
/*
* Bu kod rosemary tarafından 22.06.2025 tarihinde yazılmıştır.
* Ben bu kodda her zamankinden farklı olarak binler basamağından birler basamağına doğru gitmeye çalıştım.
* Örnek: 1234,435
* Binler basamağı olan 1 i nasıl elde ederim 
* 1234/1000 = 1 burada 1000 e boldun
* 435/100 = 4 burada 100 e boldun neye boleceğimizi her zaman nasıl bilebiliriz ?
* Aslında bakarsanız 1 sayısını verilen sayının basamak sayısının 1 eksiği kadar 10 ile çarparsanız böleni bulmuş olursunuz.
* 1234 = 4 basamaklı 4-1= 3 defa 1 i 10 ile carp 1000
* 435 = 3 basamaklı 3-1= 2 defa 1 i 10 ile çarp 100
* Peki 1234 de 234 e nasıl gitcem 
     1234-1.1000 = 234
     435-4.100  = 35

    !! 234/1000 e bolunurse 0 diye dusunebilirsiniz ama biz 2 elde etmek istiyoruz o halde her dongude boleni 1000/10 işlemi yapcaz
     234/100= 2   234-2.100= 34  100/10=10  34/10= 3 34-3.10=4
     35 için 100/10 = 10 35/10=3 35-3.10=5   
* 
* 
*/

int basamakSayisiBul(int sayi) {

    int basamakSayisi{};
    int geciciSayi = sayi;

    while (geciciSayi != 0) {

        basamakSayisi++;
        geciciSayi /= 10;
    }
    return sayi == 0 ? 1: basamakSayisi;  //0 döngüye girmeyeceği için böyle yaptim
}
void basamakYazdir(int sayi) {
    
    int yeniSayi{1};
    int i{};
    int basamakSayisi{ basamakSayisiBul(sayi)};
    int toplam{};

    while ( i < (basamakSayisi-1) ){

        yeniSayi *= 10;
        i++;
    }
    while (sayi != 0) {

        int simdikiBasamak = sayi / yeniSayi;
        std::cout << simdikiBasamak << "+";
        toplam += simdikiBasamak;
        sayi = sayi - (yeniSayi*simdikiBasamak);
        yeniSayi /= 10;
    }
    std::cout << "\b" << " = " << toplam;   //burada 2+3+4+7+ çıkıyordu sondaki + işaretini silmek için \b kullandım 

}
int main(){
    int sayi{};
    std::cout << "Hangi sayiyi basamak basamak yazdirmak istersiniz : ";
    std::cin >> sayi;
    std::cout << "Girilen sayinin basamak gösterimi : ";
    basamakYazdir(sayi);
    return 0;
}

