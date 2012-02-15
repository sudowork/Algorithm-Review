#!/bin/sh

unsortedtestgenerator 1000 1000000 > unsortedtest
time cat unsortedtest | bubblesort		| grep -vE "(\[.*\]|^$)"
time cat unsortedtest | selectionsort	| grep -vE "(\[.*\]|^$)"
time cat unsortedtest | insertionsort 	| grep -vE "(\[.*\]|^$)"
