all:
	gcc -L"./src/hftLib" -I"./src/includes" -c ./src/main.c -o ./src/main.o   -lhftLib -lpthread -lm
	gcc -L"./src/hftLib" -I"./src/includes" -c ./src/strategy.c -o ./src/strategy.o   -lhftLib -lpthread -lm
	gcc -L"./src/hftLib" -I"./src/includes" -o "strategyDemo"  ./src/main.o ./src/strategy.o   -lhftLib -lpthread -lm

clean:
	rm -f ./src/*.o strategyDemo
