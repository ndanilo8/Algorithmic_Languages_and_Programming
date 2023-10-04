
from re import X


a = 9
b = 5
# output
print(a > b)

a = 'cat'
b = 'cot'
# a > b
print('cat > cot is', a > b)

a = 10
b = 20
c = a+b-5
print(c)
print(a+b+7)

def myfunc():
    global x
    x = 300

myfunc()
print(x)


f = 5 
print("\n Type of f", type(f))

c = "c"
print("\n Type of c", type(c))

i = 10
s = "460"
i =i + int(s)
print("\n i=",i)

s += str(i) # s = s + str(i)
print("\n s = ", s)