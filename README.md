![banner](banner.png)

---
[![Custom badge](https://img.shields.io/endpoint?style=for-the-badge&url=https%3A%2F%2Fjefripunza-youtube-channel-badge.vercel.app%2Fapi%2Fsubscriber)](https://www.youtube.com/user/jefripunza/)
[![Custom badge](https://img.shields.io/endpoint?style=for-the-badge&url=https%3A%2F%2Fjefripunza-youtube-channel-badge.vercel.app%2Fapi%2Fviews)](https://www.youtube.com/user/jefripunza/)
[![Custom badge](https://img.shields.io/endpoint?style=for-the-badge&url=https%3A%2F%2Fjefripunza-youtube-channel-badge.vercel.app%2Fapi%2Fcomments)](https://www.youtube.com/user/jefripunza/)
[![Custom badge](https://img.shields.io/endpoint?style=for-the-badge&url=https%3A%2F%2Fjefripunza-youtube-channel-badge.vercel.app%2Fapi%2Fvideos)](https://www.youtube.com/user/jefripunza/)

# Donate
[![Donate](https://img.shields.io/badge/paypal-%2300457C.svg?&style=for-the-badge&logo=paypal&logoColor=white)](https://www.paypal.com/paypalme/jefripunza)

# Sosial Media

[![Custom badge](https://img.shields.io/badge/youtube-%23FF0000.svg?&style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/user/jefripunza/)
[![Custom badge](https://img.shields.io/badge/instagram-%23E4405F.svg?&style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/jefripunza/)
[![Custom badge](https://img.shields.io/badge/facebook-%231877F2.svg?&style=for-the-badge&logo=facebook&logoColor=white)](https://fb.com/jefripunza/)
[![Custom badge](https://img.shields.io/badge/twitter-%231DA1F2.svg?&style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/jefripunza/)
[![Custom badge](https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/jefri-herdi-triyanto-ba76a8106/)

# Introduction
[![Custom badge](https://img.shields.io/badge/c%20-%2300599C.svg?&style=for-the-badge&logo=c&logoColor=white)](https://kelasrobot.com/belajar-pemrograman-dasar-arduino/)
[![arduino-library-badge](https://www.ardu-badge.com/badge/jefripunza.svg?)](https://github.com/jefripunza/jefripunza-ArduinoLibrary)
<br />
Library Arduino untuk mempermudah dalam membangun sebuah projek IoT (Internet Of Things).

---

# Features

## BUAT, AMBIL & UBAH DATA

### 1. Generate Text
dapat membuat text random dengan panjang text yang diinginkan.
```java
String generate = generateText(10); //generateText(panjangText)

// Hasil print
// sfhhseiwfo (contoh)
```

### 2. Split Text
dapat mengambil data dari sebuah string dengan menggunakan variabel separator dan dapat memilih data pada urutannya.
```java
//SEPARATOR = #
//semua data harus berada didalam separator
// salah = 1#2#3#
// salah = #1#2#3

String text = "#0#1#2#3#"; //benar
String data2 = splitText(text,'#',2); //2 adalah urutan data yang ditunjuk

// Hasil print:
// 1
```

### 3. Replace Text
dapat merubah isi string yang akan kita rubah dengan string baru.
```java
String awal = "Aku Belanda!";
String hasil = replaceText(awal, "Belanda", "Indonesia"); //replaceText(awal, tunjuk, rubah)

// Hasil print:
// Aku Indonesia!
```

### 4. Sensor Range
dapat meminimalisir kode untuk pengambilan data dari sensor sehingga lebih minimalis dalam pengetikan.
```java
float sensor = sensorRange(A0,0,1023,0,10); //sensorRange(pinSensor,nilai_sensor_kecil,nilai_sensor_besar,nilai_tujuan_kecil,nilai_tujuan_besar)

// Hasil print:
// 9 (contoh)
```




## KONVERSI NILAI

### 1. String to Char
```java
String awal = "akhsiap";
char *text = string2char(awal);
```

### 2. Char to Int
```java
char *text = "24.5";
int nilai = char2int(text);
```

### 3. String to Integer
```java
String text = "2454";
int nilai = string2int(text);
```


## Manajemen EEPROM

### Menulis String kedalam EEPROM
```java
writeStringToEEPROM(0, "i'm fine, thanks");

// 0 = adalah address awal penulisan string, pada address 0 nya berisi panjang karakter string dan stringnya dimulai disetelah 0 yaitu 1. variabel ini dapat dirubah tidak hanya dimulai dari 0.
// isi = berupa data string yang akan disimpan di EEPROM
```

### Membaca String didalam EEPROM
```java
String ambilString = readStringFromEEPROM(0);

// 0 = adalah address awal penulisan string yang harus sama dengan address awal penulisan
```

### Menghapus data didalam EEPROM
```java
eraseValueEEPROM(0);

// 0 = adalah address awal penghapusan sampai akhir panjang EEPROM (setiap microcontroller berbeda ukuran EEPROM nya)
```





## Bermain Musik
dapat membunyikan nada note untuk bermain lagu dengan menggunakan buzzer.
```java
bunyikan(buzzerPin,NOTE_C5, 100, 50);

// buzzerPin = adalah nilai pin untuk buzzer
// NOTE_C5 = adalah nada C5 yang akan dibunyikan
// 100 = adalah panjang suara nada
// 50 = adalah jeda setelah suara nada berbunyi

//atau menggunakan speed dari library (ketentuan)
bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);

// SPEED tersedia dari SPEED_0_BEAT hingga SPEED_16_BEAT

// note tuts yang tersedia dari B0 sampai DS8 (B0 -> D#8)
// C5  = adalah note C5  (tuts warna putih note C  oktaf 5)
// CS7 = adalah note C#5 (tuts warna hitam note C# oktaf 7)
```







# Support the project
Apakah kamu menyukai library ini? Please support saya dengan menekan subscribe di [Youtube Channel](https://www.youtube.com/user/jefripunza/) saya...

# Donation Please
Butuh ngopi gans, kasih lah untuk biaya pengembangan agar mudah membeli alat dan buat makan <br />
[![Donate](https://img.shields.io/badge/paypal-%2300457C.svg?&style=for-the-badge&logo=paypal&logoColor=white)](https://www.paypal.com/paypalme/jefripunza)
