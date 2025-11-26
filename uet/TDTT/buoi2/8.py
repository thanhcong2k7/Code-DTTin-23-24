import math
a = [float(i) for i in input("Input Toa do diem A: ").split()]
b = [float(i) for i in input("Input Toa do diem B: ").split()]
print(f"Output Khoang cach Euclid: {math.sqrt(pow(a[0]-b[0],2)+pow(a[1]-b[1],2)):.1f}")
print(f"Output Khoang cach Manhattan: {abs(a[0]-b[0])+abs(a[1]-b[1]):.1f}")