* Program and Process
* compile and link
* build process
* Defination vs Declaration of functions
* make / Makefile
* git 
    *  git init,git status,git log,git add,git commit

* Sections
    * .text
    * .data
    * .bss
    * stack
    * heap

* Modular Programs
    * Libraries
        * Standard libraries (linux-lib.c and libc.so)
        * User libraries/ 3rd party library
    
    * Two types
        * Static => *.a
        * Dynamic (Shared Objects) =>*.so
    
    * Static Library
        * ar x (extract)
        * ar crv libname.a 1.o 2.o..... n.o => (*.o)
        * Multiple copies of library function loaded in the memory
        * More memory
    * Dynamic Library
        * gcc -o libname.so -shared -fPIC
        * lib function deference defination embedded inbinary
        * single copy of library function loaded in the memory
        * less memory


* PID,PPID,UID
* getpid(),getppid()
* man pages


* fork - create a new process
    * parent and child relationship
    * parent and child have their own address space (text,data,bss,stack and heap)


* Psuedo parallelism
* True parallelism

* ltrace
* strace
* Program using system call -> write a string inside a file.

* Library
    * User Space
    * May bebuffered I/O
    * Formatted I/O
* System
    * Kernal Space
    * Not buffered I/O
    * No formatted I/O


* Open - O_CREAT
* int -file descriptor
    * fd - represents an open file in the kernel
    * 0-standard input
    * 1-standard output
    * 2-standard error


* Process states: