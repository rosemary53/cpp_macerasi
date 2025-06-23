# Kim Hesap Makinesi Olmak İster?

Bu proje, **23.06.2025** tarihinde **rosemary** tarafından yazılmıştır.

C++ dilinde şimdiye kadar öğrendiğim bilgileri bir araya getirerek basit bir oyun geliştirmek istedim.

---

#  Oyun Aşamaları

1. Kullanıcıya toplam **5 adet soru** sorulur.
2. Her soruda kullanıcıdan cevap alınır. Cevabın doğruluğuna göre geri bildirim verilir.
   - Yanlış cevap verilirse doğru cevap kullanıcıya gösterilir.
3. Her doğru cevapta **skor 1 artırılır**.
4. 5 soru sonunda kullanıcıya **"Oyuna devam etmek ister misiniz?"** sorusu yöneltilir.
   - Evet derse skor sıfırlanır, yeni sorularla oyun yeniden başlar.
   - Hayır derse oyun sonlanır.
   
---

# Projemde Eksik Gördüğüm Yönler

- Soru sayısı ve çeşitliliği artırılabilir.  
  (Örneğin: "Sayının baştan n. basamağı asal mı?" veya "Faktöriyeli kaçtır?" gibi)
- Kullanıcı bilgileri (isim, toplam skor vb.) tutulabilir ve ekrana yazdırılabilir.
- Kullanıcıya **ipucu almak ister misin?** gibi seçenekler sunulabilir.
- Modüler yapıyı artırmak için bazı tekrar eden metinler parametreleştirilebilir.
- Bazı değerleri manuel verdim, bunlar **dinamik** hale getirilebilir.

---

#  Dosya Yapısı Hakkında

Başlangıçta projeyi sadece tek bir dosyada (`main.cpp`) yazmıştım. Ancak **header dosyalarını** öğrendikten sonra 
fonksiyon bildirimlerini `.h` uzantılı bir dosyada, fonksiyon tanımlarını ise ayrı bir `.cpp` dosyasında tutmaya karar verdim.
Bu nedenle projeyi yeniden düzenledim ve buraya bu haliyle yüklüyorum.

# Başka soru önerisi ne olabilir ?
  bilgisayar rastgele sayı üretsin kullanıcıya ipucu şansı versin.Ürettiği sayı asaldir gibi ipucu verebilir.

