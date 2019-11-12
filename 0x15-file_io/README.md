# 0x15. C - File I/O

# Description

Learning Objectives
* Look for the right source of information online.
* How to create, open, close, read and write files.
* What are file descriptors.
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names.
* How to use the I/O system calls open, close, read and write.
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR.
* What are file permissions, and how to set them when creating a file with the open system call.
* What is a system call.
* What is the difference between a function and a system call.

### [0 - Tread lightly, she is near](./0-read_textfile.c)
* Function that reads a text file and prints it to the POSIX standard output, and returns the actual number of letters it could read and print, or 0 if failure.

### [1 - Under the snow](./1-create_file.c)
* Function that creates a file, if the file allready exists truncate it, and returns 1 on success or -1 if failure.

### [2 - Speak gently, she can hear](./2-append_text_to_file.c)
* Function that appends text at the end of a file, and returns 1 on success or -1 if failure. If the file allready exists it doesn`t creates it.

### [3 - cp](./3-cp.c)
* Program that copies the content of a file to another file.
* Usage: cp file_from file_to.
* If the number of argument is not the correct one, exit with code 97.
* If file_to already exists, truncate it
* If file_from does not exist, or if you can not read it, exit with code 98.
* Where NAME_OF_THE_FILE is the first argument passed to your program
* If it can not create or if write to file_to fails, exit with code 99.
* Where NAME_OF_THE_FILE is the second argument passed to your program.
* If it can not close a file descriptor , exit with code 100.
* Where FD_VALUE is the value of the file descriptor.
* Permissions of the created file: rw-rw-r--. If the file already exists, it does not change the permissions

### [Header - holberton.h](./holberton.h)
*  File that contains all prototypes for the functions used in this project.

## Author
* **Juan Portilla** - [jdpa352](https://github.com/Jdpa357)