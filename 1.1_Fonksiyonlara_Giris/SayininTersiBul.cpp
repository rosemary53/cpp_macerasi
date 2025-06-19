#include <iostream>
/*
  Sayının Tersinin Yazdır
    123 olsun 321 şeklinde yazdırmam gerekiyor.
    123%10 = 3 gelir ekrana yazdırırım
    sonra sayıyı 10 a bölerim
    123/10 = 12 olur
    12%10 = 2 gelir ardından ekrana yazdırırım.
    12/10= 1 olur
    1%10 = 1 olur ekrana yazdırırım

    Ama yukarıda sadece yazdırmış oldum ama eğer yine bir int tipinde tersSayi degiskeninde tutsam nasıl yapacaktım ? tersSayi=321 olarak tutmam gerek
    -Öncelikle basamak uzunluğunu bulmamız gerekiyor. 123 'ün basamak sayısı 3 tür.
    -Sayının tersini düşünürsek 321 de 3 sayısı başa gelmiş ve 100 ile çarpılmış tersSayi = 300 olmuş
    -Ardından mod alma işleminden elde edilen 2 sayısı onlar basamağında yer almış ve 10 ile çarpılmış  tersSayi = 300 + 20 = 320 olmuş
    -Son olarak mod alma işleminden elde edilen basamak 1 o da 1 ile çarpılmış  tersSayi = 320+1 =321 olmuş
*/

int basamakSayisiBul(int sayi) {

    int basamakSayisi = 0;
    
    if (sayi == 0)                             // 0 sayısı aşağıdaki döngüye giremeyeceği için burada direkt olarak basamak sayısını geriye 1 olarak döndürdüm.
        return 1;

    while (sayi != 0) {          

        sayi = sayi / 10;
        basamakSayisi = basamakSayisi + 1;
    }  

    return basamakSayisi;
}
int tersSayiBul(int sayi) {

    int basamak{}, tersSayi{};                    //degiskenleri guvenli bir şekilde başlatıyorum
    int basamakSayisi = basamakSayisiBul(sayi);   //Burada basamakSayisiBul fonksiyonunu çağırıyorum kodun ilerleyen kısmında işime yarayacak
    int i = basamakSayisi;

    while (sayi != 0 ) {

        basamak = sayi % 10;    
        sayi = sayi / 10;

        while (i - 1 > 0) {                 //123 sayısında elde ettiğimiz ilk basamak 3 ve bunu basamakSayısı-1 kadar 10 ile carpcam 

            basamak = basamak * 10;
            i--;
        }
        basamakSayisi--;             
        i = basamakSayisi;
        tersSayi = tersSayi + basamak;
    }
    return tersSayi;
}
int main()
{
    int sayi{};

    std::cout << "Lutfen bir sayi giriniz : ";
    std::cin >> sayi;

    std::cout << "\n" << "Girdiginiz sayinin basamak sayisi : " 
        << basamakSayisiBul(sayi)
        << " ve tersi :" << tersSayiBul(sayi);

    return 0;

}
