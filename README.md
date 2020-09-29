![ArduinoJson](banner.png)

---

Library Arduino untuk mempermudah dalam membangun sebuah projek IoT (Internet Of Things).

## Features

### Generate Text

dapat membuat text random dengan panjang text yang diinginkan.

```c++
String generate = generateText(10);

// Hasil print
// sfhhseiwfo
```

### Split Text

dapat mengambil data dari sebuah string dengan menggunakan variabel separator dan dapat memilih data pada urutannya.

```c++
String data2 = splitText("#0#1#2#3#",'#',2);

// Hasil print:
// 1
```






## Support the project

Do you like this library? Please [star this project on GitHub](https://github.com/bblanchon/ArduinoJson/stargazers)!

What? You don't like it but you *love* it?  
We don't take donations anymore, but [we sell a book](https://arduinojson.org/book/?utm_source=github&utm_medium=readme), so you can help and learn at the same time.
