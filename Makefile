ifeq ($(VERBOSE),)
SILENCE=@echo "building: "$@ 
else
SILENCE=
endif

b_install:
		g++ -std=c++11  -I ./include/  src/*.cpp -o build/main -s
start:
		./build/main
clean:
		rm -rf build/main
