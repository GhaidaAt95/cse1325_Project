#declare variable
CC = g++

CFLAGS = -c -std=c++11
all: sprint

sprint: USE.o Components.o Robot_part.o Main.o Model.o customer.o Sales_Associate.o shop.o Product_Manager.o PHB.o Order.o main_gui.o
	$(CC) Main.o USE.o Robot_part.o Components.o Model.o customer.o Sales_Associate.o shop.o Product_Manager.o PHB.o Order.o main_gui.o -o sprint.out -lfltk
main_gui.o: main_gui.h main_gui.cpp
	$(CC) $(CFLAGS) main_gui.cpp 
USE.o: USE.h USE.cpp
	$(CC) $(CFLAGS) USE.cpp
Components.o: Components.h Components.cpp USE.h 
	$(CC) $(CFLAGS) Components.cpp 
Robot_part.o: Robot_part.h Robot_part.cpp USE.h 
	$(CC) $(CFLAGS) Robot_part.cpp
Model.o: Model.h Model.cpp 
	$(CC) $(CFLAGS) Model.cpp
customer.o: customer.h customer.cpp Order.h
	$(CC) $(CFLAGS) customer.cpp 
Sales_Associate.o: Sales_Associate.h Sales_Associate.cpp 
	$(CC) $(CFLAGS) Sales_Associate.cpp
Product_Manager.o: Product_Manager.h Product_Manager.cpp Model.h 
	$(CC) $(CFLAGS) Product_Manager.cpp 
PHB.o: PHB.h PHB.cpp 
	$(CC) $(CFLAGS) PHB.cpp
Order.o: Order.h main_gui.h
	$(CC) $(CFLAGS) Order.cpp
shop.o: shop.h shop.cpp  Order.h  customer.h USE.h  main_gui.h
	$(CC) $(CFLAGS) shop.cpp
Main.o: Main.cpp 
	$(CC) $(CFLAGS) Main.cpp

run:
	./sprint.out
clean: 
	rm Robot_Components_Saved.txt Robot_Models_Saved.txt -rf *o *.h.gch *.out game.out




