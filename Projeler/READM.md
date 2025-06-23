# Kim Hesap Makinesi Olmak �ster?

Bu proje, **23.06.2025** tarihinde **rosemary** taraf�ndan yaz�lm��t�r.

C++ dilinde �imdiye kadar ��rendi�im bilgileri bir araya getirerek basit bir oyun geli�tirmek istedim.

---

#  Oyun A�amalar�

1. Kullan�c�ya toplam **5 adet soru** sorulur.
2. Her soruda kullan�c�dan cevap al�n�r. Cevab�n do�rulu�una g�re geri bildirim verilir.
   - Yanl�� cevap verilirse do�ru cevap kullan�c�ya g�sterilir.
3. Her do�ru cevapta **skor 1 art�r�l�r**.
4. 5 soru sonunda kullan�c�ya **"Oyuna devam etmek ister misiniz?"** sorusu y�neltilir.
   - Evet derse skor s�f�rlan�r, yeni sorularla oyun yeniden ba�lar.
   - Hay�r derse oyun sonlan�r.
   
---

# Projemde Eksik G�rd���m Y�nler

- Soru say�s� ve �e�itlili�i art�r�labilir.  
  (�rne�in: "Say�n�n ba�tan n. basama�� asal m�?" veya "Fakt�riyeli ka�t�r?" gibi)
- Kullan�c� bilgileri (isim, toplam skor vb.) tutulabilir ve ekrana yazd�r�labilir.
- Kullan�c�ya **ipucu almak ister misin?** gibi se�enekler sunulabilir.
- Mod�ler yap�y� art�rmak i�in baz� tekrar eden metinler parametrele�tirilebilir.
- Baz� de�erleri manuel verdim, bunlar **dinamik** hale getirilebilir.

---

#  Dosya Yap�s� Hakk�nda

Ba�lang��ta projeyi sadece tek bir dosyada (`main.cpp`) yazm��t�m. Ancak **header dosyalar�n�** ��rendikten sonra 
fonksiyon bildirimlerini `.h` uzant�l� bir dosyada, fonksiyon tan�mlar�n� ise ayr� bir `.cpp` dosyas�nda tutmaya karar verdim.
Bu nedenle projeyi yeniden d�zenledim ve buraya bu haliyle y�kl�yorum.

