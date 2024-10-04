# Makefile -- MOLTEN

all: build/molten.exe

build/molten.exe: build src/*.cpp src/*.c src/*.h
	g++ -o build/molten.exe --pedantic src/*.cpp src/*.c
	# TODO -- Check the build succeeded

build:
	mkdir -p build

clean:
	rm -r ./build/*

run: all
	./build/molten.exe
