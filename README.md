# File Operations in C

This project contains a collection of simple C programs that demonstrate **file handling operations** — a crucial part of systems programming.

File operations are used to **store, read, update, or copy** data from files on disk. These programs are useful for beginners to understand how C interacts with files using the standard I/O library `<stdio.h>`.

---

## What are File Operations?

In C programming, file operations allow your program to interact with data stored in text or binary files. Some common operations include:

- **Creating a file**
- **Writing to a file**
- **Reading from a file**
- **Appending to a file**
- **Copying contents from one file to another**

These actions are performed using file pointers (`FILE *`) and standard functions like `fopen()`, `fclose()`, `fprintf()`, `fscanf()`, `fgets()`, `fputs()`, and `fread()` / `fwrite()`.

---

## Programs Included

| File Name | Description |
|-----------|-------------|
| `fq1.c`   | Creates a file and writes text into it using `fopen` and `fprintf`. |
| `fq3.c`   | Reads contents from a file and displays it on screen using `fscanf` or `fgets`. |
| `fq4.c`   | Appends new content to an existing file using `"a"` mode in `fopen()`. |
| `fq5.c`   | Reads content from one file and writes it into another (file copy operation). |
| `fq6.c`   | Combines writing and reading in one program to demonstrate full I/O cycle. |

Each program is written to be beginner-friendly with basic error checking.

---

## How to Compile and Run

Make sure you have a C compiler like **GCC** installed. You can use the terminal (Linux/Mac) or Git Bash/VS Code terminal (Windows):

```bash
gcc fq1.c -o fq1
./fq1
