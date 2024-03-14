# Makefile -- MOLTEN

molten:
	clang -o build/molten.exe --pedantic src/*.cpp src/*.c
	# TODO -- Check the build succeeded
	build/molten.exe
