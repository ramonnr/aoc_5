

test:
	mkdir -p .test
	cd .test; \
	cmake ../tests -DCMAKE_EXPORT_COMPILE_COMMANDS=ON; \
	make -j; \
	./tests

run:
	mkdir -p .run
	cd .run; \
	cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=ON; \
	make -j; \
	./aoc5 ../assets/input

.PHONY: test
