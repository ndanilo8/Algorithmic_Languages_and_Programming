#arrays in python
# Danilo Nascimento; M6O - 111Bki - 21



v = [1, 2, 3]

print(v[2])

vector = [0 for i in range(7)]
print(vector)

for i in range(7):
    vector[i] = 0.3


print(vector)

import array as arr
a = arr.array('i', [1, 2, 3])
for i in range(3):
    print(a[i], end = " ")

print()

b = arr.array('d', [2.5,3.2,3.3])
for i in range(0,3):
    print(b[i], end = " ")

print()

a.insert(1,4)
print(a[1])
print()

b.append(4.4)
print(b[3])


#danilo nascimento 
#lists (arrays in python)

arr1 = [[1,2,3,4], [8,9,10,12]]
print(arr1[0][1])

print("\n")

table = [[0 for i in range(4)] for j in range(5)]
print(table)

print("\n")


for i in range(5):
    for j in range(4):
        table[i][j] = 0.3
print(table)

print("\n")

