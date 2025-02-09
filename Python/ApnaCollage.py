# 1.

# Name = "Faysal"
# Age = 22
# Name = "Faysal Ahmed"
# print(Name)
# print(Age)


# 2.
# Name= input("What is your name? ")
# print("Hello " + Name)

# 3.                          [Type Conversion/Casting]--> int(f_num) & float(new_num)

# f_num = input("Enter first number: ")
# new_num= int(f_num) + 4
# print(float(new_num))


# 4.

# First = input("Enter first number: ")
# Second = input("Enter second number: ")
# sum = First + Second
# print(sum) # First and Second value is taken as it is a string. So, it will concatenate the two values.


# 4 Solution:

# First = input("Enter first number: ")
# Second = input("Enter second number: ")
# sum = int(First) + int(Second)
# print(sum) # First and Second value is converted into integer. So, it will add the two values.


# 5.                    [Type Casting]

# First = input("Enter first number: ")
# Second = input("Enter second number: ")
# sum = int(First) + int(Second)

# print("The Sum is " + str(sum))
# First and Second value is converted into float. So, it will add the two values.


# 6.                           [Methods]

# name = "Faysal"
# name.upper()
# print(name.upper()) 
# print(name.lower())


# 7.                       [Find methods do the index number]
# name = "Faysal"
# print(name.find('s'))
# print(name.find('j'))  #Return position, if not found return -1


# 7.1                               [Exist or not]
# name = "Faysal"
# print('s' in name)
# print('j' in name)


# 8.                                   [Replace]

# name = "Tony Stark Jr"
# print(name)
# print(name.replace("Jr", "Ironman"))


# 9.                               [Arithmetic operarions]

# num =5
# num2 = 4
# print(num + num2)
# print(num - num2)
# print(num * num2)
# print(num / num2)
# print(num // num2) #Floor division

# 10.                            [Remainder operator, modulo]

# num = 4
# print(num % 3)

# 11. [Square]

# print(5 ** 2)


# 12.                                    [Precedence]

# result = print( 7 * 4 + 2 - 6 * 8 - 6) #(7*4-6*8+2-6)


# 13.                                      [True False]

# print(4 > 2)
# print(6 < 4)
# print(3 == 3)
# print(3 != 3)
# print(3 > 2 or 6 < 2) #jekono ekta true holei 'True'
# print(4 < 3 and 5 > 9)
# print(not 8 < 6)
# print(not 4 < 8)


# 14.                                       [Condition]

# gf_name = input("Enter your gf name: " )
# if gf_name == "Jahan":
#     print("Jahan is Faysal's gf :)")
# elif gf_name == "Liya":
#     print("She is the ex of Faysal")
# else:
#     print("It is not the correct name of Faysal's gf.")


# 15.                                  [build calculator]

# in1= input("Enter the first digit: ")
# in2= input("Enter the second digit: ")
# operator = input("Enter the operator(+,-,*,/,%) : ")

# if operator == "+":
#     print("The sum of those value is: " + str(int(in1) + int(in2)))
# elif operator == "-":
#     print("The subtraction of those value is: " + str(int(in1) - int(in2)))
# elif operator == "*":
#     print("The multiplication of those value is: " + str(int(in1) * int(in2)))
# elif operator == "/":
#     print("The division of those value is: " + str(int(in1) / int(in2)))
# elif operator == "%":
#     print("The remainder is: " + str(int(in1) % int(in2))) 
# else: print("Invalide operator.")           


# 16.                                  [Range]
# numbers = range(5)
# print(numbers) #(1,2,3,4) except 5/ last value
#output: (0, 5)


# 17.                                    [Loops]
#                               [ while ]
# i = 1
# while i <= 5:
#     print(i)
#     i = i + 1

# i = 1
# while i <= 5:
#     print(i * "*")
#     i = i + 1
# i = 5
# while i >= 0:
#     print(i * "*")
#     i = i - 1


# 18.                                         [for]
# for item in range(8):
# 	print(item + 1)

# 19.                                      [ List ]

# marks = [ 34, 44, 66]
# print(marks)
# print(marks[0])
# print(marks[-1])  # -1 index means the last index


# marks = [ 34, 44, 66]
# for score in marks:
#     print(score)


# 20.                              [ Set ]   it stores unique values, doesn't count index
# marks = {95, 98, 97, 97, 97}
# print(marks)

# marks = {"English" : 98, "Chemistry" : 99}
# # print(marks["English"])
# marks["Chemistry"] = 95
# print(marks)

# 21.                              [ Tuple ]  immutable, unchangable
# marks = (95, 98, 97, 97, 97)
# print(marks.count(97))
# print(marks.index(97))


# 22.                                [Mix]
# marks = [ 34, 44, 44, 66]
# print(marks.count(44))
# marks.append(45)
# marks.insert(0, 99)
# print(marks)
# print(99 in marks)
# print(len(marks))
# marks.clear()
# print(marks)

# 23.                               [break]    
#           
# Students = ["Ismat", "Jahan", "Lisa", "Faysal"]
# for list in Students:
#     if list == "Faysal":
#         break
#     print(list)

# 24                               [continue]

# Students = ["Ismat", "Jahan", "ajaira", "Lisa", "Faysal"]
# for list in Students:
#     if list == "ajaira":
#       continue
#     print(list)



                                     #****#

# INBUILD FUNCTION  :   [  int(), str(), bool()  ]

# MODULE FUNCTION  :    [ import math ]
# import math
# print(dir(math))

#                                [import sqrt]
# from math import sqrt
# print(sqrt(16))

#                                [import all]
# from math import *
# print(sqrt(16))
