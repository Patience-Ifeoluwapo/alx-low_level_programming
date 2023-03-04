# Makefile
CCC = /usr/bin/g++
CC  = /usr/bin/gcc
CFLAGS = -03 #-ansi -pg
HOME = /home/shah
PWD = ${HOME}/Distrib
INCLUDE = -I${PWD}


SRC_GEN_SMESH = gen_smesh.cc zeltform.cc \
geom.cc error.cc util.cc
OBJ_GEN_SMESH = ${SRC_GEN_SMESH:.cc=.o}

SRC_EDIT_SMESH = edit_smesh.cc \
geom.cc error .cc util.cc smesh.cc interface.cc corrlen.cc
SRC_EDIT_SMESH_C = d_jacobi.c d_choldc.c nrutil.c
OBJ_EDIT_SMESH = ${SRC_EDIT_SMESH:.cc=.o} ${SRC_EDIT_SMESH_C:.c=.o}

SRC_STAT_SMESH = stat_smesh.cc error.cc interface.cc util.cc
OBJ_STAT_SMESH = ${SRC_STAT_SMESH:.cc=.o}

SRC_TT_FORWARD = tt_forward.cc syngen.cc smesh.cc graph.cc \
traveltime.cc betaspline.cc \
bend.cc bend_mnbrak.cc bend_brent.cc \
interface.cc corrlen.cc \
geom.cc error.cc util.cc
SRC_TT_FORWARD_C = d_jacobi.c d_choldc.c nrutil.c
OBJ_TT_FORWARD = ${SRC_TT_FORWARD:.cc=.o} ${SRC_TT_FORWARD_C:.c=.o}

My Learning Objectives for the makefile project are these;
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them
