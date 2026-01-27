# Anagram Algorithm - Complete Guide

## 🔍 What is an Anagram?

An **Anagram** is formed when two strings contain the same letters with the same frequency, but in different order.

### Examples:

- ✅ **"RACE"** and **"CARE"** → Same letters (R, A, C, E) with same frequency
- ✅ **"LISTEN"** and **"SILENT"** → Same letters with same frequency
- ❌ **"HELLO"** and **"WORLD"** → Different letters

---

## 💻 Algorithm Explanation

### Core Logic: Frequency Counting

```c
int count1[26] = {0}, count2[26] = {0};
```

### Why Array Size 26?

- **26 letters** in English alphabet (A-Z)
- Each **index represents a letter**:
  - `count[0]` → A, `count[1]` → B, ..., `count[25]` → Z

### Array Initialization

```c
int count1[26] = {0};
```

**Result:**

```
count1[0] = 0   // A frequency
count1[1] = 0   // B frequency
count1[2] = 0   // C frequency
...
count1[25] = 0  // Z frequency
```

---

## 🧮 Character to Index Mapping

### The Magic Formula: `str[i] - 'A'`

**ASCII Values:**

- `'A'` = 65, `'B'` = 66, `'C'` = 67, ..., `'Z'` = 90

**Index Calculation:**

```c
'A' - 'A' = 65 - 65 = 0  → index 0
'B' - 'A' = 66 - 65 = 1  → index 1
'C' - 'A' = 67 - 65 = 2  → index 2
'Z' - 'A' = 90 - 65 = 25 → index 25
```

### Frequency Update

```c
count1[str1[i] - 'A']++;
count2[str2[i] - 'A']++;
```

---

## 📊 Step-by-Step Example

### Input: "CARE" vs "RACE"

#### Processing "CARE":

| Step | Character | Index Calculation | Array Update |
| ---- | --------- | ----------------- | ------------ |
| i=0  | 'C'       | 'C'-'A' = 2       | count1[2]++  |
| i=1  | 'A'       | 'A'-'A' = 0       | count1[0]++  |
| i=2  | 'R'       | 'R'-'A' = 17      | count1[17]++ |
| i=3  | 'E'       | 'E'-'A' = 4       | count1[4]++  |

**Final count1 array:**

```
count1[0] = 1   // A appears 1 time
count1[2] = 1   // C appears 1 time
count1[4] = 1   // E appears 1 time
count1[17] = 1  // R appears 1 time
// All other indices = 0
```

#### Processing "RACE":

| Step | Character | Index Calculation | Array Update |
| ---- | --------- | ----------------- | ------------ |
| i=0  | 'R'       | 'R'-'A' = 17      | count2[17]++ |
| i=1  | 'A'       | 'A'-'A' = 0       | count2[0]++  |
| i=2  | 'C'       | 'C'-'A' = 2       | count2[2]++  |
| i=3  | 'E'       | 'E'-'A' = 4       | count2[4]++  |

**Final count2 array:**

```
count2[0] = 1   // A appears 1 time
count2[2] = 1   // C appears 1 time
count2[4] = 1   // E appears 1 time
count2[17] = 1  // R appears 1 time
// All other indices = 0
```

#### Comparison:

```c
for (i = 0; i < 26; i++) {
    if (count1[i] != count2[i]) {
        isAnagram = 0;  // Not anagram
        break;
    }
}
```

**Result:** `count1[i] == count2[i]` for all i → **Anagram!** ✅

---

## 🚀 Complete C Program

```c
#include <stdio.h>
#include <string.h>

int checkAnagram(char str1[], char str2[]) {
    int count1[26] = {0}, count2[26] = {0};
    int len1 = strlen(str1), len2 = strlen(str2);

    // Different lengths → not anagram
    if (len1 != len2) return 0;

    // Count frequency of each character
    for (int i = 0; i < len1; i++) {
        count1[str1[i] - 'A']++;
        count2[str2[i] - 'A']++;
    }

    // Compare frequency arrays
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) return 0;
    }

    return 1;  // Anagram
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (checkAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
```

---

## ⚠️ Limitations & Improvements

### Current Limitations:

1. **Case Sensitive**: Only works with uppercase letters (A-Z)
2. **No Space Handling**: Doesn't handle spaces in strings
3. **Manual Length Input**: Requires user to specify length

### Improvements:

```c
// Handle both cases
if (str[i] >= 'a' && str[i] <= 'z') {
    count[str[i] - 'a']++;
} else if (str[i] >= 'A' && str[i] <= 'Z') {
    count[str[i] - 'A']++;
}

// Use strlen() instead of manual length
int len = strlen(str);
```

---

## ⏱️ Time & Space Complexity

| Aspect         | Complexity | Explanation                      |
| -------------- | ---------- | -------------------------------- |
| **Time**       | O(n)       | Linear scan of both strings      |
| **Space**      | O(1)       | Fixed arrays of size 26          |
| **Best Case**  | O(1)       | Different lengths detected early |
| **Worst Case** | O(n)       | Complete comparison needed       |

