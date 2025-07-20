_______________________________________________________________________
✨ PUSH_SWAP:
_______________________________________________________________________

The Push_swap project at 42/1337 is an algorithm and sorting challenge where you must sort a list of integers using only a very limited set of operations on two stacks — and do it in as few moves as possible.

_______________________________________________________________________
📦 Project Overview:
_______________________________________________________________________

          ./push_swap 3 2 1

You must output a sequence of operations that will sort them in ascending order, using only stack operations.

_______________________________________________________________________
🎯 Goals
_______________________________________________________________________

  * Implement a program that sorts a list of numbers.

  * Use only specific stack operations (like push, swap, rotate).

  * Optimize for the least number of moves.

  * Write a checker program (bonus) to verify the sequence.

______________________________________________________________________
🧱 Allowed Operations:
______________________________________________________________________

You work with two stacks: a (input) and b (helper).

[Operation] -----> [Meaning]

  * [sa] -----> [Swap the top 2 elements of stack a].

  * [sb] -----> [Swap the top 2 elements of stack b].

  * [ss] -----> [sa and sb at the same time].

  * [pa] -----> [Push the top of b to a].

  * [pb] -----> [Push the top of a to b].

  * [ra] -----> [Rotate a (top becomes last)].

  * [rb] -----> [Rotate b].

  * [rr] -----> [ra and rb at the same time].

  * [rra] ----> [Reverse rotate a (last becomes top)].

  * [rrb] ----> [Reverse rotate b].

  * [rrr] ----> [rra and rrb at the same time].

You must print the sequence of these operations that sorts the stack.

_____________________________________________________________________
📌 Example:
_____________________________________________________________________

Input:

          ./push_swap 2 1 3

Output:

          sa

Input:

          ./push_swap 3 2 1

Output:

          sa
          rra

___________________________________________________________________
🔧 Constraints:
___________________________________________________________________

  * You can't use standard sort (qsort, etc.).

  * You must build your own sorting logic using only the allowed operations.

  * You must handle errors (e.g., non-numbers, duplicates).

__________________________________________________________________
🧠 What You’ll Learn:
__________________________________________________________________

  * Sorting algorithms (radix sort, quicksort logic).

  * Stack manipulation.

  * Optimization (minimize operations).

  * Input parsing and validation.

  * Memory management and debugging.

  * Writing your own libft-like tools.

____________________________________________________________________
🏗️ Typical File Structure:
____________________________________________________________________

    push_swap/
    ├── src/
    │   ├── main.c
    │   ├── stack_ops.c
    │   ├── sorting_small.c
    │   ├── sorting_big.c
    │   └── utils.c
    ├── include/
    │   └── push_swap.h
    ├── Ma

_____________________________________________________________________
✨ Sorting Strategies:
_____________________________________________________________________

[Size of input] ------> [Strategy]

  * [2 to 3] ---------> [Hardcode logic (simple cases)].

  * [5 or less] ------> [Use insertion sort manually].

  * [100 numbers] ----> [Use radix sort].

  * [500 numbers] ----> [Use chunk-based radix].

___________________________________________________________________
✅ Bonus Part (optional):
___________________________________________________________________

Write a checker program that reads a list of operations from stdin and tells you if the stack ends up sorted.

___________________________________________________________________
🧪 What You Need to Handle:
___________________________________________________________________

  * Duplicate numbers → ❌ error.

  * Non-integer values → ❌ error.

  * Memory leaks → ❌ error.

  * Invalid operations (in checker) → ❌ error.

__________________________________________________________________
🏁 Final Goal:
__________________________________________________________________

  * Sort stack a using only the allowed moves.

  * Use the minimum number of moves.

  * No memory leaks or crashes.

  * Bonus: checker that reads and verifies a move sequence.
