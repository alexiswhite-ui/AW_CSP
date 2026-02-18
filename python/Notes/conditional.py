"""number = -18

if number < 10 and number > -10:
    print(f"{number} is a single digit number")
elif abs(number) < 100:
    print(f"{number} is a double digit number")
else:
    print(f"{number} is a triple digit number")

print("End of the program")"""

name = input("What is your name: ").strip().capitalize()

if name == "Aurthur":
    print("Welcome King Aurthur.")
    quest = input("What is your quest: ").strip().title()
    if quest == "Holy Grail":
        print("You may pass. Good Luck!")
    else:
        print(f"{quest} is a lame quest. Get Gooder. ")
else:
    print(f"Hello {name}!")