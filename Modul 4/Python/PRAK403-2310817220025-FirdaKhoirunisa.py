satu, dua = input().split()
x = int(satu)
y = int(dua)

if x > y:
    while x >= int(dua) and y <= int(satu):
        print(x, end=' ')
        print(y, end=' ')
        x -= 1
        y += 1
        if x == int(dua) - 1:
            break
        else:
            print("-", end=' ')
elif x < y:
    while x <= int(dua) and y >= int(satu):
        print(x, end=' ')
        print(y, end=' ')
        x += 1
        y -= 1
        if y == int(satu) - 1:
            break
        else:
            print("-", end=' ')