#Beginner Magic 8 ball in python
import random

val = "start"

while val != "quit":
    n = random.randint(0, 10)
    val = input("Enter question or quit to quit \n")
    if(val == "quit"):
        print("Exiting...")
    else:
        if (n == 0):
            print("Yes")
        elif (n == 1):
            print("No")
        elif (n == 2):
            print("Maybe")
        elif (n == 3):
            print ("Maybe not")
        elif (n == 4):
            print ("Ask again")
        elif (n == 5):
            print ("Not likely")
        elif (n == 6):
            print("Very likely")
        elif (n == 7):
            print("Ask someone else")
        elif(n == 8):
            print("IDK, I'm not all knowing")
        elif(n == 9):
            print("%$Error$%")
        elif(n == 10):
            print("Ask your inner self")


    

