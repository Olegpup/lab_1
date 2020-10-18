print("Бутирський Олег ІС-01")
x = float(input("Enter the ccc.ddd number: \n"))
i = (x % 1)*1000
f = (x // 1)/1000
print(round(i + f, 3))