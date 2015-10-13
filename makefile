OBJ=smtpmail.o main.o
std=std=c++11

main:$(OBJ)
	g++ $(OBJ) -g -o main

main.o:smtpmail.h main.cc
	g++ -$(std) -g -c main.cc

smtpmail.o:log.h base64encode.h smtpmail.h smtpmail.cc
	g++ -$(std) -g -c smtpmail.cc

.PHONY:clear
clear:
	rm *.o main
