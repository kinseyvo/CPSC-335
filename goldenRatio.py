# Programmed by Rich Bui and Kinsey Vo

import math

def fib_series(n):
    """Function for creating the fibonacci number (Equation 3)"""
    fn = int(((1 + math.sqrt(5))**n - (1 - math.sqrt(5))**n) / (2**n * math.sqrt(5)))
    return fn

def previous_fib_num(n, p):
    """Finding the previous fibonacci number (Equation 4)"""
    if (p % 2) == 0:
        fn = int(math.ceil(fib_series(p) * ((1 + math.sqrt(5)) / 2)**(n - p)))
    else:
        fn = int(fib_series(p) * ((1 + math.sqrt(5)) / 2)**(n - p))
    return fn

def next_fib_num(n):
    """Finding the next fibonacci number (Equation 5)"""
    if (n == 0):
        fn = int((1 + math.sqrt(5)) / 2)
    elif (n % 2) == 0:
        fn = int(math.ceil(fib_series(n) * ((1 + math.sqrt(5)) / 2)))
    else:
        fn = int(fib_series(n) * ((1 + math.sqrt(5)) / 2))
    return fn

# Creating a list to store the fibonacci numbers
fibonacci_list = list()

while(True):
    p = int(input("Enter a non-floating point positive integer p: "))
    n = int(input("Enter a non-floating point positive integer n: "))

    if (n < 0 or p < 0):
        print("Number must be positive")
    elif (p > n):
        print("n must be greater than p")
    elif (isinstance(n, int) == False):
        print("Number must be an integer")
    elif (isinstance(p, int) == False):
        print("Number must be an integer")
    else:
        break

# Getting the first 20 terms of the sequence
for i in range(0, 19):
    fibonacci_list.append(fib_series(i))

print(f"\nThe first 20 terms of the fibonacci sequence is: {fibonacci_list}\n")
print(f"The previous fibonacci number for the {str(n)}th term is: {previous_fib_num(n, p)}\n")
print(f"The next fibonacci number for the {str(n)}th term is: {next_fib_num(n)}\n")