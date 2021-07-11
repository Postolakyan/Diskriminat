diskr : diskrf.o diskrm.o
	g++ $^ -o $@

%.o : %.cpp
	g++ -c $^ -o $@

clean:
	rm *.o diskr
