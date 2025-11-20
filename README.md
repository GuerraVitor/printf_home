# ft_printf

This project consists of implementing the `ft_printf` function, which aims to reproduce the behavior of the standard C library function `printf`.

## Objective
Create a library named `libftprintf.a` containing the `ft_printf` function, capable of handling multiple format conversions similar to the original libc function.

## Prototype
```c
int ft_printf(const char *format, ...);
```

## Mandatory Conversions
The function must support the following conversions:
- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer (`void *`) in hexadecimal format.
- `%d`: Prints a decimal number (base 10).
- `%i`: Prints an integer in decimal (base 10).
- `%u`: Prints an unsigned decimal number (base 10).
- `%x`: Prints a hexadecimal number (base 16) in lowercase.
- `%X`: Prints a hexadecimal number (base 16) in uppercase.
- `%%`: Prints the `%` character.

## Rules and Restrictions
- Do not implement the buffer management of the original `printf`.
- Your implementation will be compared to the behavior of the libc `printf`.
- Only the following external functions are allowed: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`.
- The use of `libft` is allowed.
- The `ar` command must be used to create the library. The use of `libtool` is strictly forbidden.
- The `libftprintf.a` file must be created at the root of the repository.

## Required Files
- `Makefile`
- Header files: `*.h`, `*/*.h`
- Source files: `*.c`, `*/*.c`

The `Makefile` must contain the rules: `NAME`, `all`, `clean`, `fclean`, `re`.

## Compilation
Use the command below to compile the library:
```sh
make
```

## Motivation
Functions like `ft_putnbr()` and `ft_putstr()` are not sufficient to handle all formatting cases and data types that the `printf` function offers. Therefore, it is necessary to implement a more robust and flexible function.

---

Project developed for 42 School.
