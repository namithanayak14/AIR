make: sll.o main.o
        gcc -o make main.o sll.o
sll.o: sll.c sll.h
        gcc -c sll.c sll.h
main.o: sll.h main.c
        gcc -c sll.h main.c