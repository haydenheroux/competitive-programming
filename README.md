# cp

Competitive programming practice.

## ./g++

Wrapper for g++ which automatically compiles the provided C++ file, runs the produced executable if compilation succeeded[^1], and removes the executable if and only if the program errored[^2]. A better solution than a Makefile because of the number of source files and the 1-1 relation between a source file and an executable. Successfully tested with `dash` and `bash`.

[^1]: Failure is measured if `g++`'s return status is non-zero.
[^2]: Failure is measured if the binary's return status is non-zero.
