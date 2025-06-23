#ifndef SORULAR
#define SORULAR
int kullaniciCevabi();
int basamakSayisiBul(int sayi);
int sondanKacinciDeger(int sayi, int sira);
int bastanKacinciDeger(int sayi, int sira);
int mukemmelSayiMi(int sayi);
int kesirliKisim(int sayi, int bolen);
int sayininKupu(int sayi, int sira);
void skorArtir();
int skorDondur();
void ekranMesaji(int dogruCevap, int kullaniciCevap);
void soruListesi();
extern int skor; //global deðiþken bildirimi
#endif