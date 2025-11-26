fibo = [0, 1, 1]
for i in range(3, int(input("n = "))+1):
    fibo[0] = fibo[1]
    fibo[1] = fibo[2]
    fibo[2] = fibo[0] + fibo[1]
print(fibo[2])