salari = float(input("Nhap tien luong (trieu dong): "))
if salari >=11000000:
    min_s = (salari-11000000)/1000000
    print(f"Tien thue phai dong: {min_s*1000000*(0.05 if min_s<5 else (0.1 if 5<min_s<=10 else (0.15 if 10<min_s<=18 else (0.2 if 18<min_s<=32 else 0.25))))} trieu dong")
else:
    print("Khong phai chiu thue.")