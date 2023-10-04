
def factorial (n):
    if n <= 1:
        return n
    else:
        return n*factorial(n-1)

# take input from the user
num = int(input("Enter a number: "))
if num < 0:
    print("Sorry, factorial doesn't exist for negative numbers")
elif num == 0:
    print("Factorial of 0 is 1")
else:
    print(" The Factorial of",num, "is", factorial(num))


c=(lambda x:x+1) (2)
print(c)

a = lambda x:x+1
print(a(2))

b = lambda x,y:x+y
print(b(2,3))


def add_one(x):
    return x+1