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
import random #number 1,2,3,4,5,6,7,8,9


selection = random

number = [1,2,3,4,5,6,7,8,9]

def board():
    print(f" {number[0]} | {number[1]} | {number[2]} ")
    print(f"---+---+---")
    print(f" {number[3]} | {number[4]} | {number[5]}")
    print(f"---+---+---")
    print(f" {number[6]} | {number[7]} | {number[8]} ")

board()



def player():
    x = int(input("Pick a number to place the X 1-9: "))
    number[x-1] = "X"
    board()
    check_win()

def computer():
    o = random.randint(1,9)
    number[o-1] = "O"
    board()
    check_win()


while number:
    player()
    print("The computers turn")
    computer()
    check_win()



def get_bot_move(board):
    possible_moves = [i for i,x in enumerate(board)]