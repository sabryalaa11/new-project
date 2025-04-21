from http.client import BAD_GATEWAY
import math
from os import remove
import time
import random
import os

from sympy import false
# first_name = "BRO"
# food = "pizza"

# print (f"hello {first_name}")
# print (f"the food is {food}") #f-strings تعتبر أسرع من الطرق الأخرى لتنسيق السلاسل النصي
# print ("hello " + first_name) #الطريقة الأولى
# print ("the food is " + food) #الطريقة الثانية

# age = 19
# price = 10.99

# print (f"Your age {age} years old")
# print ("Your age " + str(age) + " years old")
# print ("############################")
# print (f"your price is {price} $")
# print ("Your price is " + str(price) + " $" )
# print ("############################")
# is_student = False
# print (f"Are you a student?: {is_student}")
# if is_student:
#     print("You are a student")
# else:
#     print("You are NOT a student")


# name = "saleh"
# price = 19
# print(type(name))
# print(type(price))
# print(float(price))

# name = input("Wate is Your Name: ")
# age = input("What is Your Age: ") #string

# age = int (age)
# age+=1

# print(f"Hello, {name}!")
# print(f"Your age is {age}")

# l = float(input("pleas Enter your length-> "))
# w = float(input("pleas Enter your width-> "))

# A = l * w
# print(f"The area of rectangle is {A}cm²") #cm² -> Numlock + ALT + 0178

# f = 2
# f = f ** 3 # ** pow 
# print(f)
# p = 5.12
# x = -3
# y = 2
# z = 9
# r = round(p) # round-> print a decimal number
# r = abs(x) # Return the absolute value of the argument.
# r = max(p , x , y , z) # max number
# r = min(p , x , y , z) # min number
# print (r)

###### M A T H ######
# print(math.pi)
# print(math.e)
# r = math.sqrt(z)
# r = math.ceil(p) # Return the ceiling of x as an Integral. 9.1 -> 10  
# r = math.floor(p) # Return the floor of x as an Integral.  9.1 -> 9

# A =float(input("Enter a value of a-> "))
# B = float(input("Enter a value of b-> "))
# c = math.sqrt(pow(A , 2) + pow(B , 2))

# print(f"The length of the hypotenuse is {c}")

#!

# while True:
#      A = int(input("Enter a value of mark the exam: "))

#      if A >= 90:
#         print("Grade: A")

#      elif A >= 80:
#         print("Grade: B")

#      elif A >= 70:
#         print("Grade: C")

#      elif A >= 60:
#         print("Grade: D")
    
#      else:
#         print("Grade: F")

#      choice = input("Do you want to continue (yes/no)? ")
#      if choice.lower() != "yes":
#         break

# while True:
#     a = float(input("Enter a value of num1: "))
#     b = float(input("Enter a value of num2: "))
#     c = input("Enter an operation (+, -, *, /): ")

#     if c == "+":
#         r = a + b
#     elif c == "-":
#         r = a - b
#     elif c == "*":
#         r = a * b
#     elif c == "/":
#         if b == 0:
#             print("Error: Division by zero!")
#             continue  
#         r = a / b
#     else:
#         print("Error: Invalid operation!")
#         continue  

#     print(f"The result of {a} {c} {b} is: {r}")
    
#     choice = input("Do you want to continue (yes/no)? ")
#     if choice.lower() != "yes":  # Check for 'yes' in a case-insensitive manner
#         break
# num = 4
# print("Even" if num % 2 == 0 else "odd")
# print("postive" if num > 0 else "negtive")

#string method
# name = input("Enter your full name: ")
# print(len(name)) # Return the number of items in a containe
# print(name.find("s")) # Return the lowest index -> اول بوسشن للحرف
# print(name.rfind("a")) # Return the highest index -> اخر بوسشن للحرف
# print(name.upper()) # Return a copy of the string converted to uppercase
# print(name.lower()) # Return a copy of the string converted to lowercase.


# username = input("Enter a username: ")
# if len(username) > 12 :
#     print ("the username cant be more than 12 ch.")
# elif not username.find(" ") == -1:
#     print ("the username cant contain spaces.")
# elif not username.isalpha():
#     print ("the username cant contain numbers.")
# else:
#     print(f"welcome {username}")


# price1 = 3150.1839
# price2 = 5457.98
# price3 = 1200.53

# print(f"price 1 is {price1:+,.3f}")
# print(f"price 2 is {price2:+,.3f}")
# print(f"price 3 is {price3:+,.3f}")

# #output
# # price 1 is +3,150.184
# # price 2 is +5,457.980
# # price 3 is +1,200.530

# age  = int(input("Enter your age: "))

# while age < 0:
#     print("Error: Age cannot be negative!")
#     age = int(input("Enter your age again: "))

# print(f"you are {age} years old❤️")


#for loop
# for x in range(5):
#     for y in range(5):
#         print(f"({x},{y})")
    
# for i in (range(1,10,2)): #بيزيد بمقدار 2
#     print(i)
    
# for i in range(1 , 10):
#     if i % 2 == 0:
#         continue
#     else:
#         print(i)

x = 5
y = 4

print("BEFORE SWAP")
print(f"x = {x}")
print(f"y = {y}")
print("AFTER SWAP")
x , y = y , x # swapping
print(f"x = {x}")
print(f"y = {y}")


    
# my_time = int(input("Enter your time in second: "))

# for x in reversed(range(0 , my_time)):
#     second = x % 60
#     minutes = int(x / 60) % 60
#     hours = int(x / 3600)
#     print(f"{hours:02}:{minutes:02}:{second:02}")
#     time.sleep(1) #1 -> number of second
    
# print("Time is up!")
    
    
# list in python
#           index->   0       1          2     3
# lang_programming = ["c++" , "python" , "java" ,"c"] #list
# print(lang_programming)
# print(lang_programming[0:4])
# print(lang_programming[::-1]) # reversed list



# lang_programming.insert(0 , "Rube")
# lang_programming.append("swift")
# lang_programming.sort()
# lang_programming.reverse()
# print(lang_programming)


# set in python
# lang_programming = {"c++" , "python" , "java" ,"c" , "c"}
# print(len(lang_programming))
# lang_programming.add("Rube")
# print(lang_programming) # لا تسمح بطباعه لغه متكرره


# Tuple in python
# lang_programming = ("c++" , "python" , "java" ,"c")
# # print(dir(lang_programming))
# lang_programming.add("Rube")
# print(lang_programming)

#2D list

# g = [["apple" , "orange" , "banana"] , 
#     ["fish" , "chicken" , "carrots"]]

# print(g[1][1]) #apple

# for i in g:
#         print(i)


#python Quiz game

# Questions = ("Which language is commonly used for web development with the Django framework?",
#             "Which of the following languages is primarily used for Android development?",
#             "Which of the following is NOT a programming language?",
#             "Which of the following is considered a low-level programming language?",
#             "Which language is commonly used for Artificial Intelligence development?")

# options = (("A. java" , "B. c++" , "C. python" , "D. PHP") , 
#             ("A. swift" , "B. Kotin" , "C. Ruby" , "D. JavaScript"),
#             ("A. HTML" , "B. java" , "C. Python" , "D. c++"),
#             ("A. Python" , "B. c" ,"C. javaScript" , "D. Ruby"),
#             ("A. Python" , "B. SQL" , "C. PHP" ,"D. CSS"))

# answer = ("C" , "B" , "A" , "C" , "A")
# guesses = []
# score = 0
# Question_num = 0

# for Q in Questions:
#     print("----------------------")
#     print(Q)
#     for O in options[Question_num]:
#         print(O)

#     guess = input("Enter (A , B , C , D) : ").upper()
#     guesses.append(guess)
#     if guess == answer[Question_num]:
#         score += 1
#         print("Correct❤️")
#     else:
#         print("INCORRECT😒")
#         print(f"Wrong! The correct answer is {answer[Question_num]}")
        
#     Question_num += 1

    
# print("-----------------------")
# print("        RESULTS        ")
# print("-----------------------")

# print("answers: " , end="")
# for A in answer:
#     print(A, end=" ")
# print()

# print("guesses: " , end="")
# for G in guesses:
#     print(G, end=" ") 
# print()

# score = int(score / len(Questions) * 100)
# print(f"Your score is: {score} %")


#dictionaries[concession stand program]
#         key      value
# menu = {"pizza" : 3.00
#         , "burger" : 4.50
#         , "fries" : 2.00
#         , "nachos" : 1.50
#         , "dessert" : 3.50
#         , "cookies" : 1.00
#         ,"lemonade" : 4.25
#         ,"soda" : 5.00}

# cart = []
# total = 0
# print("---------- MENU ----------")
# for key , value in menu.items():
#     print(f"{key:8} : {value:.2f} $") # 8 -> space of print
    
# while True:
#     food = input("Select an item of menu (q to Exit): ")
#     if food.lower() == "q":
#         break
#     elif menu.get(food) is not None:
#         cart.append(food)

# for food in cart:
#     total += menu.get(food)
#     print(food , end=" ")
    
# print()
# print(f"Total is: {total} $")


#Random
# optioals = ("c++" , "java" , "python")
# print(random.choice(optioals))
# print(random.randint(0 , 10))

#function

# def Happy(name , age):
#     print("Hello saleh alaa")
#     print(f"sabry alaa love you {name}")
#     print("Hello BRO")
#     print(f"Your age is {age} years old")
    

# name = "BRO" 
# age = 20
# Happy(name , age)

# def add(x , y):
#     z = x + y 
#     return z

# def sub(x , y):
#     z = x - y
#     return z

# def mul(x , y):
#     z = x * y
#     return z

# def div(x , y):
#     z = x / y
#     return z

# x = int(input("Enter a value of x: "))
# y = int(input("Enter a value of y: "))

# print(f"The sum of {x} and {y} is {add(x , y)}")
# print(f"The sub of {x} and {y} is {sub(x , y)}")
# print(f"The mul of {x} and {y} is {mul(x , y)}")
# print(f"The div of {x} and {y} is {div(x , y)}")


# *args
# def display_name(*names):
#     for name in names:
#         print(name , end=" ")
        
        
# display_name("sabry" , "alaa" , "aldien")
# def sum(*x):
#     total = 0
#     for n in x:
#         total += n
#     return total


# print(sum(1,2,3,4,5))


# Iterables
# my_num = {"A" : 1 , "B": 2 , "C":  3}

# for key, value in my_num.items():
#     print(key , value)





# membership operators(in and not in)
# word = "apple"

# letter = input("Guess a letter in the word: ")

# if letter not in word:
#     print("Correct guess!")
# else:
#     print("Incorrect guess!")



# list comprehension
# fruits = ["apple" , "orange" , "banana" , "coconut"]
# f = [fruit[0] for fruit in fruits] #['p', 'a', 'n', 'c']
# print(f)

# numbers = [1 , -2 , 3 , -4 , 5 , -6]
# postive_number = [num for num in numbers if num > 0]
# print(postive_number)



# switch
# def day_of_week(day):
#     match day:
#         case 1:
#             return "Sunday"
#         case 2:
#             return "Monday"
#         case 3:
#             return "Tuesday"
#         case 4:
#             return "Wednesday"
#         case 5:
#             return "Thursday"
#         case 6:
#             return "Friday"
#         case 7:
#             return "Saturday"
#         case _:  # default case
#             return "Invalid day number"
    
# day = int(input("Enter a day number (1-7): "))
# print(day_of_week(day))



# Banking program

# def show_Balance(balance):
#     print("*********************")
#     print(f"Your current balance is: {balance} $")
#     print("*********************")
    
# def deposit(balance):
#     print("*********************")
#     Amount = float(input("Enter an amount to be deposited: "))
#     balance += Amount
#     print(f"Your new balance is: {balance} $")
#     print("*********************")
#     return balance

# def withdraw(balance):
#     print("*********************")
#     Amount = float(input("Enter an amount to be withdrawn: "))
#     if Amount <= balance:
#         balance -= Amount
#         print(f"Your new balance is: {balance} $")
#     else:
#         print("Insufficient funds!")
#     print("*********************")
#     return balance

# def exit_program():
#     print("Thank you for using our banking program!")
#     print("Goodbye!")
#     exit()

# print("*********************")
# print("  Banking Program    ")
# print("*********************")

# balance = 0

# options =  ("1: show Balance", 
#             "2: Deposit", 
#             "3: Withdraw", 
#             "4: Exit")

# while True:
#     for i in options:
#         print(i)
        
#     user_choice = int(input("Enter your choice(1-4): "))

#     if user_choice == 1:
#         show_Balance(balance)
#     elif user_choice == 2:
#         balance = deposit(balance)
#     elif user_choice == 3:
#         balance = withdraw(balance)
#     elif user_choice == 4:
#         exit_program()
#     else:
#         print("Invalid choice!")
#         print("Goodbye!")
#         exit()

# oop 

# class year:
#     def __init__(self, day, month, year): #constructor
#         self.day = day
#         self.month = month
#         self.year = year
#     def print(self):
#         print(f"the day is A{self.day}")
#         print(f"the month is {self.month}")
#         print(f"the year is {self.year}")
#     def pr(self):
#         print(f"{self.day} / {self.month} / {self.year}")
        
# p1 = year(10, 9, 2005)
# p1.pr()


#Inheritance
# class Animal:
#     def __init__(self, name):
#         self.name = name

#     def speak(self):
#         print(f"{self.name} makes a generic sound")


# class Dog(Animal):  # Class names should use CamelCase
#     def speak(self):  # Override the speak method for dogs
#         print(f"{self.name} barks: Woof woof!")


# class Cat(Animal):  # Class names should use CamelCase
#     def speak(self):  # Override the speak method for cats
#         print(f"{self.name} meows: Meow meow!")


# # Create instances with more descriptive names
# generic_animal = Animal("Unknown Animal")
# my_dog = Dog("Rex")
# my_cat = Cat("Whiskers")

# # Call the speak method for each animal
# generic_animal.speak()
# my_dog.speak()
# my_cat.speak()






# Encapsulation
# __balance -> the attribute is private

# class Bank:
#     def __init__(self , balance):
#         self.__balance = balance
    
#     def deposit(self , amount):
#         self.__balance += amount
#         print(f"Deposited  {amount} . New Balance {self.__balance}")

#     def withdraw(self , amount):
#         if amount <= self.__balance:
#             self.__balance -= amount
#             print(f"Withdrew {amount}. New balance: {self.__balance}")
#         else:
#             print("Insufficient balence")

#     def get_balance(self):
#         return self.__balance
    

# account = Bank(1000)
# account.deposit(500)
# account.withdraw(300)
# print(f"New Balance {account.get_balance()}")




#Polymorphism

# class Animal:
#     def speak(self):
#         print("This animal makes a sound")

# class Dog(Animal):
#     def speak(self):  # Override the speak method
#         print("Woof!")

# class Cat(Animal):
#     def speak(self):  # Override the speak method
#         print("Meow!")

# # Function to demonstrate polymorphism
# def make_animal_speak(animal):
#     animal.speak()

# # Create objects
# dog = Dog()
# cat = Cat()

# # Call the function with different objects
# make_animal_speak(dog)  # Output: Woof!
# make_animal_speak(cat)  # Output: Meow!




# calss super() -> allows you to call methods from a parent (superclass) in a child (subclass)
# class Animal:
#     def __init__(self, name):
#         self.name = name
#         print(f"Animal created with name: {self.name}")

# class Dog(Animal):
#     def __init__(self, name, breed):
#         super().__init__(name)  # Call the parent class's __init__
#         self.breed = breed
#         print(f"Dog created with breed: {self.breed}")

# # Create an object
# dog = Dog("Buddy", "Golden Retriever")



#class of time

# class Time:
#     def __init__(self , hours , minute , second):
#         self.__hours__ = hours
#         self.__minute__ = minute
#         self.__second__ = second

#     def ho(self):
#         return  self.__hours__
    
#     def min(self):
#         return self.__minute__
    
#     def sec(self):
#         return  self.__second__

#     def print(self):
#         print(f"{self.__hours__} : {self.__minute__} : {self.__second__}")



# T = Time(10 , 30 , 50)
# T.print()



# static method
# class Math:
#     staticmethod #dont need a object
#     def add(a, b):
#         return a + b
    
# print(Math.add(3 , 5))



# Magic Methods 🌟

# class Book:
#     def __init__(self, title, author, publication_year):
#         self.title = title
#         self.author = author
#         self.publication_year = publication_year

#     def __str__(self):
#         return f"{self.title} by {self.author}, published in {self.publication_year}"
    

# book1 = Book("To Kill a Mockingbird", "Harper Lee", 1960)
# print(book1)  # Output: To Kill a Mockingbird by Harper Lee, published in 1960


# decorator

# def my_decorator(func):
#     def wrapper():
#         print("Something before...")
#         func()
#         print("Something after...")
#     return wrapper

# @my_decorator
# def say_hello():
#     print("Hello!")

# say_hello()
# # الناتج:
# # Something before...
# # Hello!
# # Something after...


#  Exception handling (ZeroDivisionError , TypeError , valueError)
    # 1- try  2- except 3- finally

# try:
#     Number = int(input("enter a mumber->"))
#     print(1 / Number)
# except Exception as e:
#     print(f"An unexpected error occurred: {e}") 

# finally:
#     print("This code will always run")

# Checking if the file exists before reading it #
# path in the file
# file_path = 'test.txt'

# if os.path.exists(file_path):
#     print(f"The file '{file_path}' exists.")
# else:
#     print(f"The file '{file_path}' does not exist.")



# write the file #
# # تعريف متغير يحتوي على النص الذي سيتم كتابته في الملف
# file_data = "Hello, world! iam saleh mohamed alaa"

# # تعريف متغير يحتوي على مسار واسم الملف الذي سيتم إنشاؤه
# file_path = 'test.txt'

# # استخدام جملة with لفتح الملف بوضع الكتابة ('w')
# # هذه الطريقة تضمن إغلاق الملف تلقائياً بعد الانتهاء من العمليات داخل الكتلة
# with open(file_path, 'w') as file:
#     # كتابة المحتوى المخزن في متغير file_data إلى الملف
#     file.write(file_data)
    
#     # طباعة رسالة تأكيد بأن الملف قد تم إنشاؤه
#     # استخدام f-string للتنسيق وإدراج اسم الملف في الرسالة
#     print(f"The file '{file_path}' has been created.")



# Read the file
# Reading from a file in Python
# file_path = 'test.txt'

# # Method 1: Reading the entire file as a single string
# with open(file_path, 'r') as file:
#     content = file.read()
#     print("File content:")
#     print(content)

# print("=" * 30) #print 30 =

# # # Method 2: Reading the file line by line
# with open(file_path, 'r') as file:
#     print("Reading file line by line:")
#     for line in file:
#         print(line.strip())  # strip() removes any extra whitespace or newlines

# print("=" * 30)

# # # Method 3: Reading the file as a list of lines
# with open(file_path, 'r') as file:
#     lines = file.readlines()
#     print("Reading file as a list of lines:")
#     for i, line in enumerate(lines, 1):
#         print(f"Line {i}: {line.strip()}")

# print("=" * 30)

# # # Method 4: Reading a specific number of characters
# with open(file_path, 'r') as file:
#     first_10_chars = file.read(10)  # Read only the first 10 characters
#     print("First 10 characters from the file:")
#     print(first_10_chars)

# print("=" * 30)


#   datatime   #

# Get current date
# Nowdata = datetime.date.today()
# print(Nowdata)

# # Get current date and time
# timenow = datetime.datetime.now()
# print(f"Now data {timenow.strftime('%H:%M:%S')}")



   # multthread #
# def task(name, delay):
#     """Function that will be executed by each thread"""
#     print(f"Thread {name} started")
#     time.sleep(delay)  # Simulate some work
#     print(f"Thread {name} finished after {delay} seconds")

# # Create multiple threads
# thread1 = threading.Thread(target=task, args=("A", 2))
# thread2 = threading.Thread(target=task, args=("B", 4))
# thread3 = threading.Thread(target=task, args=("C", 1))

# # Start the threads
# print("Starting threads...")
# thread1.start()
# thread2.start()
# thread3.start()

# # Wait for all threads to complete
# thread1.join()
# thread2.join()
# thread3.join()

# print("All threads have finished execution")








