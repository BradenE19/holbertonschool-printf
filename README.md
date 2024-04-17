# Holberton School Printf Project

## Overview

This project is a custom implementation of the `printf` function in C, a standard library function used for formatted output. The goal of this project is to understand the inner workings of `printf` and to implement its core functionality from scratch.

## Features

- Format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%o`, `%%`
- Length modifiers: `hh`, `h`, `l`, `ll`
- Flags: `+`, ` `, `#`, `0`, `-`

## Requirements

- GCC compiler
- `make` utility

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/BradenE19/holbertonschool-printf.git
    ```

2. Navigate to the project directory:
    ```bash
    cd holbertonschool-printf
    ```

3. Compile the project:
    ```bash
    make
    ```

## Usage

After compiling, you can use the custom `printf` function in your C programs by including the `holberton.h` header file and linking the compiled `libprintf.a` library.

```c
#include "holberton.h"

int main(void)
{
    _printf("Hello, Holberton!\n");
    return (0);
}
```

Compile your program with the library:
```bash
gcc your_program.c -L. -lprintf -o output
```

Run the executable:
```bash
./output
```

## Examples

```c
#include "holberton.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Holberton");
    _printf("Decimal: %d\n", 123);
    _printf("Unsigned: %u\n", 123);
    _printf("Hexadecimal: %x\n", 123);
    _printf("Octal: %o\n", 123);
    _printf("Percentage: %%\n");
    return (0);
}
```

## Challenges

This was one of my first big C projects, so of course challenges included:

1. Learning new programming language.
2. Developing an understanding of how the print function works.

## Contributing

If you'd like to contribute to this project, please follow these steps:

1. Fork the repository
2. Create a new branch (`git checkout -b new-feature`)
3. Make your changes and commit them
4. Push to the branch (`git push origin new-feature`)
5. Create a pull request


## License



## Contact
[LinkedIn](https://www.linkedin.com/in/braden-earnest/)
[Github Repo](https://github.com/BradenE19/holbertonschool-printf)

You can replace the placeholders with actual details specific to your project. Let me know if you need any modifications or additional sections!
