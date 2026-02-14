# AW MB p7 team game


import random #number 1,2,3,4,5,6,7,8,9

#AW


number = [1,2,3,4,5,6,7,8,9]
print("Hello new playerrrrr! lets play TIC TAC TOEEEEEEEE!!")
def board():
   print(f" {number[0]} | {number[1]} | {number[2]} ")
   print(f"---+---+---")
   print(f" {number[3]} | {number[4]} | {number[5]}")
   print(f"---+---+---")
   print(f" {number[6]} | {number[7]} | {number[8]} ")

#MB

def player():
   while True:
       move = input("Pick a number where to put the X please!: ")


       if move.isdigit():
           move = int(move)


           if 1 <= move <=9:
               if number[move-1] != "X" and number[move-1] != "O":
                   number[move-1] = "X"
                   board()
                   break
               else:
                   print("spot is already taken plase pick something new!")
           else:
               print("chose only numbers 1 through 9 please!!!!")
       else:
           print("Numbers only!!!!!")

#AW&MB


def computer():
   while True:
           o = random.randint(1,9)
           if number[o-1] != "X" and number [o-1] != "O":
               number[o-1] = "O"
               print("computer chose....:")
               break


def check_winner(player):
   win_conditions = [(0,1,2), (3,4,5), (6,7,8), (0,3,6,), (1,4,7),
                     (2,5,8), (0,4,8), (2,4,6)]
  
   for a,b,c in win_conditions:
       if number[a] == number[b] == number[c] == player:
           return True
   return False

#MB


while True:
   number=[1,2,3,4,5,6,7,8,9]
   while True:
       board()
       player()
       if check_winner("X"):
           print("PLAYER WINS HURRAY!!")
           break
       computer()
   if check_winner("O"):
           print("COMPUTER WINS LOSERRRR")
           break
   again = input("That was fun! wanna play again?: ").lower()
   if again != "yes":
       print("ill take that as a no :( byeeeeee!")
       break

#AW