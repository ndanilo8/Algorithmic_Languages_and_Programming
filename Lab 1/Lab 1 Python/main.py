# add function
import math
from datetime import *
from dateutil.relativedelta import *

def add(x1,x2):
    return x1+x2

def distance(velocity, time):
    return velocity/2 * time

def main():
    print("Hello World!")
    print("Sum Result = ",add(2.5,5))
    print(math.pi)
    print(datetime.now())
    print("Position = ",distance(10,2))

main()
