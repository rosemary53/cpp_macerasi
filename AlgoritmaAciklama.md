# Basamakları Küçükten Büyüğe Sıralama (Dizisiz ve Sort'suz)

# Problem
Verilen bir pozitif tam sayının basamakları küçükten büyüğe sıralanmış şekilde yazılsın.

**Kısıtlar:**
- Dizi (array) kullanılmayacak.
- Hazır sort algoritmaları (`std::sort` gibi) kullanılmayacak.
- Sayı, tek bir `int` değişkeni olarak işlenecek.

#  Algoritma Fikrim:
1. Sayıdaki en küçük (sıfırdan farklı) basamağı bul.
2. Bu basamağı, bulunduğu pozisyona göre 10’un kuvveti şeklinde (`basamak * 10^pozisyon`) çıkar.
3. Sayıdan sıfır basamaklarını temizle.
4. Her adımda bu işlemi tekrar ederek en küçük basamakları sıralı biçimde "dışa çıkar".
5. Sayı sıfırlanana kadar devam et.
6. Elde edilen basamakları sıralı olarak birleştirerek yeni sayı oluşturulmuş olur.

# Önemli Not:
Sayıdan bir basamağı çıkartırken basitçe sayıyı `% 10` ile değil, **o basamağın onluk sistemdeki tam değerini** çıkarmak gerekir.  
Örneğin, sayı `93517` ve en küçük basamak `1` pozisyon olarak 1. basamaktadır, o zaman çıkartılacak sayı `1 * 10^1 = 10` olmalı.  
Bu şekilde sadece basamak silinmiş olur, diğerleri yerinde kalır.

# Örnek:
Girdi: 93517  
Adım 1: En küçük = 1 (pozisyon: 1) → çıkar `10` → 93507 → sıfırları temizle → 9357  
Adım 2: En küçük = 3 → çıkar `300` → 9057 → temizle → 957  
Adım 3: En küçük = 5 → çıkar `500` → 457 → temizle → 97  
Adım 4: En küçük = 7 → çıkar `7` → 90 → temizle → 9  
Adım 5: En küçük = 9 → çıkar `9` → 0  

Sıralı olarak dışarı çıkarılan basamaklar: 1 3 5 7 9

# Not:
Bu algoritma **dizi ve sort kullanmadan**, sayının basamaklarıyla matematiksel işlem yaparak sıralama yapmayı amaçlar.



