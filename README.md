# LenSTR - strlen but worse
## a simple recreation of the classic function strlen.

DESCRIPTION:

this is a custom verison of the standard C function strlen. It preforms the same function as strlen, just a little worse.

HOW IT WORKS:

the lenstr function takes a array of characters as a argument, then loops through the array, counting the ammount of cycles the loop makes until it hits a new line character \0.
once a new line character is met, the loop will stop, and the fnction will return the number of cycles it counted, therefore returning the length of that array.


USEAGE:

to use lenstr, you'd first need to copy the source files, to get the header file, the source code for the function, and the test program. 
You can do this by either using git clone, or by copying the files with zip.

To use the function in your code, you'd need to specify the header file at the beginning of your program by using the include command '#include "lenstr.h"
NOTE: make sure you use DOUBLE QUOTES and not angle brackets. Angle brackets are only used for header files from the base C library, which this is not.

If you are using gcc to compile this function, you need to include the source function file in your compilation prompt, so that the gcc linker knows where the source function of the header file is.

you can also compile the source file as a binary library file using this command to avoid the previous step(if you have gcc): 
gcc -c lenstr.c -o lenstr.o
ar rcs liblenstr.a lenstr.o

NOTE: for linux/apple users, you MUST add lib to the beginning of your archive file(.a)


DISCLAIMER:
This project is NOT 100% done. There probably still are some bugs/vulnerabilities in this function, and probably shouldn't be used in it's base state for a project
This is just a simple clone of the function I made by reading it's description, NOT a full replacement
If you encounter any bugs, vulnerabilities, or simply want to share your version of this function, feel free to fork it, or contact me.
