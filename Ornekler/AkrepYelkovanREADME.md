#  Akrep ile Yelkovan Arasındaki Açı Hesabı

Bu örnekte, akrep ile yelkovan arasındaki açının kaç derece olduğunu hesaplayacağım.

##  Hesaplama Yaparken Nelere Dikkat Edilmeli?

Akrep ile yelkovan arasındaki açıyı hesaplarken bazı temel bilgilere dikkat etmek gerekir.

## Saat Tam Olduğunda Ne Olur?

Saat tam iken (örneğin 01:00, 12:00, 23:00 gibi), hem akrep hem de yelkovan doğrudan sayıların üzerinde yer alır.

###  09:00 için

- Akrep: 9 sayısı üzerindedir.  
- Yelkovan: 12 sayısı üzerindedir.

## Dakika Sıfır Değilse Akrep Nerede Olur?

Eğer dakika kısmı 0'dan farklıysa, akrep artık sabit bir sayı üzerinde bulunmaz.  
Akrep her zaman hareket halindedir. Eğer sabit kalsaydı anlık geçişler olurdu.  
Yelkovan ilerledikçe akrep de belirli bir hızda yer değiştirir ve bu da açıya etki eder.

## Örnek: Saat 01:20

Saat 01:20 olduğunda akrep ve yelkovan saat üzerinde hangi konumdadır, birlikte bakalım.

## Bilmeliyiz

- Bir tam daire 360 derecedir.
- Saatte 12 sayı bulunur.  
  `360 ÷ 12 = 30 derece` → Her iki sayı arasındaki açı 30°’dir.
- Saatte 60 dakika vardır.  
  `360 ÷ 60 = 6 derece` → Yelkovan her dakika 6° ilerler.
- Her iki saat sayısı arasında 5 dakika süre vardır.

#  Yelkovan'ın Konumu Nasıl Bulunur?

20 dakikamız var. Bu 20 dakikayı saat yönünde sayılara dağıtırsak yelkovanın hangi sayı üzerinde olduğunu buluruz:

12 <5dk> 1 <5dk> 2 <5dk> 3 <5dk> 4

Yani yelkovan 4 sayısının üzerindedir.

Formül olarak ifade edersek:

Yelkovan'ın bulunduğu sayı = dakika / 5

# Peki akrep nerede?

Yelkovan 60 dakika yol alırken, akrep de 5 dakika ilerler.
O zaman yelkovan 20 dakika ilerlerken akrep ne kadar ilerler?

Burada bir oran-orantı kurabiliriz:

Yelkovan	Akrep
60 dk	5 dk
20 dk	?

20 × (5 / 60) = 5/3 dakika eder.
5/3 dakika kaç derece eder?
Her dakika 6° olduğuna göre:

5/3 × 6 = 10 derece
Yani akrep 1'den 10 derece kadar ilerlemiştir.
Akrebin 12’den uzaklığı 30° + 10° = 40° olur.

# Yelkovanın 12'ye Uzaklığı
Yelkovan 4. sayının üzerinde olduğu için:
4 × 30 = 120 derece

# Akrep – Yelkovan Arasındaki Açı
Açı = |120 - 40| = 80 derece

# Sonuç Formülleri
Akrep in 12’ye olan uzaklığı:
(saat × 30) + (dakika × 0.5)

Yelkovan’ın 12’ye olan uzaklığı:
dakika × 6

İkisinin arasındaki açı:
|Akrep – Yelkovan|
