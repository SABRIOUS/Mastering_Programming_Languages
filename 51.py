# template for "Guess the number" mini-project
# input will come from buttons and an input field
# all output for the game will be printed in the console

import simplegui
import random

num_range = 100
remain_guess = 7
secret_num = 100
# helper function to start and restart the game
def new_game():
    global  secret_num,num_range
    secret_num = random.randrange(0,num_range)
    print("New game.Range is from 0 to",num_range)
    print()


# define event handlers for control panel
def range100():
    global num_range
    num_range = 100
    new_game()



def range1000():
    global num_range,remain_guess
    num_range = 1000
    remain_guess = 10
    new_game()


def input_guess(guess):
    global remain_guess,secret_num
    print(f"Guess was {guess}")

    if remain_guess == 0:
        print("You ran out of guess. The number was",secret_num)
        new_game()
        print()
    elif int(guess) > secret_num:

        print(f"Number of remaining guesses is {remain_guess}")
        remain_guess -= 1
        print("Higher")
        print()
    elif int(guess) < secret_num:

        print(f"Number of remaining guesses is {remain_guess}")
        remain_guess -= 1
        print("Lower")
        print()
    if int(guess) == secret_num:
        print("Correct")
        remain_guess = 7
        print()
        new_game()


# create frame

f = simplegui.create_frame("Guess the number",200,200)
# register event handlers for control elements and start frame
f.add_button("Range is [0,100)",range100,200)
f.add_button("Range is [0,1000)",range1000,200)
f.add_input("Enter a guess",input_guess ,200)

# call new_game
print()
new_game()
print()

# always remember to check your completed program against the grading rubric
