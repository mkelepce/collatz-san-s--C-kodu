<b>Bundan yaklaşık 85 yıl önce Lothar Collatz tüm sayıların 1 e indirgenebileceği tezini öne sürmüştür.<br>
Buna göre problem şöyle öne sürüldü: <br>
Herhangi bir sayı seçiyoruz, seçilen sayı tekse sayıyı 3 ile çarpıyor ve 1 ekliyoruz. Çıkan sayı çiftse 2 ye bölüyoruz. Bu işlemi çift sayı olması halinde devam ettiriyoruz. Eğer tekrar 2 bölümünde çıkan sayı tekse, çıkan sayıyı tekrar 3 le çarpıp 1 ekliyoruz ve bu böyle devam ediyor. 
Örnek olarak 45 sayısını ele alalım. 45 sayısı tek sayıdır. 3 ile çarpımı 135 etmektedir. 135 sayısına 1 eklendiğinde 136 etmektedir. Bu sayı çift sayı olduğuna göre 2 ye bölerek devam ediyoruz. 136 sayısı 2 ye tam bölünmektedir ve 68 sayısı elde edilmektedir. Tekrar 2 ye bölümünden sırasıyla 34 sayısı, 17 sayısı elde edilmektedir. 17 sayısı tektir ve 3 ile çarpılıp 1 eklenir. Sonuç 52’dir. Tekrar devam edilerek 26, 13 sayıları bulunur. 13x3+1 = 40 elde edilir. 40 sayısı 2 ye bölünür, sırasıyla 20, 10, 5 sayıları elde edilir. 5 sayısı tek sayıdır. 5x3+1 = 16 elde edilir. Tekrar sırasıyla 16, 8, 4, 2 ve 1 sayısı bulunur. 
Collatz’ın bu tezi kimilerine göre gerçeklik payının var olduğu, yani tüm sayıların 1 e indirgenebildiği, kimilerine göre de bunun sadece bir sanıdan ibaret olduğu kabul görülür. Biz de bu Collatz sanısını otomatik olarak yapabilecek bir C algoritması ekledik. 
Örnek C kodu şöyledir: <br><br></b>
<hr>
#define _CRT_SECURE_NO_WARNINGS<br>
#include <stdio.h><br>
int main()<br>
{<br>
	unsigned long long n;<br>
	printf("bir tamsayi girin: ");<br>
	scanf("%llu", &n);<br>
	for (;;) {<br>
		printf("%llu ", n);<br>
		if (n == 1)<br>
			break;<br>
		if (n % 2 == 0)<br>
			n /= 2;<br>
		else<br>
			n = n * 3 + 1;<br>
	}<br>
printf("\n");<br>
}<br>
