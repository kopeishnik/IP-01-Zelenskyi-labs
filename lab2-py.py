import math

try:
    x = float(input("Enter a x value:")) #вводимо х
    y = float(input("Enter an y value:")) #вводимо у 
    if -2 > x > 2 and -2 > y > 2:
        print("Input out of range!") #помилка якщо модулі х та у більше 2
        quit()
except(ValueError):
    print("You should input a number!") #помилка якщо неправильний ввід
    quit()
if x > 0 and y > 0: #1 чверть
    y1 = 2-x
    y2 = math.sqrt(4-x*x)
elif x <= 0 and y >= 0: #2 чверть
    y1 = 0
    y2 = x+2
elif x < 0 and y < 0: #3 чверть
    y1 = -math.sqrt(4-x*x)
    y2 = -x-2
else: #4 чверть, x>=0 and y<=0
    y1 = x-2
    y2 = 0
if y >= y1 and y <= y2: #перевірка чи належить у проміжку для заданого х
    print(True)
else:
    print(False)
