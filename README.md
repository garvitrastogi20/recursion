# 🌀 Recursion Practice in C++

This is my personal repository where I'm learning and practicing **recursion** using C++. It includes basic concepts, example problems, and explanations to build a strong foundation in recursion. This repository is useful for revision, exam preparation, and interview practice.

---

## 📚 Table of Contents

1. [What I’ve Learned So Far](#-what-ive-learned-so-far)
2. [Basic Recursion Programs](#-basic-recursion-programs)
   - [Print 1 to N using Recursion](#1️⃣-print-1-to-n-using-recursion)
   - [Print N to 1 using Recursion](#2️⃣-print-n-to-1-using-recursion)
   - [Print 1 to N using Backtracking](#3️⃣-print-1-to-n-using-recursion-and-backtracking)
   - [Print N to 1 using Backtracking](#4️⃣-print-n-to-1-using-recursion-and-backtracking)
3. [Functional vs Parameterized Recursion](#-functional-vs-parameterized-recursion)
4. [Sum of First N Numbers](#-sum-of-first-n-numbers)
5. [Factorial of N](#-factorial-using-recursion)
6. [Fibonacci Series](#-fibonacci-series-using-recursion)
7. [Reverse an Array](#-reverse-an-array-using-recursion)
8. [Time Complexity and Recursion Tree](#-time-complexity--recursion-tree)

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
## ✅ Core Concepts of Recursion

### 🔹 Base Condition
Every recursive function must have a **base condition** — the stopping criteria. It ensures that the recursion eventually ends.

> Without a base case, the function will run infinitely and cause a crash (stack overflow).

### 🔹 Stack Overflow / Stack Space
Each recursive call uses a new frame on the call stack. If too many recursive calls are made, it can exhaust the memory and result in a **stack overflow error**.

### 🔹 Recursion Tree
A recursion tree is a diagram showing how a recursive function expands at each level. It helps in understanding the recursive flow and analyzing **time complexity**.

**Example:** Recursion tree for `fib(4)`:
```
            fib(4)
           /     \
      fib(3)     fib(2)
     /     \     /     \
 fib(2)  fib(1) fib(1) fib(0)
 /    \
fib(1) fib(0)
```
---

## 🧾 Basic Recursion Programs

These are the first few programs I wrote to understand recursion and how **backtracking** affects the execution.

### 1️⃣ Print 1 to N (Increasing Order)
```cpp
void print1ToN(int i, int n) {
    if (i > n) return;
    std::cout << i << " ";
    print1ToN(i + 1, n);
}
```
### 2️⃣ Print N to 1 (Decreasing Order)

📌 Goal: Print numbers from `N` to `1` using direct recursion.

```cpp
void printNTo1(int n) {
    if (n == 0) return;
    std::cout << n << " ";
    printNTo1(n - 1);
}
```
### 3️⃣ Print 1 to N using Backtracking
📌 Goal: Print numbers from 1 to N using backtracking.
```cpp
void print1ToN_Backtrack(int n) {
    if (n == 0) return;
    print1ToN_Backtrack(n - 1);
    std::cout << n << " ";
}
```
🔄 Backtracking allows you to print values after the recursive call, so the values come in reverse order of the call stack.

### 4️⃣ Print N to 1 using Backtracking
📌 Goal: Print numbers from N to 1 using recursion with backtracking.
```cpp
void printNTo1_Backtrack(int i, int n) {
    if (i > n) return;
    printNTo1_Backtrack(i + 1, n);
    std::cout << i << " ";
}
```
🔄 Unlike the previous example, this starts from a lower value (i) and prints after all recursive calls return — effectively printing in reverse.

---

## 🧠 Functional vs Parameterized Recursion
Two main approaches to recursion:

### ✅ Parameterized Recursion
You pass results as arguments and compute them along the way. The return type is usually `void`.

```cpp
void sumParameterized(int i, int sum) {
    if (i < 1) {
        std::cout << sum << "\n";
        return;
    }
    sumParameterized(i - 1, sum + i);
}
```
###✅ Functional Recursion
Each function call returns the result, which is then used in backtracking.

```cpp
int sumFunctional(int n) {
    if (n == 0) return 0;
    return n + sumFunctional(n - 1);
}
```
## 🔍 Key Differences Between Parameterized and Functional Recursion

| Aspect                  | Parameterized Recursion        | Functional Recursion            |
|-------------------------|--------------------------------|---------------------------------|
| How result is managed   | Passed as an argument          | Returned from each call         |
| Return type             | `void`                         | Typically `int` or similar      |
| Output point            | In base case                   | During backtracking             |
| Suitable for            | Printing / modifying state     | Mathematical problems           |

## ➕ Sum of First N Numbers
### ✅ Parameterized Way

```cpp
void sumParameterized(int i, int sum) {
    if (i < 1) {
        std::cout << sum << "\n";
        return;
    }
    sumParameterized(i - 1, sum + i);
}
```
### ✅ Functional Way
```cpp
int sumFunctional(int n) {
    if (n == 0) return 0;
    return n + sumFunctional(n - 1);
}
```
## ✖️ Factorial using Recursion
### ✅ Parameterized Way

```cpp
void factorialParameterized(int i, int fact) {
    if (i == 1) {
        std::cout << fact << "\n";
        return;
    }
    factorialParameterized(i - 1, fact * i);
}
```
###✅ Functional Way
```cpp
int factorialFunctional(int n) {
    if (n == 0) return 1;
    return n * factorialFunctional(n - 1);
}
```
---
## 🐢 Fibonacci Series using Recursion
```cpp
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```
📌 Base Cases:
fib(0) = 0, fib(1) = 1

⚠️ Time Complexity:
O(2^N) — exponential growth due to repeated subproblems.
---
##🌳 Recursion Tree for fib(4)

The recursion tree helps visualize how recursive calls are made and where overlapping subproblems occur — especially in problems like Fibonacci.
```cpp
        fib(4)
       /      \
   fib(3)    fib(2)
    /   \     /    \
fib(2) fib(1) fib(1) fib(0)
  /  \
fib(1) fib(0)
```
### 📌 Observations:
The same subproblems (like `fib(2)`, `fib(1)`) are solved multiple times.
This is why the naive Fibonacci solution has exponential time complexity: `O(2^N)`.
To optimize such problems, techniques like memoization or dynamic programming are used.

---

## 🔁 Reverse an Array using Recursion

```cpp
void reverseArray(int arr[], int l, int r) {
    if (l >= r) return;
    std::swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}
```
Uses two-pointer recursion to reverse an array in-place.

## ⏱️ Time Complexity & Recursion Trees

| Problem                | Time Complexity | Notes                       |
|------------------------|-----------------|-----------------------------|
| Print 1 to N / N to 1  | `O(N)`          | Simple linear recursion      |
| Sum of first N numbers | `O(N)`          | Tail or head recursion       |
| Factorial              | `O(N)`          | One call per level           |
| Fibonacci (naive)      | `O(2^N)`        | Repeated calls, inefficient |
| Reverse Array          | `O(N)`          | Linear recursion using swap  |

## 🚀 Summary

This repository covers:

- ✅ Basics of recursion  
- ✅ Different recursion styles (functional vs parameterized)  
- ✅ Real-world recursive problems  
- ✅ Recursion trees and time complexities  

Practicing recursion helps break down complex problems into smaller subproblems and improves logical thinking.

⭐ Feel free to star this repository if it helped you!

--- 
## 🤝 Contribution

Contributions are welcome! If you'd like to improve this repository, feel free to:

- Submit issues for bugs or feature requests
- Fork the repository and create a pull request with your improvements
- Suggest new recursion problems or explanations

Please make sure your code is well-documented and tested.

---

## 👤 Author

**Garvit Rastogi**  
[GitHub Profile](https://github.com/garvitrastogi20)  
Feel free to reach out for any questions or collaboration!

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

---

### MIT License Summary

Permission is hereby granted, free of charge, to any person obtaining a copy  
of this software and associated documentation files (the "Software"), to deal  
in the Software without restriction, including without limitation the rights  
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell  
copies of the Software, and to permit persons to whom the Software is  
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all  
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,  
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE  
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER  
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,  
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE  
SOFTWARE.


Happy coding! 🧠💻




