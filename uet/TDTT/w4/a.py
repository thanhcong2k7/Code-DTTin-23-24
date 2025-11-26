a,b,c,d,e = map(int, input("Input: ").split())
if (a>b) + (a>c) + (a>d) + (a>e) == 2:
    print(a)
elif (b>c) + (b>d) + (b>e) + (b>a) == 2:
    print(b)
elif (c>d) + (c>e) + (c>b) + (c>a) == 2:
    print(c)
elif (d>a) + (d>b) + (d>c) + (d>e) == 2:
    print(d)
elif (e>a) + (e>b) + (e>c) + (e>d) == 2:
    print(e)