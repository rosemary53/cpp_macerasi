# Hi-Lo oyunu nedir?

Program taraf�ndan �retilen say�y� kullan�c� tahmin etmeye �al���r.
Kullan�c�n�n her tahmininde �retilen say�ya yak�n olma seviyesi hakk�nda durum yaz�l�r.

# �rne�in �retilen say� = 6 

kullan�c� tahmini = 2 diyelim 
durum = biraz uzak

kullan�c� tahmini = 1 diyelim
durum = cok uzak 

kullan�c� tahmini = 4 diyelim
durum = yak�nlast�n

kullan�c� tahmini = 6 diyelim
durum = tebrikler do�ru cevap  

yukar�daki �rnekle program�n i�leyi�ini bir nevi a��klam�� oldum ekstra olarak kaynak kodunda kullan�c�n ka��nc� denemede do�ru tahmin etti�ini
de ekrana yazd�m.

# Peki Durumlar� ekrana yazd�r�rken neyden yararland�n?

�retilen say� ile kullan�c�n cevab� aras�ndaki farktan yararland�m
6-2=4
6-1=5
6-4=2
6-6=0 
aralar�ndaki fark 0 a yakla�t�kca kullan�c�n�n say�ya yak�nl���n�n artt���n� bildirdim.Fark att���nda ise uzakla�t���n� bildirdim

# Aralar�ndaki fark negatif olursa ne yapt�n?

�rne�in;

6-7 = -1
6-9= -3 
oluyor burada ortaya ��kan say�lar� - ile carparak pozitif uzakl�k elde ettim bundan dolay� yine ayn� �ekilde y�r�d� program
-1*(-1) = 1 birim uzak
-1*(-3) = 3 birim uzak 

