
from enum import Enum


# class Season(Enum):
#     SPRING = 1
#     SUMMER = 2
#     AUTUMN = 3
#     WINTER = 4

# seas = Season.SPRING
# print(seas)

# if seas == Season.SPRING:
#     print("Spring")


# print(list(Season))

Season = Enum('Season', 'SPRING SUMMER AUTUMN WINTER', start =1)
seas = Season.SUMMER
print(seas)

if seas == Season.WINTER:
    print("Summer")

for seas in Season:
    print("")
