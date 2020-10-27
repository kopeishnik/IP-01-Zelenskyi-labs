m = int(input("Enter a value of M:")) #вводимо m
n = int(input("Enter a value of N:")) #вводимо n
if n == 0:
    print("N should not equal 0") #виводимо помилку якщо n=0
else:
    total = m/n
    firstfr = (total * 10) % 10 #рахуємо першу цифру дробової чистини
    lastint = total % 10 #рахуємо останню цифру цілої частини
    print("The first digit of the fractional part: ", int(firstfr))
    print("The last digit of the integer part: ", int(lastint))
    