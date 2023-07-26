# 0x1B. C-Sorting A;gorithms & Big O

### [0. Bubble sort](./0-bubble_sort.c)
* A function that sorts an array of integers in ascending order using the Bubble sort algorithm(https://intranet.alxswe.com/rltoken/awhP8BhtkGi-lwmMc2-KAw).
	- Prototype: void bubble_sort(int *array, size_t size);
	- Print the array after each time you swap two elements.
	- In file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [1. Insertion sort](./1-insertion_sort_list.c)
* A function that sorts an array of integers in ascending order using the Insertion sort algorithm(https://intranet.alxswe.com/rltoken/GocxRKbPdsmERXeOHMCO2w).
	- Prototype: void insertion_sort_list(listint_t **list);
	- Not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	- Print the list after each time you swap two elements.
	- In file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [2. Selection sort](./2-selection_sort.c)
* A function that sorts an array of integers in ascending order using the Selection sort algorithm(https://intranet.alxswe.com/rltoken/SEbg0fBEraioQcl-igvUSw).
	- Prototype: void selection_sort(int *array, size_t size);
	- Print the array after each time you swap two elements.
	- In file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [3. Quick sort](./3-quick_sort.c)
* A function that sorts an array of integers in ascending order using the Quick sort algorithm(https://intranet.alxswe.com/rltoken/awhP8BhtkGi-lwmMc2-KAw).
	- Prototype: void quick_sort(int *array, size_t size);
	- Implement the Lomuto partition scheme.
	- The pivot should always be the last element of the partition being sorted
	- Print the array after each time you swap two elements.
	- In file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [4. Shell sort - Knuth Sequence](./100-shell_sort.c)
* A function that sorts an array of integers in ascending order using the Shell sort algorithm(https://intranet.alxswe.com/rltoken/FdpP4Qin3iDAaz1kuPD2Kg) using the Knuth sequence
	- Prototype: void shell_sort(int *array, size_t size);
	- Use the following sequence of intervals (a.k.a the Knuth sequence):
		- n+1 = n * 3 + 1
		- 1, 4, 13, 40, 121, ...
	- Print the array after each time you decrease the interval.

### [5. Cocktail shaker sort](./101-cocktail_sort_list.c)
A function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm(https://intranet.alxswe.com/rltoken/bwa4mHfUbbWTB8J2OIHvpA)
	- Prototype: void cocktail_sort_list(listint_t **list);
	- Not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	- You’re expected to print the list after each time you swap two elements
	- In the file 101-O, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [6. Counting sort](./102-counting_sort.c)
A function that sorts an array of integers in ascending order using the Counting sort algorithm(https://intranet.alxswe.com/rltoken/ChcoDSCqnJHGC-qrSPEGHQ)
	- Prototype: void counting_sort(int *array, size_t size);
	- Assume that array will contain only numbers >= 0
	- Allowed to use malloc and free for this task
	- Expected to print your counting array once it is set up
		- This array is of size k + 1 where k is the largest number in array
	- In file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [7. Merge sort](./103-merge_sort.c)
A function that sorts an array of integers in ascending order using the Merge sort algorithm(https://intranet.alxswe.com/rltoken/8sZ3nAhd_YLNzHCgNbbf8A)
	- Prototype: void merge_sort(int *array, size_t size);
	- Must implement the top-down merge sort algorithm
		- When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} ->{1, 2}, {3, 4, 5}
		- Sort the left array before the right array
	- Allowed to use printf
	- Allowed to use malloc and free only once (only one call)
	- In file 103-O, the big O notations of the time complexity of the Mergesort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [8. Heap sort](./104-heap_sort.c)
A function that sorts an array of integers in ascending order using the Heap sort algorithm(https://intranet.alxswe.com/rltoken/YKYRdSdomaVkNrtNv1KS6Q)
	- Prototype: void heap_sort(int *array, size_t size);
	- Must implement the sift-down heap sort algorithm
	- You’re expected to print the array after each time you swap two elements
	- In file 104-O, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [9. Radix sort](./105-radix_sort.c)
* A function that sorts an array of integers in ascending order using the Radix sort algorithm(https://intranet.alxswe.com/rltoken/pBsj4j_AF_mJAgNZWmX3VQ)
	- Prototype: void radix_sort(int *array, size_t size);
	- Must implement the LSD radix sort algorithm
	- Assume that array will contain only numbers >= 0
	- Allowed to use malloc and free for this task
	- Print the array each time you increase your significant digit

### [10. Bitonic sort](./106-bitonic_sort.c)
* A function that sorts an array of integers in ascending order using the Bitonic sort algorithm(https://intranet.alxswe.com/rltoken/N-bjAbxm5yr4DoeIDz5lLw)
	- Prototype: void bitonic_sort(int *array, size_t size);
	- Assume that size will be equal to 2^k, where k >= 0 (when array is not NULL …)
	- Allowed to use printf
	- Print the array each time you swap two elements
	- In file 106-O, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [11. Quick Sort - Hoare Partition scheme](./107-quick_sort_hoare.c)
* A function that sorts an array of integers in ascending order using the Quick sort algorithm(https://intranet.alxswe.com/rltoken/_pBTrH0Xyo4BRmQn4CtnMg)
	- Prototype: void quick_sort_hoare(int *array, size_t size);
	- Implement the Hoare partition scheme.
	- The pivot should always be the last element of the partition being sorted.
	- Print the array after each time you swap two elements
	- In file 107-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
		- The best case
		- The average case
		- The worst case

### [12. Dealer](./1000-sort_deck.c)
* A function that sorts a deck of cards.
	- Prototype: void sort_deck(deck_node_t **deck);
	- Allowed to use the C standard library function qsort
	- Please use the given data structures
	- You have to push you deck.h header file, containing the previous data structures definition
	- Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
	- You can assume there is exactly 52 elements in the doubly linked list.
	- You are free to use the sorting algorithm of your choice
	- The deck must be ordered:
		- From Ace to King
		- From Spades to Diamonds
---
