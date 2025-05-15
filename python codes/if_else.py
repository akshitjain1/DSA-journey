# 1. Check if a number is even or odd
a = int(input("Enter a number: "))
if a % 2 == 0:
    print("The number is even.")
else:
    print("The number is odd.")

# 2. Grade based on marks
marks = int(input("Enter your marks: "))
if marks >= 90:
    print("Grade: A")
elif marks >= 80:
    print("Grade: B")
elif marks >= 70:
    print("Grade: C")
elif marks >= 60:
    print("Grade: D")
else:
    print("Grade: F")

# 3. Compare marks of two subjects
mark1 = int(input("Enter marks for subject 1: "))
mark2 = int(input("Enter marks for subject 2: "))
if mark1 > mark2:
    print("Subject 1 has the highest marks.")
elif mark2 > mark1:
    print("Subject 2 has the highest marks.")
else:
    print("Both subjects have the same marks.")

# 4. Check voting eligibility
age = int(input("Enter your age: "))
if age > 18:
    print("You are eligible to vote.")
elif age == 18:
    print("You are just eligible to vote.")
else:
    print("You are not eligible to vote.")

# 5. Check if a character is a vowel or consonant
a = input("Enter a character: ")
if a in 'AEIOUaeiou':
    print("The character is a vowel.")
else:
    print("The character is consonant.")
