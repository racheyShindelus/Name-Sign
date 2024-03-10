# Sign Printer

This C program prints a sign with a specified height, including a name, surrounded by pole-like characters.

## How it Works

1. The program defines a function `printSign` to print a sign with a specified height.
2. In the `main()` function:
   - It prompts the user to enter the height of the sign, ensuring it is between 3 and 12 lines tall.
   - Calculates the height of the poles by subtracting the height of the sign from the total height.
   - Calls the `printSign` function to print the sign.
   - Prints a newline for separation.

## Functions

- `void printSign(int totHeight)`: Prints a sign with a specified height, including a name in the middle.

## Notes

- The sign consists of pole-like characters '|' surrounding the name 'Rachel Francis Shindelus'.
- The program ensures the sign height is within the specified range and calculates the pole height accordingly.
- It demonstrates the use of loops, conditionals, and user input processing.
