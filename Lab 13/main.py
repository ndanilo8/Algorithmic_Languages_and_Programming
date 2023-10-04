# build a binary tree

class Node:
    def __init__(self,name):
        self.name = name
        self.left = None
        self.right =None
    
    def PrintTree(self):
        print(self.name)

root = Node(0)

root.PrintTree

root.left = Node(1)
root.right = Node(2)


class Student:
    def __dir__(self) -> Iterable[str]:
        pass
    def __init__(self, name, group, test, final = 0, grade = 0):
        self.name =name
        self.group = group
        self.test =test
        self.final = final
        self.grade = grade

    def myfunc(self):
        print("hello my name is "+self.name)

Lisa = Student ('Lisa', 'A', [5,4,5])
print(Lisa.name,Lisa.group, " test 1 = ", Lisa.test[0])
Lisa.myfunc()

Bart = Student ('Bart', 'A', [4,4,5])
print(Bart.name,Bart.group, " test 1 = ", Bart.test[0])
Bart.myfunc()

Homer = Student ('Homer', 'A', [3,4,4])
print(Homer.name,Homer.group, " test 1 = ", Homer.test[0])
Homer.myfunc()

class Card:
    def __init__(self,pips,suit):
        self.pips =pips
        self.suit =suit
# Build a deck of cars
deck = []
deck.append(Card(0,"Hearts"))
deck.append(Card(1,"Hearts"))
deck.append(Card(2,"Hearts"))

for obj in deck:
    print(obj.pips,obj.suit)


