"""
Mikaela-Rose Porter
This program lets the user play Rock-Paper-Scissors against the computer.
The user selects their choice using radio buttons, and the computer randomly
selects its own choice. The result is shown on screen.

Algorithm:
1. Start the program and create the main GUI window using Tkinter.
2. Display a label instructing the user to choose Rock, Paper, or Scissors.
3. Display three radio buttons linked to a variable (`choice_var`) that will store the user’s selected option.
4. Display a Play button that, when clicked, calls the `play_game()` function.
5. Inside the `play_game()` function:
a. Retrieve the user’s selected choice from the radio button variable.
b. If the user has not selected anything, display a message asking them to choose.
c. Randomly select the computer’s choice from the list [Rock, Paper, Scissors].
d. Update the GUI to show the computer’s choice.
e. Compare the user’s choice with the computer’s using conditional logic:
- If both choices match, the result is a tie.
- If the user’s choice beats the computer’s, the user wins.
- Otherwise, the computer wins.
f. Display the result (win, lose, or tie) in the result label.
6. Keep the GUI window open using `root.mainloop()` so the user may play multiple rounds.
7. End.
"""

import tkinter as tk
import random

# Function to determine the winner
def play_game():
    user_choice = choice_var.get()
    if user_choice == "":
        result_label.config(text="Please select an option.")
        return

    computer_choice = random.choice(["Rock", "Paper", "Scissors"])
    computer_label.config(text=f"Computer chose: {computer_choice}")

    # Decide winner
    if user_choice == computer_choice:
        result = "It's a tie!"
    elif (user_choice == "Rock" and computer_choice == "Scissors") or \
         (user_choice == "Paper" and computer_choice == "Rock") or \
         (user_choice == "Scissors" and computer_choice == "Paper"):
        result = "You win!"
    else:
        result = "Computer wins!"

    result_label.config(text=result)

# Create GUI window
root = tk.Tk()
root.title("Rock Paper Scissors Game")
root.geometry("350x250")

# Instructions label
instruction_label = tk.Label(root, text="Choose Rock, Paper, or Scissors:")
instruction_label.pack(pady=10)

# Radio button variable
choice_var = tk.StringVar()
choice_var.set("")

# Radio buttons
rock_rb = tk.Radiobutton(root, text="Rock", variable=choice_var, value="Rock")
paper_rb = tk.Radiobutton(root, text="Paper", variable=choice_var, value="Paper")
scissors_rb = tk.Radiobutton(root, text="Scissors", variable=choice_var, value="Scissors")

rock_rb.pack()
paper_rb.pack()
scissors_rb.pack()

# Play button
play_button = tk.Button(root, text="Play", command=play_game)
play_button.pack(pady=10)

# Display computer choice
computer_label = tk.Label(root, text="Computer chose: ")
computer_label.pack(pady=5)

# Display result
result_label = tk.Label(root, text="", font=("Arial", 12, "bold"))
result_label.pack(pady=10)

# Run the GUI loop
root.mainloop()
