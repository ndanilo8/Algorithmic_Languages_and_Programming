#function overloading in python

def sum (a,b):
    s = a+b
    print(s)

sum(3,2)

def sum(a,b,c):
    s= a+b+c
    print(s)

sum(5,3,2)


def add(datatype,*args):
    if datatype == 'int':
        answer = 0
    if datatype == 'str':
        answer = ''
    for x in args:
        answer = answer +x
    print("\n", answer)

add('int', 5,6,7)

add('str', 'hi', ' geeks')
    

