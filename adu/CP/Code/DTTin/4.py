t = int(input())
for i in range(t):
    cnt = 0
    n = int(input())
    while n!=0:
        if n%2==1:
            cnt = cnt+1
        n=int(n/2)
    if cnt%2==0:
        print("even")
    else: print("odd")