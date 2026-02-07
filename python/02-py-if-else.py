#!/bin/python3

# Entry point of the program
if __name__ == '__main__':
    
    # Take integer input from user
    n = int(input().strip())

    # Check if number is odd
    # If remainder when divided by 2 is not 0 → odd
    if n % 2 != 0:
        print("Weird")

    # If number is even and lies between 2 and 5 (inclusive)
    # Condition runs only if above 'if' is false
    elif 2 <= n <= 5:
        print("Not Weird")

    # If number is even and lies between 6 and 20 (inclusive)
    elif 6 <= n <= 20:
        print("Weird")

    # If number is even and greater than 20
    else:
        print("Not Weird")
