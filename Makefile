EXEC = projetDyna

all: compil run doxy

compil:
	gcc *.c -o $(EXEC)

run:
	./$(EXEC)

doxy:
	firefox html/index.html