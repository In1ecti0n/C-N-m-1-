from math import*
t = int(input())
while t:
    count = 0
    a = int(input())
    b = factorial(a)
    while b % 10 == 0:
        count += 1
        b /= 10
    t = t - 1
