t = int(input())
for i in range(t):
    n = str(input())
    kq=""
    for j in range(len(n)):
        if n[j:j+1] == '0':
            kq+='5'
        else: kq+=n[j:j+1]
    print(kq)