# Lecture 4

def main():
    a = 10
    b = 10
    if(a > 0 and b > 0):
        print("The numbers are greater than 0\n")

    b = -10
    if (a > 0 or b > 0):
        print("Either of the number is greater than 0\n")

    a = 0
    if (not a):
        print("Boolean value of 'a' is false\n")

    # For loop python
    x = 4
    for x in range(6):
        print(x)

    for x in range(6):
        print(x)
    else:
        print("Finally finished!")

    for x in [0, 1, 2]:
        pass

    # Program to add natural
    # emulator of while loop in python
    #initialize
    n = 11
    sum = 0
    i = 1

    while i <= n:
        sum = sum+1
        i = i+1 #update counter

    print("The sum is ", sum)

# Do loop emulator
#usage of continue and break
    for val in "string":
        if val =="i":
            continue
        print(val)

    for val in "string":
        if val == 'i':
            break
        print(val)

    print("The end")



main()
