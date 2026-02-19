print("[Coffee Menu]")
print("1. Americano       : 1500")
print("2. Cafe Mocha      : 2500")
print("3. Green tee latte : 3000\n")

n_americano = int(input("Number of americano : "))
n_cafemocha = int(input("Number of cafe mocha : "))
n_greenteelatte = int(input("Number of green tee latte : "))

total = (n_americano * 1500) + (n_cafemocha * 2500) + (n_greenteelatte * 3000)


print("\nTotal :", total)
