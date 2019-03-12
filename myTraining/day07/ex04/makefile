$ cat makefile
VAR = $(shell echo ${HEADER})

all:
	gcc -I $(HEADER) temp.c -o main
one:
	echo "test value: '$(VAR)'"

$HEADER="~/Desktop/myStock/myHeader" make
