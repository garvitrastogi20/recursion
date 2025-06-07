# Recursion Practice in C++

This is my personal repository where I'm learning and practicing **recursion** using C++. It includes basic concepts, example problems, and explanations to build a strong foundation in recursion. This repository is useful for revision, exam preparation, and interview practice.

---

## 📘 What I’ve Learned So Far

### ✅ What is Recursion?
Recursion is a technique where a function calls itself to solve smaller instances of the same problem. It's commonly used in problems involving repetition, branching, or divide-and-conquer strategies.

**Example (Factorial):**
```cpp
int factorial(int n) {
    if (n == 0) return 1;  // base condition
    return n * factorial(n - 1);
}
```
### ✅ Base Condition
Every recursive function must have a **base condition** — the stopping criteria. It ensures that the recursion eventually ends.

> Without a base case, the function will run infinitely and cause a crash (**stack overflow**).

---

### ✅ Stack Overflow / Stack Space
Each recursive call uses a new frame on the **call stack**. If the number of recursive calls is too large, it can exhaust the stack memory and result in a **stack overflow error**.

---

### ✅ Recursion Tree
A **recursion tree** is a diagram that shows how a recursive function calls itself at each level. It helps in **visualizing the process** and analyzing the **time complexity**.

Example: Recursion tree for `fib(4)`:
```cpp
            fib(4)
           /     \
      fib(3)     fib(2)
     /     \     /     \
 fib(2)  fib(1) fib(1) fib(0)
 /    \
fib(1) fib(0)
```

