#include <iostream>
using namespace std;

int main() {
    int sayiMiktari;

    // Adım 1: Kullanıcıdan sayı miktarını alın
    cout << "Kac tane sayi gireceksiniz: ";
    cin >> sayiMiktari;

    // Adım 2: Sayıları bir diziye alın
    int sayilar[sayiMiktari];
    for (int i = 0; i < sayiMiktari; i++) {
        cout << i + 1 << ". sayiyi giriniz: ";
        cin >> sayilar[i];
    }

    int islemMiktari;

    // Adım 3: Kullanıcıdan işlem miktarını alın
    cout << "Kac tane islem yapacaksiniz: ";
    cin >> islemMiktari;

    // Adım 4: İşlemleri bir diziye alın
    char islemler[islemMiktari];
    for (int i = 0; i < islemMiktari; i++) {
        cout << i + 1 << ". islemi giriniz (+, -, *, /): ";
        cin >> islemler[i];
    }

    // Adım 5: İlk sayıyı sonuca başlangıç değeri olarak ata
    int sonuc = sayilar[0];

    // Adım 6: İşlemleri sırayla uygula
    for (int i = 0; i < islemMiktari; i++) {
        switch (islemler[i]) {
            case '+':
                sonuc += sayilar[i + 1];
                break;
            case '-':
                sonuc -= sayilar[i + 1];
                break;
            case '*':
                sonuc *= sayilar[i + 1];
                break;
            case '/':
                if (sayilar[i + 1] != 0) {
                    sonuc /= sayilar[i + 1];
                } else {
                    cout << "Hata: Bölme işlemi sıfıra bölünemez." << endl;
                    return 1; // Programı sonlandır
                }
                break;
            default:
                cout << "Hata: Geçersiz işlem: " << islemler[i] << endl;
                return 1; // Programı sonlandır
        }
    }

    // Adım 7: Sonucu ekrana yazdır
    cout << "Sonuc: " << sonuc << endl;

    return 0;
}
