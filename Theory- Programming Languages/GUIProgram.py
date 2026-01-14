import tkinter as tk
from tkinter import messagebox

# Function to display greeting
def show_greeting():
    name = name_entry.get()
    birthday = bday_entry.get()
    zodiac = zodiac_entry.get()

    # Validate input
    if not name or not birthday or not zodiac:
        messagebox.showerror("Input Error", "Please fill in all fields.")
        return

    # Show greeting dialog
    messagebox.showinfo("Greeting", f"Hello, {name}!\nYour birthday is {birthday} and your zodiac sign is {zodiac}.")

# Create the main window
window = tk.Tk()
window.title("User Greeting")
window.geometry("600x600")
window.config(bg="#C0C0C0")  # grey background

# Title label
title_label = tk.Label(window, 
                       text="Enter Your Information", 
                       font=("Times New Roman", 20, "bold"), 
                       fg="#800000",  # maroon
                       bg="#C0C0C0")
title_label.pack(pady=10)

# Full name input
tk.Label(window, text="Full Name:", font=("Times New Roman", 14), fg="black", bg="#C0C0C0").pack()
name_entry = tk.Entry(window, font=("Times New Roman", 14), width=30)
name_entry.pack(pady=5)

# Birthday input
tk.Label(window, text="Birthday (MM/DD/YYYY):", font=("Times New Roman", 14), fg="black", bg="#C0C0C0").pack()
bday_entry = tk.Entry(window, font=("Times New Roman", 14), width=30)
bday_entry.pack(pady=5)

# Zodiac input
tk.Label(window, text="Zodiac Sign:", font=("Times New Roman", 14), fg="black", bg="#C0C0C0").pack()
zodiac_entry = tk.Entry(window, font=("Times New Roman", 14), width=30)
zodiac_entry.pack(pady=5)

# Button
submit_button = tk.Button(window, 
                          text="Show Greeting", 
                          command=show_greeting, 
                          font=("Times New Roman", 14), 
                          bg="#800000", 
                          fg="white")
submit_button.pack(pady=15)

# Run the GUI loop
window.mainloop()


