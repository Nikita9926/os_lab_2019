CC=gcc
CFLAGS=-I.
all:  parallel_min_max process_memory
parallel_min_max : utils find_min_max ./../../lab3/src/utils.h ./../../lab3/src/find_min_max.h ./../../lab3/src/parallel_min_max.c
	$(CC) -o parallel_min_max utils.o find_min_max.o ./../../lab3/src/parallel_min_max.c $(CFLAGS)
utils : ./../../lab3/src/utils.h ./../../lab3/src/utils.c
	$(CC) -o utils.o -c ./../../lab3/src/utils.c $(CFLAGS)
find_min_max : ./../../lab3/src/utils.h ./../../lab3/src/find_min_max.h ./../../lab3/src/find_min_max.c
	$(CC) -o find_min_max.o -c ./../../lab3/src/find_min_max.c $(CFLAGS)
process_memory : process_memory.c
	$(CC) -o a1.out process_memory.c $(CFLAGS)
parallel_sum : parallel_sum.c
	$(CC) -o parallel_sum parallel_sum.c -pthread -lm $(CFLAGS)
clean :
	rm utils.o find_min_max.o a1.out parallel_min_max
