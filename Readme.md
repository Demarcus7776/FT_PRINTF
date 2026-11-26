*This project has been created as part of the 42 curriculum by mohachad.*

# ft_printf

## Description

The `ft_printf` project is about recreating the behavior of the standard C `printf()` function.

The main goal is to understand variadic functions in C and learn how formatted output works by implementing a custom `ft_printf()` function using the `write()` system call.

The project supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal number |
| `%i` | Prints an integer |
| `%u` | Prints an unsigned decimal number |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%%` | Prints a percent sign |

## Instructions

### Compilation

Clone the repository:

```bash
git clone <https://github.com/Demarcus7776/FT_PRINTF.git>
cd ft_printf
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libftprintf.a
```

### Usage

Include the header in your C file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o test
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    int number = 42;

    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", number);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Percent: %%\n");

    return (0);
}
```

### Makefile Rules

| Rule | Description |
|---|---|
| `make` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Rebuilds the library |

## Algorithm and Data Structures

### 1. Parsing the Format String

The main function scans the format string character by character.

- If the current character is not `%`, it is printed directly.
- If a `%` is found, the next character is checked to identify the requested conversion.
- The corresponding helper function is called to handle the argument.

### 2. Variadic Functions

The project uses the `stdarg.h` library to handle a variable number of arguments.

The main elements are:

- `va_list`: Stores the state used to access the additional arguments.
- `va_start`: Initializes the argument list.
- `va_arg`: Retrieves the next argument with the required type.
- `va_end`: Ends the argument list.

### 3. Conversion Functions

Each conversion is handled by a dedicated helper function.

This keeps the code organized and separates the printing logic for different data types.

For example:

- Characters are printed using `write()`.
- Strings are traversed character by character.
- Signed and unsigned integers are converted into decimal characters.
- Hexadecimal values are converted using a base of 16.
- Pointer addresses are represented in hexadecimal with the `0x` prefix.

### 4. Recursive Number Conversion

Recursive functions are used to print numbers in decimal and hexadecimal formats.

The number is divided by its base until the remaining value is smaller than the base. The digits are then printed in the correct order while the recursive calls return.

### 5. Return Value

The function keeps track of the number of characters printed.

Each helper function returns the number of characters it writes, allowing the main function to accumulate the total and return it.

### 6. Data Structures

The main data structure used in this project is `va_list`, provided by `stdarg.h`.

The implementation also uses simple variables such as integers, characters, and pointers to process values. No complex data structures are required.

## Resources

The following resources were useful for understanding and implementing this project:

- [printf(3) — Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h — C documentation](https://en.cppreference.com/w/c/header/stdarg.html)
- [write(2) — Linux manual page](https://man7.org/linux/man-pages/man2/write.2.html)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

### AI Usage

AI tools were used as a learning and support resource during this project.

They helped with:

- Understanding variadic functions and the `stdarg.h` library.
- Explaining conversion logic and recursive functions.
- Reviewing code and identifying potential bugs.
- Understanding compilation errors and Makefile configuration.
- Structuring and documenting the project.

The implementation, testing, and final code decisions were handled by the student.

## Author

**mohachad**

42 Network Student