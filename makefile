CXXFLAGS= -Wall -lm -s

default:
  @echo "There are 3 make options:"
	@echo "make all (Builds all problems)"
	@echo "make problem* (For specific problem)"
	@echo "make clean (Object file/exe cleanup)"

problem1: problem1.c
	gcc $(CXXFLAGS) problem1.c -o problem1
	./problem1
problem2: problem2.c
	gcc $(CXXFLAGS) problem2.c -o problem2
	./problem2
problem3: problem3.c
	gcc $(CXXFLAGS) problem3.c -o problem3
	./problem3
problem4: problem4.c
	gcc $(CXXFLAGS) problem4.c -o problem4
	./problem4
problem5: problem5.c
	gcc $(CXXFLAGS) problem5.c -o problem5
	./problem5
problem6: problem6.c
	gcc $(CXXFLAGS) problem6.c -o problem6
	./problem6
problem7: problem7.c
	gcc $(CXXFLAGS) problem7.c -o problem7
	./problem7
problem8: problem8.c
	gcc $(CXXFLAGS) problem8.c -o problem8
	./problem8 problem8input.txt
problem9: problem9.c
	gcc $(CXXFLAGS) problem9.c -o problem9
	./problem9
problem10: problem10.c
	gcc $(CXXFLAGS) problem10.c -o problem10
	./problem10
problem11: problem11.c
	gcc $(CXXFLAGS) problem11.c -o problem11
	./problem11 problem11input.txt
problem12: problem12.c
	gcc $(CXXFLAGS) problem12.c -o problem12
	./problem12
problem13: problem13.c
	gcc $(CXXFLAGS) problem13.c -o problem13
	./problem13 problem13input.txt
problem14: problem14.c
	gcc $(CXXFLAGS) problem14.c -o problem14
	./problem14
problem14a: problem14a.c
	gcc $(CXXFLAGS) problem14a.c -o problem14a
	./problem14a
problem15: problem15.c
	gcc $(CXXFLAGS) problem15.c -o problem15
	./problem15
problem16: problem16.c
	gcc $(CXXFLAGS) problem16.c -o problem16
	./problem16
	
intro:
	@echo ""
	@echo "RUNNING PROJECT EULER PROBLEM SOLVER"
	@echo ""	
clean:
	@echo ""
	@echo "Cleaning up build files..."
	-rm -f problem1 problem2 problem3 problem4 problem5 problem6 problem7 problem8 problem9 problem10 problem11 problem12 problem13 problem14 problem14a problem15 problem16
	
all: intro clean problem1 problem2 problem3 problem4 problem5 problem6 problem7 problem8 problem9 problem10 problem11 problem12 problem13 problem14 problem14a problem15 problem16 complete


complete:
	@echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
	@echo "All programs ran successfully!"
	
