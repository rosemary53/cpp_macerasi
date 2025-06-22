#include <iostream>
#include "add.h" // add.h dosyasının içeriğini buraya eklemiş oluruz. Çift tırnak, yerel dosya anlamında.

int main()
{
    std::cout << add(3, 4) << "\n";
}

/*
 * 🌟 Başlık Dosyaları (Header Files) Hakkında Açıklama 🌟
 *
 * C++ derleyicisi, bir fonksiyonu tanımazsa (bildirim yapılmadıysa) hata verir.
 * Fonksiyonları kullanmadan önce derleyiciye tanıtmak gerekir. Bunu iki şekilde yapabilirsin:
 * 
 * 1. Fonksiyonu main()’den önce gövdesiyle birlikte tanımlarsın.(int add(int a,int b){ return a+b};) 
 * 2. Ya da sadece "imzasını" (yani adını, parametrelerini ve dönüş türünü) bildirirsin. Buna "ileri bildirim" denir.
 *
 * Peki std::cout << gibi ifadeleri derleyici nasıl tanıyor? Onun bildirimleri nerede?
 * 
 * İşte burada **başlık dosyaları (header files)** devreye girer.
 * Başlık dosyaları, genellikle `.h` veya sistem kütüphanelerinde gizli olan `.`uzantılı dosyalardır
 * ve içinde çok sayıda **ileri bildirim (declaration)** içerir.
 * 
 * Örneğin, `std::cout` ve `std::cin` gibi yapılar `iostream` başlık dosyasında tanımlanmıştır.
 * Bu yüzden `#include <iostream>` yazdığında, bu ileri bildirimler programına eklenir.
 * 
 * 👉 `#include "add.h"` → kendi oluşturduğun başlık dosyalarını dahil etmek için çift tırnak kullanırsın.
 * 👉 `#include <iostream>` → sistem kütüphanelerini dahil etmek için < > kullanırsın.
 */
