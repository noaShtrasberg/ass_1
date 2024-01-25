CC = gcc
FLAGS = -Wall -g 

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloop.a
# create a static lib with basic and advenced loop
libclassloop.a: advancedClassificationLoop.o basicClassificationLoop.o
	ar -rcs libclassloop.a advancedClassificationLoop.o basicClassificationLoop.o

recursives: libclassrec.a 
# create a static lib with basic and advenced recursive
libclassrec.a: advancedClassificationRecursion.o basicClassificationLoop.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassificationLoop.o

recursived: libclassrec.so
#create a dynamic lib with basic and advenced recursive
libclassrec.so:  advancedClassificationRecursion.o basicClassificationLoop.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassificationLoop.o

loopd: libclassloop.so
#create a dynamic lib with basic and advenced loop
libclassloop.so:  advancedClassificationLoop.o basicClassificationLoop.o
	$(CC) -shared -o libclassloop.so advancedClassificationLoop.o basicClassificationLoop.o

mains: main.o libclassrec.a 
	$(CC) $(FLAGS) -o mains main.o libclassrec.a

maindloop: main.o 
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloop.so 

maindrec: main.o 
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so 

advancedClassificationLoop.o: NumClass.h advancedClassificationLoop.c
	$(CC) $(FLAGS) -fPIC -c advancedClassificationLoop.c

advancedClassificationRecursion.o: NumClass.h advancedClassificationRecursion.c 
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c 

basicClassificationLoop.o: NumClass.h basicClassificationLoop.c 
	$(CC) $(FLAGS) -fPIC -c basicClassificationLoop.c 

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 


clean: 
	rm *.o *.so *.a mains maindloop maindrec


