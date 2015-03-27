f74034033: BMI.o f74034033.o
	g++ -o BMI f74034033.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

f74034033.o: f74034033.cpp BMI.h
	g++ -c f74034033.cpp

clean:
	rm BMI *.o
