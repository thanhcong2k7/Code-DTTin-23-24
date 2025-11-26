inp = input("Input Can nang (kg), chieu cao (m): ").split()
a = float(inp[0])
b = float(inp[1])
print(f"Output BMI: {a/(b*b):.2f}")