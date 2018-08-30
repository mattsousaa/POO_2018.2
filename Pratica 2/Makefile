#Makefile para POO

app:
	g++ passageiro.o topic.o aqui.o -o app

output: passageiro.o topic.o aqui.o
	g++ -std=c++14 -o passageiro.o
	g++ -std=c++14 -o topic.o
	g++ -std=c++14 -o aqui.o 

passageiro.o: passageiro.cpp
	g++ -std=c++14 -c passageiro.cpp 

topic.o: topic.cpp
	g++ -std=c++14 -c topic.cpp 

aqui.o: aqui.cpp
	g++ -std=c++14 -c aqui.cpp

clean:
	rm *.o app


