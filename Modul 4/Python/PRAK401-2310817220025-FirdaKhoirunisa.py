number, simbol = input().split()
angka = int(number)
for x in range(1, 51):
    if(x % angka == 0):
        print(simbol, end = " ")
    else:
        print(x, end = " ")
