all: bubblesort selectionsort insertionsort

bubblesort: bubblesort.cc utility
	g++ bubblesort.cc utility.o -o bubblesort

selectionsort: selectionsort.cc utility
	g++ selectionsort.cc utility.o -o selectionsort

insertionsort: insertionsort.cc utility
	g++ insertionsort.cc utility.o -o insertionsort
	
utility: utility.cc
	g++ -c utility.cc

clean:
	rm *.o bubblesort selectionsort
