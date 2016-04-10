lab3_B: Clock.o lab3_B.o
	g++ -o lab3_B Clock.o lab3_B.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

lab3_B.o: lab3_B.cpp Clock.h
	g++ -c lab3_B.cpp

clean:
	rm Clock.o
	rm lab3_B.o
