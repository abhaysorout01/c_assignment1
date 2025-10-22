# README File:

All the files will be there in one folder "c_assignment1" so as that the main file can call the header and source file. 

The files will be as:

*Objective-1*
1. mylib.h --> It is a header file of which consists of the declaration of the functions which will be used in further operations.
2. mylib.c --> It is a source file which consists of the definition of the function.
	       i.e. Logic and the work of those specific function.
*Objective-2*
3. arraylib.h --> It is a header file of which consists of the declaration of some array operations functions which will be used in further operations.
4. arraylib.c --> It is a source file which consists of the definition of some array operation functions.
		  i.e. Logic and the work of those specific function of arrays.

5. main.c --> It will be consisting the library which are declared in the header files - "mylib.h", "arraylib.h".
	      It will call the functions from the source files - "mylib.c", "arraylib.c" and will be using their logics in the main.


# To Compile & Run The Code:
>> Open the main.c file.
>> Open the terminal.
>> Type: gcc main.c mylib.c arraylib.c -o prog.exe



