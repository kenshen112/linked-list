###############################################################
# Program:
#     Assignment 06, NODE
#     Brother Kirby, CS235
# Author:
#     Ken Smith
#	Tim O'Barr
#	Jessica Smith
# Hours:
# 	Paired:
#	Ken Smith:
#	Tim O'Barr:
#	Jessica Smith:
# Summary:
#     This program creates a Node for a Linked List and then
#	proceeds to sort the linked list
#Difficulties:
# Ken Smith:
# Tim O'Barr:
# Jessica Smith:
###############################################################

##############################################################
# The main rule
##############################################################
a.out: node.h assignment06.o 
	g++ -o a.out assignment06.o  -g -std=c++11
	tar -cf assignment06.tar *.h *.cpp makefile

##############################################################
# The individual components
#      assignment06.o      : the driver program
#      <anything else?>
##############################################################
assignment06.o: node.h assignment06.cpp sortInsertion.h
	g++ -c assignment06.cpp -g -std=c++11
