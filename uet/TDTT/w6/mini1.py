#01
t = (3,4)
print(f"t1 {t[0]}, t2 {t[1]}")

#02
t2=[1,2,3]
print(tuple(t2))

#03
def btap(a):
    tmp=0
    for i in a:
        tmp+=i
    tmp2=tmp/len(a)
    return (tmp,tmp2)
print(btap([1,2,3,4,5]))