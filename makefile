
DiceWar: main.o Game.o Die.o LoadedDie.o
	g++ main.o Game.o Die.o LoadedDie.o -o DiceWar

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp

Die.o: Die.cpp Die.hpp
	g++ -c Die.cpp

LoadedDie.o: LoadedDie.cpp LoadedDie.hpp
	g++ -c LoadedDie.cpp

clean:
	rm *.o DiceWar
