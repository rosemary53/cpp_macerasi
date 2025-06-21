#include <iostream>

void updateValue(int a) {
    std::cout << "Inside updateValue before change: a = " << a << '\n';
    a = 10;
    std::cout << "Inside updateValue after change: a = " << a << '\n';
}

int main() {
    int x = 5;
    std::cout << "In main before updateValue call: x = " << x << '\n';
    updateValue(x);
    std::cout << "In main after updateValue call: x = " << x << '\n';
    return 0;
}

/* 
Fonksiyon Çağrıları ve Çalışma Sıraları

İşletim sistemi programı başlatır ve main fonksiyonundan yürütme başlar.

Kodlar yukarıdan aşağı doğru okunur ve yürütülür.

main fonksiyonu içerisinde yerel değişken x tanımlanır ve 5 değeri ile başlatılır(initialize).

Ekrana "In main before update call: x = 5" yazdırılır.

updateValue fonksiyonu çağrılır, main fonksiyonu burada duraklar.

updateValue fonksiyonunda parametre a yerel değişken olarak oluşturulur ve x değerini alır (argüman olarak geçer).

Ekrana "Inside updateValue before change: a = 5" yazdırılır.

a değişkeninin değeri 10 olarak güncellenir.

Ekrana "Inside updateValue after change: a = 10" yazdırılır.

updateValue fonksiyonu sonlanır ve kontrol main fonksiyonuna geri döner.

main fonksiyonu kaldığı yerden devam eder ve ekrana "In main after update call: x = 5" yazdırılır.

Çünkü a fonksiyonun kendi yerel değişkenidir ve değişiklik main’deki x'i etkilemez.

Yerel değişkenler kendi tanımlandıkları kod bloğunda geçerlidir.

Değişkenlerin yok edilme sırası:

main fonksiyonundaki x oluşturulur ve stacke eklenir.

updateValue fonksiyonundaki a oluşturulur ve stacke eklenir.

Fonksiyon bitince a yok edilir (LIFO mantığı).

Program sonunda x yok edilir.
*/
