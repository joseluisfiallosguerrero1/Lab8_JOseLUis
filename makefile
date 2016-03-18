figure:		obras.o pinturas.o esculturas.o  literatura.o arquitectonico.o main.o
	g++ obras.o pinturas.o esculturas.o literatura.o arquitectonico.o main.o -o figure

main.o:		main.cpp obras.h esculturas.h literatura.h arquitectonico.h pinturas.h
	g++ -c main.cpp

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp

pinturas.o:	pinturas.cpp obras.h  pinturas.h
	g++ -c pinturas.cpp

esculturas.o:	esculturas.cpp obras.h esculturas.h
	g++ -c esculturas.cpp

literatura.o:	literatura.cpp literatura.h obras.h
	g++ -c literatura.cpp

arquitectonico.o:      arquitectonico.cpp  arquitectonico.h obras.h
	g++ -c arquitectonico.cpp

clean:
	rm *.o figure
