all: signal.c
	gcc -o signal signal.c

run: all
	./signal

clean:
	rm signal
	rm *~
