# AW p7 team game

'''import random #4 letter word
print("  ------")
print("  |     |")
print("  |")
print("  |")
print("  |")
print("  |")
print("_____")

def guess(letter):
    return f"{letter}"
print(guess().random) 

'''

number = [1,2,3,4,5,6,7,8,9]
    
print(f" {number[0]} | {number[1]} | {number[2]} ")
print(f"---+---+---")
print(f" {number[3]} | {number[4]} | {number[5]}")
print(f"---+---+---")
print(f" {number[6]} | {number[7]} | {number[8]} ")

x = int(input("Pick a number to place the X: "))

number[x-1] = "X"

print(f" {number[0]} | {number[1]} | {number[2]} ")
print(f"---+---+---")
print(f" {number[3]} | {number[4]} | {number[5]}")
print(f"---+---+---")
print(f" {number[6]} | {number[7]} | {number[8]} ")

while 