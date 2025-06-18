
#include <iostream>

/*
 Öncelikle, kullanıcıdan bir tam sayı girmesini isteyen, bir tam sayı girmesini bekleyen ve ardından bu sayının 
 2 katının ne olduğunu söyleyen bir program oluşturalım. Program aşağıdaki çıktıyı üretmelidir.

    Bir tam sayı girin: 5
    Bu sayının iki katı: 10
*/

int main(){

    int sayi;
    std::cout << "Lutfen bir tam sayi giriniz : ";
    std::cin >> sayi;
    std::cout << "\nSiz tarafindan girilen sayi :" << sayi << "\n";
    std::cout << "Girilen sayinin iki kati :" << (sayi * 2);

    return 0;

}

