###############################################################
# Program:
#     Assignment 06, NODE
#     Brother Kirby, CS235
# Author:
#     Ken Smith
#	Tim O'Barr
#	Jessica Smith
# Hours:
# 	Paired: 7 hours
#       Solo:
#	Ken Smith: 5 hours
#	Tim O'Barr: 10 hours
#	Jessica Smith: 4 hours
# Summary:
#     This program creates a Node for a Linked List and then
#	proceeds to sort the linked list
#Difficulties:
# Ken Smith: We decided to use gitHub, which was new for me, and I had a hard time
#               figuring out how to use it.
# Tim O'Barr: 
# Jessica Smith: Figuring out the logic for sortInsertion was
#	difficult and took some time.
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
