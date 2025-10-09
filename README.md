<h1 align="center">💻 C Programming Basics & Practice</h1>
<p align="center">
  By Sumit Sah | Android Developer & AI Enthusiast<br>
  Collection of C programs covering basics, functions, recursion, arrays, pointers, and file handling
</p>

<p align="center">
  <a href="https://github.com/sumitsah250/c-basics"><img src="https://img.shields.io/badge/GitHub-View%20Code-black?logo=github"></a>
  <a href="https://www.linkedin.com/in/your-linkedin"><img src="https://img.shields.io/badge/LinkedIn-Connect-blue?logo=linkedin"></a>
</p>

---

<h2 align="center">🚀 Overview</h2>

This repository contains a comprehensive collection of **C programming practice programs**, ranging from **basic syntax and arithmetic operations** to **recursion, arrays, pointers, and file handling**.  
It’s designed to **strengthen your understanding of C fundamentals** and provide **hands-on practice for problem-solving**.

---

<h2 align="center">📂 Project Structure</h2>

| Folder/File | Description |
|-------------|-------------|
| **.vscode/** | VSCode workspace configuration |
| **file_handeling/** | Programs related to file operations in C |
| **output/** | Sample outputs for reference |
| **i. to xxxviii.** | Numbered C programs covering: largest numbers, area of circle, sine, HCF/LCM, series, matrices, Fibonacci, recursion, pointers, string functions, patterns, arrays, 2D arrays, etc. |

---

<h2 align="center">🛠️ Concepts Covered</h2>

- **Basics:** Variables, constants, operators, input/output  
- **Control Structures:** If-else, loops, switch-case  
- **Functions:** User-defined functions, recursion, mathematical calculations  
- **Arrays & 2D Arrays:** Input/output, matrix operations, sums, and diagonals  
- **Strings:** String manipulation and library functions  
- **Pointers:** Basics, swapping, array and string handling  
- **Structures:** Distance addition, data grouping  
- **File Handling:** Reading and writing files  
- **Mathematical Concepts:** Fibonacci, prime numbers, Armstrong, triangular numbers, etc.  
- **Patterns:** Pyramid and other user-defined patterns  

---

<h2 align="center">📊 Example Usage</h2>

```c
// Example: Check if a number is prime
#include <stdio.h>
int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int main() {
    int num = 17;
    if(isPrime(num)) printf("%d is prime\n", num);
    else printf("%d is not prime\n", num);
    return 0;
}
