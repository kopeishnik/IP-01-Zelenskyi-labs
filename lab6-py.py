def SumOfDivisors(number): #функція для знаходження суми дільників числа
    s = 0
    for j in range(1, number-1):
        if number % j == 0:
            s += j #знаходимо суму дільників числа
    return s

n = int(input("Enter a value of n:")) #просимо ввести межу вимірювання
print("results:")
for i in range (1, n-1):
    sum = SumOfDivisors(i)
    if sum == i: #перевіряємо число на досконалість
        print(i) #виводмио число, якщо воно досконале
