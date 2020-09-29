![ArduinoJson](banner.png)

---

Library Arduino untuk mempermudah dalam membangun sebuah projek IoT (Internet Of Things).

## Features

### AMBIL & UBAH DATA

#### 1. Generate Text

dapat membuat text random dengan panjang text yang diinginkan.

```java
String generate = generateText(10);

// Hasil print
// sfhhseiwfo (contoh)
```

#### 2. Split Text

dapat mengambil data dari sebuah string dengan menggunakan variabel separator dan dapat memilih data pada urutannya.

```java
String data2 = splitText("#0#1#2#3#",'#',2);

// Hasil print:
// 1
```

#### 3. Replace Text

dapat merubah isi string yang akan kita rubah dengan string baru.

```java
String text = replaceText("Aku Belanda!", "Belanda", "Indonesia");

// Hasil print:
// Aku Indonesia!
```

#### 4. Sensor Range

dapat meminimalisir kode untuk pengambilan data dari sensor sehingga lebih minimalis dalam pengetikan.

```java
float sensor = sensorRange(A0,0,1023,0,10);

// Hasil print:
// 9 (contoh)
```


---


### KONVERSI NILAI

#### 1. String to Char

dapat mengkonversi dari nilai String ke nilai Char.

```java
char *text = string2char("akhsiap");
```

#### 2. Char to Int

dapat mengkonversi dari nilai Char ke nilai Integer.

```java
int char2int('24.5');
```

#### 3. String to Long

dapat mengkonversi dari nilai String ke nilai Long.

```java
long string2long("24.5");
```


### Manajemen EEPROM

#### Menulis String kedalam EEPROM

dapat menuliskan data String kedalam EEPROM
```java
writeStringToEEPROM(0, "i'm fine, thanks ouyeah");

// 0 = adalah address awal penulisan string, pada address 0 nya berisi panjang karakter string dan stringnya dimulai disetelah 0 yaitu 1. variabel ini dapat dirubah tidak hanya dimulai dari 0.
// isi = berupa data string yang akan disimpan di EEPROM
```



### FUNGSI TAMBAHAN

#### blinkLED

dapat mempersingkat kode dalam membuat blink/kedip lampu.

```java
blinkLed(200,13); //blinkLed(delay,pinLampu);
```




## Support the project

Do you like this library? Please [star this project on GitHub](https://github.com/bblanchon/ArduinoJson/stargazers)!

What? You don't like it but you *love* it?  
We don't take donations anymore, but [we sell a book](https://arduinojson.org/book/?utm_source=github&utm_medium=readme), so you can help and learn at the same time.
