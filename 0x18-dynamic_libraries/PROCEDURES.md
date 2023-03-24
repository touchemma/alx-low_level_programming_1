Creating your own Dynamic library

Create your .c file/s to hold function definitions
Compile all .c file/s to get its equivelent object file this way gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic -c *.c
Now create the shared library gcc -shared *.o -o lib.so
Create an environmental variable so that the resolver can quickly locate the libray. you do export LD_LIBRARY_PATH=$PWD
To use shared library

Create program to use with shared library
Compile the program to its equivalent object file to use shared library gcc -Wall -Werror - Wextra -pedantic -std=gnu89 -c -fpic .c
Now compile the object file to link with shared library function gcc .o -L. -l -o {it's optional doh}
Alternative way to creating your dynamic Library

Create all .c file/s
Compile them this way to create the shared library `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.c -shared -o lib<library_name>
Using the shared library to compile files
Create the c file/s
Compile them this way gcc -Wall -Werror -Wextra -pedantic -fpic <*.c or c_file_name.c> -L. -l -o <exe_filename>
