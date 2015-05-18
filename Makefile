src := $(shell ls *.c)
objs := $(patsubst %.c,%.o,$(src))

ListTable: $(objs)
	gcc -o $@ $^

%.o: %.c
	gcc -c -o $@ $<

clean:
	rm -rf ListTable *.o
