/*
 * Copyright (c) 2024 Upvord Institute
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*
Write a C program to implement linear search. Your program should:
Define an array of integers. For simplicity, you can hard-code this array in
your program, but make sure it contains at least 10 elements.
Example: int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
Prompt the user to enter an integer value they want to search for in the array.
Implement the linear search algorithm to search for the user-inputted value in
the array. The algorithm should iterate through each element of the array,
comparing the current element with the value being searched for.
If the value is found, print the index at which it is found and exit the loop.
If the value is not found in the array, print a message indicating that.
Ensure your program compiles and runs without errors.

*/

#include <stdio.h>

int linear_search(int a[], int size, int value);

int get_search_element();

int main() {
  int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  int result;

  if ((result = linear_search(arr, sizeof(arr) / sizeof(arr[0]),
                              get_search_element())) != -1) {
    printf("Element [%d] is not found\n", result);
  }
}

int get_search_element() {
  int search;
  printf("Enter the element to search:");
  scanf("%d", &search);
  return search;
}

int linear_search(int a[], int size, int value) {
  for (int i = 0; i < size; i++) {
    if (value == a[i]) {
      return i;
    }
  }
  return -1;
}
