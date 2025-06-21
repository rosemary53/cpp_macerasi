#include <iostream>

int topla(int x, int y) {

    return x + y;
}
int main()
{
    std::cout <<topla(3,4);  // burada topla(3,4) geçici bir nesnedir bir değişkende tutulmaz unutma!
}
 
/*
* Fonksiyonlarda Bildirimler
* 
  Bir fonksiyonu başka bir fonksiyon içerisinden çağıracaksanız öncesinde çağrılan fonksiyonun tanımlanması gerekiyor.
  Sebebi program kodunun en baştan başlayıp aşağıya doğru okunarak yürütülmesidir.
  Mesela main içerisinde topla fonksiyonu çağıracaksın ancak yukarıda önce o fonksiyonu oluşturmadınız veya tanımlamadınız ancak main içerisinde bahsettiniz işte burada
  derleyici hata verecektir çünkü onu tanımıyor veya bulamıyor.

  #include <iostream>
  int main(){
    std::cout <<topla(3,4);  // burada topla(3,4) geçici bir nesnedir bir değişkende tutulmaz unutma!
  }
  int topla(int x, int y) {
    return x + y;
  }
  burada hata olarak 'topla':tanımlayıcı bulunamadı diye hata verecektir.
  Burada hatayı gidermek için çağrılacak olan fonksiyonu en başta tanımlayabilirsin ve hatayı ortadan kaldırabilirsin
  int topla(int,int);
  int main(){
    std::cout <<topla(3,4);  // burada topla(3,4) geçici bir nesnedir bir değişkende tutulmaz unutma!
  }
  int topla(int x, int y) {
    return x + y;
  } 
*/
