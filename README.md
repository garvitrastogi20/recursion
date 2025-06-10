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
## 🧾 Basic Recursion Programs

These are the first few programs I wrote to understand how recursion works, including how backtracking changes the flow of execution.

---

### 1️⃣ Print 1 to N using Recursion

**Goal**: Print numbers from 1 to N in increasing order using simple recursion.

**Logic**:
- Start from 1 and go up to N.
- The function calls itself with `i + 1` until it reaches `n`.

**Code (C++):**
```cpp
void print1ToN(int i, int n) {
    if (i > n) return;           // base case
    std::cout << i << " ";
    print1ToN(i + 1, n);         // recursive call
}
```
### 2️⃣ Print N to 1 using Recursion

**Goal**: Print numbers from N to 1 in decreasing order using recursion.

**Logic**:
- Start from `N` and decrease down to `1`.
- Print the value **before** making the recursive call.

**Code (C++):**
```cpp
void printNTo1(int n) {
    if (n == 0) return;          // base case
    std::cout << n << " ";
    printNTo1(n - 1);            // recursive call
}
```
### 3️⃣ Print 1 to N using Recursion and Backtracking

**Goal**: Print numbers from 1 to N using recursion with **backtracking**.

**Logic**:
- Start from `n`, go backward to 1 using recursion.
- Print the number **after** the recursive call to reverse the order on the way back.

**Code (C++):**
```cpp
void print1ToN_Backtrack(int n) {
    if (n == 0) return;           // base case
    print1ToN_Backtrack(n - 1);   // go down first
    std::cout << n << " ";        // print while returning
}
```
### 4️⃣ Print N to 1 using Recursion and Backtracking

**Goal**: Print numbers from N to 1 using recursion with **backtracking**.

**Logic**:
- Start from `1` and go up to `N` using recursion.
- Print the number **after** the recursive call to reverse the order during the backtrack.

**Code (C++):**
```cpp
void printNTo1_Backtrack(int i, int n) {
    if (i > n) return;              // base case
    printNTo1_Backtrack(i + 1, n);  // recursive call first (ascending)
    std::cout << i << " ";          // print during backtracking (descending)
}
```


