a,b,c,d,e = map(int, input("Input: ").split())
mid = (a+b+c+d+e)/5
d1,d2,d3,d4,d5 = map(int,[abs(mid-a),abs(mid-b),abs(mid-c),abs(mid-d),abs(mid-e)])
if d1<d2<d3<d4<d5:
    print(a)
elif d2<d3<d4<d5:
    print(b)
elif d3<d4<d5:
    print(c)
elif d4<d5:
    print(d)
else:
    print(e)