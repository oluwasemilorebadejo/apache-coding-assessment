# apache-coding-assessment

## 1. fibonacci.c
This program implements the Fibonacci sequence using dynamic programming in C. It uses a Node structure to represent integer values and functions, and supports the following arithmetic operations: addition, multiplication, and subtraction.

Development Environment:

-   Operating System: Windows 10
-   Compiler: gcc (MinGW.org GCC-6.3.0-1) 6.3.0
-   Text Editor: Visual Studio Code

How to Compile:

1.  Open a terminal or command prompt.
2.  Navigate to the directory where the source code file is located.
3.  Type the following command to compile the code:

`gcc fibonacci.c -o fibonacci`

This command will use the GCC compiler to compile the code and generate an executable file named "fibonacci" in the same directory.

How to Run:

-  After compiling the code, type the following command in the terminal to run the executable:

`./fibonacci`

-  The program will output the values of Fibonacci(10) and Fibonacci(20) to the console.

Note: If you are using a different operating system or compiler, the compilation and execution commands may be different. Please consult the documentation for your specific environment to learn how to compile and run C programs.

## 2. Recurrence
### Recursive Function

The source code can be found in the `recursion.c` file above

Advantages:

-   Simple and easy to understand.
-   Straightforward translation of the mathematical formula.

Disadvantages:

-   Exponential time complexity, as the function recalculates the same values multiple times.

### Memoization

The source code can be found in the `memoization.c` file above

Advantages:

-   Improved time complexity over the recursive function, as the memoized values are stored in an array to avoid recalculations.
-   Relatively simple implementation.

Disadvantages:

-   Requires additional memory to store the memoized values.
-   Recursive function calls may cause stack overflow errors for very large values of n.

### Iterative Function

The source code can be found in the `iteration.c` file above


Advantages:

-   Improved time complexity over the recursive function, as the iterative function calculates each value only once.
-   Does not require additional memory for memoization.

Disadvantages:

-   Can be more difficult to understand than the recursive or memoized functions.

In summary, the recursive function is the simplest to implement, but has the worst time complexity. The memoized and iterative functions have better time complexity, but require additional memory or may be more difficult to understand. Which implementation is best for a given situation will depend on the specific requirements of the program.
