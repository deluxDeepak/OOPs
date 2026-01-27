# Prime Numbers - Complete Guide

## What is a Prime Number?

A **Prime Number** is a natural number greater than 1 that has no positive divisors other than 1 and itself.

### Examples:

- **Prime**: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31...
- **Not Prime**: 4 (divisible by 2), 6 (divisible by 2,3), 8 (divisible by 2,4), 9 (divisible by 3)

---

## 🔍 Basic Prime Checking Algorithm

### Simple Approach (Brute Force)

Prime check करने का मतलब है:

> **क्या n कोई number 2 से n-1 तक से divide हता है?**

- अगर हता है → **Prime नहीं**
- अगर नहीं हता → **Prime**

```c
// Basic approach - O(n) time complexity
int isPrime(int n) {
    if (n <= 1) return 0;  // Not prime
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;  // Found divisor, not prime
    }
    return 1;  // Prime
}
```

**Problem**: यह approach slow है (O(n)) क्यूंकि हर number 2 से n-1 तक check करते हैं।

---

## ⚡ Optimized Approach: Square Root Method

### Why Square Root Works?

**Key Insight**: हर number के factors **pairs** में होते हैं।

#### Example: n = 36

| Factor Pairs |
| ------------ |
| 1 × 36       |
| 2 × 18       |
| 3 × 12       |
| 4 × 9        |
| **6 × 6**    |

**Pattern**: जब एक factor √36 (यानी 6) से छोटा है, उसका pair √36 से बड़ा है।

**Conclusion**: अगर कोई factor exist करता है, तो वह √n तक मिल जाएगा।

### Optimized Algorithm

```c
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
```

**Time Complexity**: O(√n) - Much faster!

---

## 📝 Step-by-Step Examples

### Example 1: n = 37 (Prime)

```
i = 2 → 2² = 4 ≤ 37 ✅  37 % 2 ≠ 0
i = 3 → 3² = 9 ≤ 37 ✅  37 % 3 ≠ 0
i = 4 → 4² = 16 ≤ 37 ✅  37 % 4 ≠ 0
i = 5 → 5² = 25 ≤ 37 ✅  37 % 5 ≠ 0
i = 6 → 6² = 36 ≤ 37 ✅  37 % 6 ≠ 0
i = 7 → 7² = 49 > 37 ❌  Stop loop
```

**Result**: कोई divisor नहीं मिला → **37 is Prime**

### Example 2: n = 49 (Not Prime)

```
i = 2 → 2² = 4 ≤ 49 ✅  49 % 2 ≠ 0
i = 3 → 3² = 9 ≤ 49 ✅  49 % 3 ≠ 0
i = 4 → 4² = 16 ≤ 49 ✅  49 % 4 ≠ 0
i = 5 → 5² = 25 ≤ 49 ✅  49 % 5 ≠ 0
i = 6 → 6² = 36 ≤ 49 ✅  49 % 6 ≠ 0
i = 7 → 7² = 49 ≤ 49 ✅  49 % 7 == 0 ✅
```

**Result**: Divisor मिल गया (7) → **49 is Not Prime**

---

## 🚀 Further Optimizations

### 1. Even Number Check

```c
if (n % 2 == 0) return (n == 2);  // Only 2 is even prime
```

### 2. Check Only Odd Numbers

```c
for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return 0;
}
```

### 3. 6k±1 Optimization

All primes > 3 are of the form 6k±1:

```c
if (n % 2 == 0 || n % 3 == 0) return 0;
for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return 0;
}
```

---

## 🧮 Interesting Prime Facts

1. **2** is the only even prime number
2. **1** is not considered prime
3. All primes > 2 are odd
4. There are infinitely many primes (Euclid's theorem)
5. **Twin Primes**: Prime pairs differing by 2 (3,5), (5,7), (11,13)
6. **Mersenne Primes**: Primes of form 2ⁿ - 1
7. **Goldbach's Conjecture**: Every even number > 2 can be expressed as sum of two primes

---

## 💻 Complete C Program

```c
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
```

---

## ⏱️ Time Complexity Comparison

| Method                | Time Complexity | Space | Best For           |
| --------------------- | --------------- | ----- | ------------------ |
| Brute Force           | O(n)            | O(1)  | Small numbers      |
| Square Root           | O(√n)           | O(1)  | Medium numbers     |
| Sieve of Eratosthenes | O(n log log n)  | O(n)  | Multiple queries   |
| Miller-Rabin          | O(k log³ n)     | O(1)  | Very large numbers |
