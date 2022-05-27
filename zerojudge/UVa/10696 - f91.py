def f91(i):
    if i <= 100:
        return f91(f91(i + 11))
    else:
        return i - 10
    
while 1:
    i = int(input())
    if i == 0:
        break
    else:
        print("f91(%d) =" %i, f91(i))
