# getchar() and putchar() - Complete Guide

## 🔍 What is getchar()?

```c
int c = getchar();
```

**getchar()** is a C library function that:

- Reads **one character** from standard input (stdin/keyboard)
- Returns the **ASCII value** of the character as an **integer**
- Used for character-by-character input processing

---

## 🧮 How getchar() Works

### Character to ASCII Conversion

| Input Character  | ASCII Value | Stored in `int c` |
| ---------------- | ----------- | ----------------- |
| `'A'`            | 65          | `c = 65`          |
| `'a'`            | 97          | `c = 97`          |
| `'0'`            | 48          | `c = 48`          |
| `' '` (space)    | 32          | `c = 32`          |
| `'\n'` (newline) | 10          | `c = 10`          |

### Special Values

| Condition       | Return Value | Meaning                 |
| --------------- | ------------ | ----------------------- |
| **End of File** | `EOF` (-1)   | No more input available |
| **Error**       | `EOF` (-1)   | Input error occurred    |

---

## ❓ Why `int c` instead of `char c`?

### Reason 1: EOF Handling

```c
// ❌ Wrong - char can't store EOF
char c = getchar();  // EOF (-1) won't fit in char range

// ✅ Correct - int can store both characters and EOF
int c = getchar();   // Can store 0-255 (ASCII) + EOF (-1)
```

### Reason 2: Range Compatibility

- **char range**: 0 to 255 (or -128 to 127)
- **ASCII range**: 0 to 127
- **EOF value**: -1
- **int range**: -2,147,483,648 to 2,147,483,647

---

## 📤 putchar() Function

```c
putchar(c);
```

**putchar()** is the output counterpart:

- Takes an **integer** parameter
- Converts it to corresponding **ASCII character**
- Prints the character to **standard output** (stdout/screen)

### Example:

```c
int c = getchar();  // User types 'A'
putchar(c);         // Prints 'A' on screen
```

**Internal Process:**

1. User types: `'A'`
2. `getchar()` returns: `65` (ASCII of 'A')
3. `c = 65`
4. `putchar(65)` prints: `'A'` on screen

---

## 💻 Complete Examples

### Example 1: Echo Program

```c
#include <stdio.h>

int main() {
    int c;
    printf("Type a character: ");
    c = getchar();
    printf("You typed: ");
    putchar(c);
    printf("\n");
    return 0;
}
```

**Sample Run:**

```
Type a character: A
You typed: A
```

### Example 2: Character Count

```c
#include <stdio.h>

int main() {
    int c, count = 0;
    printf("Enter text (Ctrl+Z to end):\n");

    while ((c = getchar()) != EOF) {
        count++;
    }

    printf("Total characters: %d\n", count);
    return 0;
}
```

### Example 3: Uppercase Converter

```c
#include <stdio.h>

int main() {
    int c;
    printf("Enter text:\n");

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';  // Convert to uppercase
        }
        putchar(c);
    }

    return 0;
}
```

---

## 🔄 Common Usage Patterns

### Pattern 1: Read Until EOF

```c
int c;
while ((c = getchar()) != EOF) {
    // Process character
    putchar(c);
}
```

### Pattern 2: Read Until Newline

```c
int c;
while ((c = getchar()) != '\n' && c != EOF) {
    // Process character
    putchar(c);
}
```

### Pattern 3: Character Classification

```c
int c = getchar();

if (c >= 'A' && c <= 'Z') {
    printf("Uppercase letter\n");
} else if (c >= 'a' && c <= 'z') {
    printf("Lowercase letter\n");
} else if (c >= '0' && c <= '9') {
    printf("Digit\n");
} else {
    printf("Special character\n");
}
```

---

## ⚠️ Important Notes

### 1. **Buffer Behavior**

- `getchar()` reads from input **buffer**
- Input is typically **line-buffered** (waits for Enter)
- Use `fflush(stdin)` to clear buffer if needed

### 2. **EOF Detection**

```c
// ✅ Correct way to check EOF
int c;
while ((c = getchar()) != EOF) {
    // Process character
}

// ❌ Wrong - assignment inside condition
char c;
while ((c = getchar()) != EOF) {  // May not work correctly
    // Process character
}
```

### 3. **Error Handling**

```c
int c = getchar();
if (c == EOF) {
    printf("Error or end of input\n");
} else {
    printf("Character: %c (ASCII: %d)\n", c, c);
}
```

---

## 🚀 Advanced Applications

### Recursive String Reversal

```c
void reverse() {
    int c = getchar();
    if (c != EOF && c != '\n') {
        reverse();    // Recursive call
        putchar(c);   // Print in reverse order
    }
}
```

### Character Frequency Counter

```c
#include <stdio.h>

int main() {
    int c, freq[256] = {0};

    while ((c = getchar()) != EOF) {
        freq[c]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d times\n", i, freq[i]);
        }
    }

    return 0;
}
```

---

## 📝 Quick Reference

| Function     | Purpose         | Input Type | Return Type | Special Values |
| ------------ | --------------- | ---------- | ----------- | -------------- |
| `getchar()`  | Read character  | None       | `int`       | `EOF` (-1)     |
| `putchar(c)` | Write character | `int`      | `int`       | `EOF` on error |

**Remember:** Always use `int` for storing `getchar()` result to properly handle `EOF`!
