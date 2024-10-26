ft_printf
ft_printf projesi, C dilindeki printf fonksiyonunun yeniden yazılması amacıyla geliştirilmiştir. Bu projede, değişken sayıda argümanla çalışan bir fonksiyon oluşturulmuş ve temel printf işlevlerini karşılayan bir kütüphane yazılmıştır.

İçindekiler:
- Proje Hakkında
- Fonksiyonlar
- Kurulum

Proje Hakkında:
ft_printf, popüler printf fonksiyonunun temel işlevlerini taklit eden bir kütüphane olarak geliştirilmiştir.

Fonksiyonlar:
ft_printf, printf fonksiyonunun aşağıdaki format specifier’larını destekler:

- %c: Tek bir karakter yazdırır.
- %s: Bir karakter dizisi (string) yazdırır.
- %p: void * pointer argümanını hexadecimal biçiminde yazdırır.
- %d: Decimal (10 tabanında) sayı yazdırır.
- %i: Integer değer yazdırır.
- %u: İşaretsiz decimal (10 tabanında) sayı yazdırır.
- %x: Hexadecimal (16 tabanında) sayı küçük harflerle yazdırır.
- %X: Hexadecimal (16 tabanında) sayı büyük harflerle yazdırır.
- %%: Yüzde işareti yazdırır.

Kurulum:
Proje klasörüne gidin.
make komutunu çalıştırarak kütüphaneyi derleyin. Bu işlem sonucunda libftprintf.a dosyası oluşturulacaktır.

ft_printf fonksiyonunuzu kullanmak için, projenizde libftprintf.a dosyasını ve başlık dosyasını dahil etmeniz yeterlidir.
