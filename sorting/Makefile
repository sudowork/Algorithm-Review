all: bubblesort selectionsort

bubblesort: bubblesort.cc utility
	g++ bubblesort.cc utility.o -o bubblesort

selectionsort: selectionsort.cc utility
	g++ selectionsort.cc utility.o -o selectionsort
	
utility: utility.cc
	g++ -c utility.cc

clean:
	rm *.o bubblesort selectionsort
