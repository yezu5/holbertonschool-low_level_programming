Initially, Nested for loop evaluates outer for loop test expression and evaluates only once.  If the condition is true, the flow of control jumps to the inner for loop.

Then, the loop evaluates the condition of the inner loop. when the condition is true, it executes codes of inside the inner for loop.  If the test expression returns false, the flow of control skips the execution and jumps out to the outer loop for execution.

Then the outer for loop test expression is evaluated again when the test expression is false, the flow of control skips the execution and come out of the loop for rest.

A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.

You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task.

A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.
