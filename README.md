
Compile and create the executable using "make" command.
The output binary executable is named "exsort".


When you run the executable, it will prompt for various program inputs in following order:
Name of input file (along with path if reqd)
Name of output file (along with path if reqd)
Number of attributes to be considered in sorting
Index of those attributes with correct order and sign (-ve means descending order)
Size of buffer in Bytes


A sample input file is also provided. To use it, run as below:

$ ./exsort < ip.txt

This file assumes test.bin is the input file in current directory.

The header file contains MACROS value K which will determine K-way merge.
While submission K is set to 31.

But anytime, we can change the value of K to something else and recompile the program.

This program also deletes all the temporary files named *.tmp before finishing.

Reference:
Referred to "Introduction to Algorithms" by Cormen, Leiserson, Rivest & Stein for creating heaps.
