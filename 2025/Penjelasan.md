# Nomor 26

Diberikan fungsi rekursif TIGA(N):

- Jika N <= 1, hasil 1
- Jika N mod 3 = 0, hasil TIGA(N-1) + TIGA(N-3)
- Jika N mod 3 = 1, hasil TIGA(N-2)
- Jika N mod 3 = 2, hasil TIGA(N-3)

Hasil evaluasi:

- TIGA(2) = 1
- TIGA(6) = 3
- TIGA(14) = 1
- TIGA(18) = 7
- TIGA(25) = 1

## Jawaban

TIGA(2), TIGA(6), TIGA(14), TIGA(18), TIGA(25) = 1, 3, 1, 7, 1.

---

# Nomor 27

Ditanya banyak nilai i dari 1 sampai 2025 sehingga TIGA(i) = 1.

Pola dari fungsi:

- Untuk i kelipatan 3 (i >= 3), nilai TIGA(i) > 1
- Untuk i bukan kelipatan 3, nilai TIGA(i) = 1

Jadi banyaknya adalah banyak bilangan 1..2025 yang bukan kelipatan 3.

- Banyak kelipatan 3 = floor(2025/3) = 675
- Total bilangan = 2025
- Bukan kelipatan 3 = 2025 - 675 = 1350

## Jawaban

1350.

---

# Nomor 28

Ditanya jumlah TIGA(1) + TIGA(2) + ... + TIGA(100).

Gunakan pola:

- Jika i bukan kelipatan 3, TIGA(i) = 1
- Jika i = 3k, TIGA(3k) = k + 1

Dalam 1..100:

- Kelipatan 3: 3, 6, ..., 99 (33 bilangan)
- Bukan kelipatan 3: 100 - 33 = 67 bilangan

Kontribusi jumlah:

- Dari bukan kelipatan 3: 67 x 1 = 67
- Dari kelipatan 3: sum(k+1), k=1..33 = (1+...+33) + 33 = 561 + 33 = 594

Total = 67 + 594 = 661.

## Jawaban

661.

---

# Nomor 29

Pada FUN(A), vektor B dibentuk sebagai prefix sum:

- B[0] = 0
- B[i+1] = B[i] + A[i]

Untuk A = {1, 2, 3, 4, 5}:

- B = {0, 1, 3, 6, 10, 15}

## Jawaban

Isi vektor B adalah {0, 1, 3, 6, 10, 15}.

---

# Nomor 30

Dengan A = {1, 2, 3, 4, 5} dan B = {0, 1, 3, 6, 10, 15},

GSI(B, x, y) = B[y] - B[x-1].

Hitung opsi:

- A. GSI(B,1,4) = 10
- B. GSI(B,2,4) = 9
- C. GSI(B,4,5) = 9
- D. GSI(B,5,5) = 5
- E. GSI(B,3,4) = 7

## Jawaban

Paling besar adalah opsi A, nilainya 10.

---

# Nomor 31

Fungsi FUN(A) mengambil nilai maksimum jumlah subarray kontigu.

Untuk A = {3, -2, 4, -3, 1, -4, 2, -1, 4, 3, -2, 3, -4, 2, -2, 3},
jumlah subarray maksimum bernilai 9.

## Jawaban

9.

---

# Nomor 32

DUA(S,T) menghitung banyak posisi i sehingga S[i..i+|T|-1] sama dengan reverse(T).

Diberikan:

- S = ABCBAABCCBAABC
- T = CBA, maka reverse(T) = ABC

Banyak kemunculan ABC di S adalah 3.

## Jawaban

3.

---

# Nomor 33

Ditanya nilai maksimum DUA(S,T) untuk:

- S = BBABAABBAAABBABBAAABBBAAABBABBA
- Panjang T minimal 3

Karena DUA membandingkan dengan reverse(T), nilai DUA(S,T) sama dengan frekuensi kemunculan suatu substring U di S, dengan U = reverse(T).

Jadi kita cari substring panjang >= 3 yang paling sering muncul.
Substring paling sering adalah BBA, muncul 7 kali.
Maka bisa ambil T = ABB.

## Jawaban

Nilai maksimum adalah 7.

---

# Nomor 34

Ditanya banyak kemungkinan string T sehingga:

- S = ACCAAACCA
- DUA(S,T) = 2
- Tidak ada syarat panjang T

Nilai DUA(S,T) adalah frekuensi kemunculan reverse(T) di S.
Jadi yang dicari adalah banyak substring berbeda dari S (semua panjang 1..|S|) yang frekuensinya tepat 2.

Hasil perhitungan menghasilkan 7 substring berbeda dengan frekuensi 2.

## Jawaban

7.

---

# Nomor 35

RAHASIA(A) pada elemen berbeda akan menjumlahkan elemen dengan banyak elemen lebih besar sama dengan banyak elemen lebih kecil.
Untuk panjang ganjil dan semua nilai berbeda, elemen itu adalah median.

A = {16, 5, 20, 1, 11}
Urut: {1, 5, 11, 16, 20}
Median = 11.

## Jawaban

11.

---

# Nomor 36

PETAK(B):

1. Ambil RAHASIA pada setiap baris (median tiap baris)
2. Bentuk vektor C dari hasil itu
3. Kembalikan RAHASIA(C) (median dari C)

Matriks:

- {16, 5, 20, 1, 11} median 11
- {2, 17, 13, 14, 19} median 14
- {15, 7, 21, 18, 9} median 15
- {25, 6, 4, 12, 22} median 12
- {23, 3, 24, 8, 10} median 10

Maka C = {11, 14, 15, 12, 10}, mediannya 12.

## Jawaban

12.

---

# Nomor 37

PETAK pada susunan 5x5 berisi angka 1..25 berbeda.
Dengan alasan yang sama seperti nomor 36, PETAK adalah median dari 5 median baris.

Agar median dari 5 median baris >= X, minimal 3 baris harus punya median >= X.
Setiap baris butuh minimal 3 elemen >= X agar mediannya >= X.
Berarti total minimal elemen >= X adalah 9.

Di himpunan 1..25:

- Banyak elemen >= X adalah 26 - X
- Syarat: 26 - X >= 9, maka X <= 17

Jadi maksimum yang mungkin dicapai adalah 17, dan memang bisa dikonstruksi.

## Jawaban

17.

---

# Nomor 38

MERAH(A,B) adalah algoritma Euclid, yaitu fpb(A,B).

Untuk A = 24:

- MERAH(24,4) = 4
- MERAH(24,9) = 3
- MERAH(24,17) = 1
- MERAH(24,18) = 6
- MERAH(24,34) = 2

## Jawaban

Nilai-nilai opsi berturut-turut: 4, 3, 1, 6, 2.
(Jika pertanyaan memilih yang bernilai 2, jawabannya opsi E.)

---

# Nomor 39

NUSANTARA(A,B) = banyak C dari 1..A yang memenuhi MERAH(A,C) = B,
yaitu banyak C dengan fpb(A,C)=B.

Untuk NUSANTARA(12,3), cari C pada 1..12 dengan fpb(12,C)=3.
Yang memenuhi: C = 3 dan C = 9.

## Jawaban

2.

---

# Nomor 40

NUSANTARA(2025,135) = banyak C pada 1..2025 dengan fpb(2025,C)=135.

Tulis C = 135k, maka 1 <= k <= 15.
Syarat fpb(2025,135k)=135 setara fpb(15,k)=1.

Jumlah k dalam 1..15 yang relatif prima terhadap 15 adalah phi(15):

- 15 = 3 x 5
- phi(15) = 15(1-1/3)(1-1/5) = 8

## Jawaban

8.
