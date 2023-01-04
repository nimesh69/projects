import random
word_list = ["ardvark", "baboon", "camel"]
stages = ['''
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========''', '''
  +---+
  |   |
  O   |
  |   |
      |
      |
=========
''', '''
  +---+
  |   |
  O   |
      |
      |
      |
=========
''', '''
  +---+
  |   |
      |
      |
      |
      |
=========
''']
choosen_word = random.choice(word_list)
print(choosen_word)
choosen_word_len = len(choosen_word)
# print(type(guess))
# print(type(choosen_word_len))
display = []
guess_word = []
for i in range(0, choosen_word_len):
    display += "_"
print(f"Word has {choosen_word_len} letter")
print(display)
eof = True
lives = 6
count = 0
while eof:
    guess = input(
        "Guess a letter to see wether it is in the string or not: ").lower()
    guess_word += guess
    if (count > 0):
        for i in range(0, len(guess_word)):
            if (guess_word[i] == guess):
                print("The word is already guessed!")
            else:
                for i in range(0, choosen_word_len):
                    if (choosen_word[i] == guess):
                        # display[i]=choosen_word[i]
                        display[i] = guess
                print(display)
                if guess not in choosen_word:
                    print(stages[lives])
                    lives -= 1
                    print(f"You have {lives} lives left.")
                    if lives < 0:
                        print("You loose")
                        eof = False
                if "_"not in display:
                    eof = False
                    print("You Win")
    else:
        for i in range(0,choosen_word_len):
            if(choosen_word[i]==guess):
                display[i]=guess
        print(display)
        if guess not in choosen_word:
            print(stages[lives])
            lives-=1
            print(f"You have {lives} lives left.")
    count += 1
# print(guess_word)
