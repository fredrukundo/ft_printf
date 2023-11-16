# ft_printf
This repository contains the implementation of the ft_printf function, which mimics the behavior of the original printf function from the C standard library.  
<img width="217" alt="ft_printf_pic" src="https://github.com/fredrukundo/ft_printf/assets/105452272/466cd9f0-b93c-4128-a937-b6ba2793c777">
# Project Overview
# Files
**Makefile:** Contains rules for compiling the project. Includes __all__, __clean__, __fclean__, and __re__ targets.  
**ft_printf.h:** Header file with function prototypes and necessary includes.  
**srcs/:** Directory containing the source files for the ft_printf implementation.  
**libftprintf.a:** The compiled library file, created using the ar command.  
# External Functions
__malloc, free, write, va_start, va_arg, va_copy, va_end:__ External functions used in the implementation.
# Usage
To use the `ft_printf` function in your code, include its header:

```#include "ft_printf.h"```  
Compile the library using the provided Makefile:

```make```
# Functionality
The **ft_printf** function handles the following conversion specifiers:

**%c:** Prints a single character.  
**%s:** Prints a string.  
**%p:** Prints a pointer in hexadecimal format.  
**%d, %i:** Prints a decimal (base 10) number.
**%u:** Prints an unsigned decimal (base 10) number.  
**%x:** Prints a number in hexadecimal (base 16) lowercase format.  
**%X:** Prints a number in hexadecimal (base 16) uppercase format.  
**%%:** Prints a percent sign.  

Include the `ft_printf` header in your code:

```#include "ft_printf.h"```
Compile the library:

```make```
Now, you can use the `ft_printf` function in your project.

# Notes
The buffer management of the original **printf** function is not implemented.
The library is created using the **ar** command, and the use of the **libtool** command is forbidden.
Feel free to explore and use the **ft_printf** function in your C projects!
