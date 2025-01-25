# Bubbles_Pointers

## <ins>Overview</ins>
This project/code is to take an array of 9 numbers and sort them from smallest to highest.

## **Functions**
- sort()
- swap()
- printArray()
- main()

Before making functions, create variable int MAX = 9

<ins>Sort()</ins>

The sort function is made to sort the numbers in the array. Simple idea. 
The following is directly from the provided Algorithim on Canvas.

constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)


<ins>swap()</ins>

This function is the simpliest in my opinion, the goal is to swap two numbers.
- create function with parameters, void swap(int, int); minus the astorik for layout purposes
- once parameters are in
	- create variable int temporary to take one number
	- Have int x (or the first int of the parameter) get y
		- x = y
	- have int y get temp (temporary for short)
- close swap

<ins> printValues() </ins>

- print opening [
- create for loop with variable i to go through array
- print out array[i]
- print closing ]
- close printValues

<ins>main()</ins>

Main runs and tests the different functions

- Create array called values with 9 numbers
- run printValues() for a print test and to show the before and after
- Test swap using int x and y
- run sort(array)
- print array using printValues() again
- end main
