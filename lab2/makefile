lab2:lab2main.o bmi.o
	g++ -o lab2 lab2main.o bmi.o
lab2main.o: lab2main.cpp bmi.h
	g++ -c lab2main.cpp bmi.h
bmi.o:bmi.cpp bmi.h
	g++ -c bmi.cpp bmi.h
clean:lab2
	rm lab2
