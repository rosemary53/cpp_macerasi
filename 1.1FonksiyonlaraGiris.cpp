#include <iostream>
/*
* Fonksiyonlar Nedir?
* 
* +Fonksiyonlar belirli işlevleri yerine getirmeyi sağlayan kod parçacıklarıdır.
*   - Örneğin kullanıcı tarafından girilen sayının tek mi çift mi veya asal olup olmadığı vb. gibi durumları öğrenmek istediğimizde 
*   bu durumlara uygun fonksiyonlar oluşturarak kodu daha verimli hale getirebiliriz.
* 
* +Standart Fonksiyon Tanımı Nedir?
* 
* -Öncelikle fonksiyon yazmadan önce geriye ne döndürmek istediğinize karar verin.
* -Karar verdiğiniz sonucunun tipini belirleyin int,char,bool,
* -Karar verdiğiniz tip fonksiyonunuzunda tipi olacaktır biz buna geriye dönüş değeri tipi diyebiliriz.
* -Ardından fonksiyonunuza anlaşılabilir bir tanımlayıcı verin asalMi,tekMi,ciftMi..
* -İsim verdikten sonra ne yapmak istediğinizi derdinizi {...} içerisinde anlatın.
* 
*    geriyeDonusDegerTipi  fonksiyonAdı{
*            
*       buraya bilgisayara ne yaptırmak istediğinizi anlatın
*       return değer; // Eğer dönüş tipi void değilse

*    }
*  - int ciftMi{
*      ...
*       return (int tipinde deger)
*    }
* 
  Fonksiyonu Yazdık Peki Nasıl Kullancaz?

   Fonksiyonu yazdıktan sonra ona ulaşmamız gerek eğer sadece yazıp bırakırsak derleyici onu algılamaz.
   Fonksiyona ulaşmak için de main fonksiyonu içerisinde ilgili fonksiyonun adını çağırıp sonuna () eklemeliyiz.
   int main(){
    ciftMi();
   }

*/
int ciftMi(int sayi){                       //Kullanıcıdan gelen sayi çift ise geriye 1 döndürsün tek ise 0 döndürsün istiyorum

    return (sayi % 2 == 0) ? 1 : 0;
}

int main()
{
    int sayi{};                             // burada sayi = 0 olarak başlatılır güvenlik için tavsiye edilir.
    std::cout << "Lutfen bir sayi giriniz:";
    std::cin >> sayi;

    if (ciftMi(sayi)) {
        std::cout << sayi
            << "," << "cifttir.\n";
    }
    else {
        std::cout << sayi
            << "," << "tektir.\n";
    }
    return 0;                                //main in basarili bir sekilde çalışıp tamamlandığını hakkında bilgi vermek için kullanılır.Eğer her şey yolundaysa return 0 döner
}


