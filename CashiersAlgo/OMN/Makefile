CC = g++
INCLUDE = .
CFLAGS = -g -Wall -ansi
run: cashier.exe
	@./cashier.exe
cashier.exe: Main.cpp
	$(CC) $(CFLAGS) -o cashier.exe Main.cpp
clean:
	@rm *.exe
