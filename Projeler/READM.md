# Kim Hesap Makinesi Olmak Ýster?

Bu proje, **23.06.2025** tarihinde **rosemary** tarafýndan yazýlmýþtýr.

C++ dilinde þimdiye kadar öðrendiðim bilgileri bir araya getirerek basit bir oyun geliþtirmek istedim.

---

#  Oyun Aþamalarý

1. Kullanýcýya toplam **5 adet soru** sorulur.
2. Her soruda kullanýcýdan cevap alýnýr. Cevabýn doðruluðuna göre geri bildirim verilir.
   - Yanlýþ cevap verilirse doðru cevap kullanýcýya gösterilir.
3. Her doðru cevapta **skor 1 artýrýlýr**.
4. 5 soru sonunda kullanýcýya **"Oyuna devam etmek ister misiniz?"** sorusu yöneltilir.
   - Evet derse skor sýfýrlanýr, yeni sorularla oyun yeniden baþlar.
   - Hayýr derse oyun sonlanýr.
   
---

# Projemde Eksik Gördüðüm Yönler

- Soru sayýsý ve çeþitliliði artýrýlabilir.  
  (Örneðin: "Sayýnýn baþtan n. basamaðý asal mý?" veya "Faktöriyeli kaçtýr?" gibi)
- Kullanýcý bilgileri (isim, toplam skor vb.) tutulabilir ve ekrana yazdýrýlabilir.
- Kullanýcýya **ipucu almak ister misin?** gibi seçenekler sunulabilir.
- Modüler yapýyý artýrmak için bazý tekrar eden metinler parametreleþtirilebilir.
- Bazý deðerleri manuel verdim, bunlar **dinamik** hale getirilebilir.

---

#  Dosya Yapýsý Hakkýnda

Baþlangýçta projeyi sadece tek bir dosyada (`main.cpp`) yazmýþtým. Ancak **header dosyalarýný** öðrendikten sonra 
fonksiyon bildirimlerini `.h` uzantýlý bir dosyada, fonksiyon tanýmlarýný ise ayrý bir `.cpp` dosyasýnda tutmaya karar verdim.
Bu nedenle projeyi yeniden düzenledim ve buraya bu haliyle yüklüyorum.

