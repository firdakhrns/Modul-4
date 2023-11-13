while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilih = int(input("Masukkan Pilihan : "))

    if (pilih > 5 or pilih <= 0):
        print("Input anda salah, silahkan coba lagi")
        continue
    elif pilih == 5:
        print("Terimakasih, telah menggunakan kalkulator Firda")
        break

    satu = float(input("Masukkan nilai pertama : "))
    dua = float(input("Masukkan nilai kedua : "))
    
    if pilih == 1:
        hasil = float(satu + dua)
        print(f"Hasil penjumlahan antara {satu:.2f} dengan {dua:.2f} adalah {hasil:.2f}")
    elif pilih == 2:
        hasil = float(satu - dua)
        print(f"Hasil pengurangan antara {satu:.2f} dengan {dua:.2f} adalah {hasil:.2f}")
    elif pilih == 3:
        hasil = satu * dua
        print(f"Hasil perkalian antara {satu:.2f} dengan {dua:.2f} adalah {hasil:.2f}")
    elif pilih == 4:
        hasil = satu / dua
        print(f"Hasil pembagian antara {satu:.2f} dengan {dua:.2f} adalah {hasil:.2f}")