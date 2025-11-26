a = [1,2,5,3,1,4,6,7,1,1212,12,122]
mx = a[0]
for i in a:
    if mx < i:
        mx = i
print(mx)