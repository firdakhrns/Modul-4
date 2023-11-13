satu, dua = input().split()
satu = int(satu)
dua = int(dua)
for i in range(1, satu + 1) :
    j = i 
    while j > 1 :
        print("(%d * %d) + "%(j, dua), end='') ; j -= 1
    x = 1 ; hasil = (i * dua)
    while x < i :
        hasil += (x * dua) ; x += 1
    print("(%d * %d) = %d"%(j, dua, hasil))
y = 1 ; z = 1 ; total = 0
while y <= satu :
    total += z * dua ; z += y + 1 ; y += 1
print("%d"%(total))