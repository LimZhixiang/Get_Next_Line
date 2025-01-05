<div align="center">
	<img src="https://github.com/user-attachments/assets/61fa5c88-91c8-4cc7-8cf0-c05a6fb89ee2" width="200px">
</div>

## Table Of Contents
1. [About the Project](#about-the-project)
2. [Built-With](#built-with)
3. [Key Concepets Covered](#key-concepts-covered)
4. [Features](#features)
5. [Installation](#installation)

## About the Project
The Project is a foundational challenge in the 42 cirriculum, designed to deepen our understanding of file input/output operations, memory management, and efficient data handling in C programming. The task is to create a function, get_next_line, that reads a file or input stream line by line.

## Built With
<img src="https://skillicons.dev/icons?i=c">

## Key Concepts Covered

### File Descriptors
- Leverages the read() function in C to read data from a file descriptor into a buffer.

### Dynamic Memory Allocation
- Usage of `malloc` and `free` to handle dynamic allocation, to handle varying line lengths efficiently.

### Static Variables
- Use of `static` variables that retains data between calls to get_next_line which is essential for implementing continuous read from a file without restarting at the beginning each time the function is called.

## Usage
### Function Prototype
````bash
char *get_next_line(int fd)
````
### Description
- Input: A file descriptor `fd` is passed to the function
- Behavior: Each call to the function returns the next line of data from the file descriptor.

### Return Values
- On success: `char *` A dynamic allocated string containing the next line.
- On memory allocation failure or EOF: `NULL`.

## Installation
1. Clone the repository
````bash
git clone https://github.com/LimZhixiang/Get_Next_Line.git
````
2. Include all the source files `*.c` and header file `*.h` from the `get_next_line` project into your project directory.

3. In your project source code, include the get_next_line header file:
````bash
#include "get_next_line.h"
````

3. Compile your project with the get_next_line files.