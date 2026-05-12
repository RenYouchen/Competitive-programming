n = int(input())

while(True):
    if ((2 ** n + 1) % (2 * n + 1) == 0):
        print(n)
        break
    else:
        n+=1
