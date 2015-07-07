a.out: main.c transcendentals.so
	$(CC) `python-config --cflags` `python-config --ldflags` \
		transcendentals.c main.c

transcendentals.so: setup.py transcendentals.pyx
	python setup.py build_ext --inplace

clean:
	-rm -r a.out a.out.dSYM build transcendentals.c transcendentals.so
