#include<iostream>
#include<ctime>
using std::cout;
using std::cin;

int main()
{
	srand(time(0));//rand fonksiyonunun seed ini pc deki zamana göre belirler bu sayede rand fonksiyonu sürekli farklı sayılar olusturur.
	int can = 5;
	int puan = 0;
	int sayi, tahmin,zorluk;
	
	cout << "=====SAYI TAHMIN OYUNUNA HOSGELDINIZ=====\n\n";
	cout << "Zorluk Seviyesi Seciniz...\n";
	cout << "1)KOLAY(0-10)     2)ORTA(0-20)     3)ZOR(0-30)\n";
	cin >> zorluk;

	while (zorluk <=0 || zorluk>3)
	{
		cout << "Hatali Zorluk Girisi Lutfen 1-3 Arasi Bir Sayi Giriniz...\n";
		cin >> zorluk;
	}

	cout << "Zorluk Secildi Oyun Basliyor...\n";

	if (zorluk == 1)
	{
		sayi = rand() % 10;
		while (can>0)
		{
			cout << "\nTahmininizi Giriniz: ";
			cin >> tahmin;
			if (tahmin == sayi)
			{
				cout << "\nTebrikler Tahmininiz Dogru\n";
				sayi = rand() % 10;
				puan += 10;
				cout << "Yeni Bir Sayi Olusturuldu...\n";
			}

			else
			{
				if (tahmin > sayi)
				{
					can--;
					cout << "Caniniz: " << can << "\nTahmininiz Sayidan Buyuk Daha Dusuk Bir Tahmin Giriniz.\n";
				}
				else 
				{
					can--;
					cout << "Caniniz: " << can << "\nTahmininiz Sayidan Kucuk Daha Buyuk Bir Tahmin Giriniz.\n";
				}
			}
		}
	}

	else if (zorluk == 2)
	{
		sayi = rand() % 20;
		while (can > 0)
		{
			cout << "Tahmininizi Giriniz: ";
			cin >> tahmin;
			if (tahmin == sayi)
			{
				cout << "Tebrikler Tahmininiz Dogru\n";
				sayi = rand() % 20;
				puan += 20;
				cout << "Yeni Bir Sayi Olusturuldu...\n";
			}

			else
			{
				if (tahmin > sayi)
				{
					can--;
					cout << "Caniniz: " << can << "\nTahmininiz Sayidan Buyuk Daha Dusuk Bir Tahmin Giriniz.\n";
				}
				else
				{
					can--;
					cout << "Caniniz: " << can << "\nTahmininiz Sayidan Kucuk Daha Buyuk Bir Tahmin Giriniz.\n";
				}
			}
		}
	}

	else if (zorluk == 3)
	{
		sayi = rand() % 30;
		while (can > 0)
		{
			cout << "Tahmininizi Giriniz: ";
			cin >> tahmin;
			if (tahmin == sayi)
			{
				cout << "Tebrikler Tahmininiz Dogru\n";
				sayi = rand() % 30;
				puan += 30;
				cout << "\nYeni Bir Sayi Olusturuldu...\n";
			}

			else
			{
				if (tahmin > sayi)
				{
					can--;
					cout <<"Caniniz: "<<can << "\nTahmininiz Sayidan Buyuk Daha Dusuk Bir Tahmin Giriniz.\n";
				}
				else
				{
					can--;
					cout << "Caniniz: " << can << "\nTahmininiz Sayidan Kucuk Daha Buyuk Bir Tahmin Giriniz.\n";
				}
			}
		}
	}

	else {
		cout << "Beklenmedik Bir Hata Program Sonlandiriliyor...\n";
		return 0;
	}

	cout << "\nCaniniz Kalmadi Oyun Bitti\n";
	cout << "Toplam Puan: " << puan;
	cout << "\nProgram Sonlandiriliyor...\n";
	return 0;
}