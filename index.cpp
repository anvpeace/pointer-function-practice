#include <iostream>

using namespace std;
// Exercise 1.

// Create a function "createArray" that initializes a dynamically allocated array of integers
// with the size of the array sent as the argument of the function. The function should return
// the array it creates so it can be assigned to any dynamically allocated variable in other
// functions.
int * creatArray (int *);

int main (){

    cout << "How many elements would you like in your array?" << endl;
    int amount;
    cin >> amount;

    cout << endl << endl << endl;
    
    int * s = new int[amount];

    creatArray(&amount);

    delete []s;

    return 0;
}

int * creatArray(int * size){

    int arrLength = *size;

    for (int i = 0; i < arrLength; i++){
       cout << (arrLength + i) << endl;
    
    }

    // cout << (arrLength + 0) << endl;
    // cout << (arrLength + 1) << endl;
    // cout << *(size + 1) << " " << (size + 1) << endl;
    // cout << *(size + 2) << endl;

    int &arrSize = arrLength;

    return &arrSize + 0;
}
// In this set of exercises you will create a simple program (step by step) for sorting the
// numbers inputted by the user into a dynamically allocated array of integers. The user will
// also make the choice concerning the order (ascending or descending) the array should be 
// sorted with. For dynamically allocated variables remember to free the memory.


// Exercise 2.

// Create a function "swapTwoValues" that swaps the value of one variable with the value of 
// the second variable. Both variables should be sent as the arguments. Instead of using
// references use pointers. 

// Exercise 3.

// Create functions "fillArrayWithValues" and "printArrayValues". Both of the functions should
// take the array and its size as the arguments. First function should fill the array with values,
// the second should print all values of the array.

// Exercise 4.

// Create a function "bubbleSort". The function should take three arguments, array and its 
// size and order of sorting. Depending on the third parameter the function should either sort
// the array with ascending or descending order, the default argument should be set as ascending.


// Concerning the workflow of the bubble sort algorithm please visit the websites below.
// However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
// algorithm and "printArrayValues" function to print the values of the sorted array after the
// procedure is done.

// https://en.wikipedia.org/wiki/Bubble_sort
// http://www.go4expert.com/articles/bubble-sort-algorithm-absolute-beginners-t27883/

// Exercise 5.

// Create a function "selectionSort". The function should take three arguments, array and its
// size and order of sorting. Depending on the third parameter the function should either sort
// the array with ascending or descending) order, the default argument should be set as ascending.
// Use the "swapTwoValues" function to simplify the algorithm and "printArrayValues" function
// to print the values of the sorted array after the procedure is done.

// Concerning the workflow of the selection sort algorithm please visit the websites below.
// However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
// algorithm and "printArrayValues" function to print the values of the sorted array after the
// procedure is done.

// https://en.wikipedia.org/wiki/Selection_sort
// https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm

// Exercise 6.

// Using the functions created in exercises from 1 to 5 write a program that asks the user for 
// the size of the array. Declare a dynamically allocated variable and assign to it the "createArray"
// function with the inputted size as the argument. Using "fillArrayWithValues" fill the created
// array. And show the user the numbers he/she inputted with "printArrayValues". Then ask the user
// if the array should be sorted with ascending or descending (default: ascending) order and which
// sorting algorithm should be used (default bubble).

// eg.

// Output: 
// Input the size of the array to sort:

// User Inputted:
// 10

// Output/User Inputted: 
// Enter 1 element: 3
// Enter 2 element: 4
// Enter 3 element: 123
// Enter 4 element: 15
// Enter 5 element: 35
// Enter 6 element: 12324
// Enter 7 element: 424
// Enter 8 element: 8
// Enter 9 element: 9
// Enter 10 element: 10

// Sort Ascending - 1, Descending - 2: 2
// Bubble Sort - B or b, Selection Sort - S or s: B

// Output:
// Array[0] = 12324
// Array[1] = 424
// Array[2] = 123
// Array[3] = 35
// Array[4] = 15
// Array[5] = 10
// Array[6] = 9
// Array[7] = 8
// Array[8] = 4
// Array[9] = 3