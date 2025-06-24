# Hi-Lo oyunu nedir?

Program tarafýndan üretilen sayýyý kullanýcý tahmin etmeye çalýþýr.
Kullanýcýnýn her tahmininde üretilen sayýya yakýn olma seviyesi hakkýnda durum yazýlýr.

# Örneðin üretilen sayý = 6 

kullanýcý tahmini = 2 diyelim 
durum = biraz uzak

kullanýcý tahmini = 1 diyelim
durum = cok uzak 

kullanýcý tahmini = 4 diyelim
durum = yakýnlastýn

kullanýcý tahmini = 6 diyelim
durum = tebrikler doðru cevap  

yukarýdaki örnekle programýn iþleyiþini bir nevi açýklamýþ oldum ekstra olarak kaynak kodunda kullanýcýn kaçýncý denemede doðru tahmin ettiðini
de ekrana yazdým.

# Peki Durumlarý ekrana yazdýrýrken neyden yararlandýn?

Üretilen sayý ile kullanýcýn cevabý arasýndaki farktan yararlandým
6-2=4
6-1=5
6-4=2
6-6=0 
aralarýndaki fark 0 a yaklaþtýkca kullanýcýnýn sayýya yakýnlýðýnýn arttýðýný bildirdim.Fark attýðýnda ise uzaklaþtýðýný bildirdim

# Aralarýndaki fark negatif olursa ne yaptýn?

Örneðin;

6-7 = -1
6-9= -3 
oluyor burada ortaya çýkan sayýlarý - ile carparak pozitif uzaklýk elde ettim bundan dolayý yine ayný þekilde yürüdü program
-1*(-1) = 1 birim uzak
-1*(-3) = 3 birim uzak 

