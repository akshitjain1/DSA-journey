# 1. Print squares of numbers from 1 to n
def print_squares():
    number = int(input("Enter a number: "))
    for i in range(1, number + 1):
        print(f"Square of {i} is {i * i}")
    print("End of Program")

# 2. Print lowercase and uppercase alphabets
def print_alphabets():
    for i in range(26):
        ch = chr(ord('a') + i)
        print(ch, end=" ")
    print()
    for ch in range(ord('A'), ord('Z') + 1):
        print(chr(ch), end=" ")
    print()

# 3. Print numbers from n to 1
def print_reverse():
    number = int(input("Enter a number: "))
    for i in range(number, 0, -1):
        print(i, end=" ")
    print()

# 4. Print numbers from 1 to n with step 3
def print_step3():
    number = int(input("Enter a number: "))
    for i in range(1, number + 1, 3):
        print(i, end=" ")
    print()

# 5. Print multiplication table of a number
def print_table():
    number = int(input("Enter a number: "))
    for i in range(1, 11):
        print(f"{number} X {i} = {number * i}")

# 6. Calculate power of a number
def calc_power():
    number = int(input("Enter a number: "))
    power = int(input("Enter the power: "))
    n = number
    for i in range(1, power):
        n *= number
    print(f"The result is: {n}")

# 7. Sum of first n natural numbers
def sum_natural():
    n = int(input("Enter a number: "))
    print(f"The sum of first {n} numbers is: {(n * (n + 1)) // 2}")

# 8. Factorial of a number
def factorial():
    n = int(input("Enter a number: "))
    fact = 1
    if n == 0:
        print("The factorial of 0 is: 1")
    else:
        for i in range(1, n + 1):
            fact *= i
        print(f"The factorial of {n} is: {fact}")

# 9. Check if a number is prime
def is_prime():
    n = int(input("Enter a number: "))
    if n <= 2:
        print("Number is not prime")
    else:
        for i in range(2, n // 2 + 1):
            if n % i == 0:
                print("Number is not prime")
                break
        else:
            print("Number is prime")

# 10. Print Fibonacci sequence up to n terms
def fibonacci():
    num1, num2 = 0, 1
    n = int(input("Enter the number of terms: "))
    for _ in range(n):
        print(num1, end=" ")
        num1, num2 = num2, num1 + num2
    print()

# Example usage:
# Uncomment the function you want to run
# print_squares()
# print_alphabets()
# print_reverse()
# print_step3()
# print_table()
# calc_power()
# sum_natural()
# factorial()
# is_prime()
# fibonacci()
