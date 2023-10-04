#Python version of Distance function

def distance(velocity, time):
    return velocity/2 * time

def main():
    x = distance(10,2)
    print("Position = ",x)

main()