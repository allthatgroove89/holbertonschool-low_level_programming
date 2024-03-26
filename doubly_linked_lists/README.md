# Doubly Linked Lists Readme

## Installation

Access Github and request a pull, [link](https://github.com/allthatgroove89/holbertonschool-low_level_programming/tree/master/doubly_linked_lists) to install to get function package.

## Function Prototypes

All function prototypes used to compile are included in the header file:

- size_t print_dlistint(const dlistint_t *h);

- size_t dlistint_len(const dlistint_t *h);

- dlistint_t *add_dnodeint(dlistint_t **head, const int n);

- dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

- void free_dlistint(dlistint_t *head);
- dlistint_t *get_dnodeint_at_index(dlistint_t*head, unsigned int index);
- int sum_dlistint(dlistint_t *head);
- dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
- int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

## Tasks
### 0.Print List

Write a function that prints all the elements of a `dlistint_t` list.

-   Prototype: `size_t print_dlistint(const dlistint_t *h);`
-   Return: the number of nodes
-   Format: see example

```
julien@ubuntu:~/Doubly linked lists$ ./a
9
8
-> 2 elements
```

### 1.List Length

Write a function that returns the number of elements in a linked `dlistint_t` list.

-   Prototype: `size_t dlistint_len(const dlistint_t *h);`
```
julien@ubuntu:~/Doubly linked lists$ ./b
-> 2 elements
```
### 2.Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.

-   Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
-   Return: the address of the new element, or `NULL` if it failed
```
julien@ubuntu:~/Doubly linked lists$ ./c
1024
402
98
4
3
2
1
0
```
### 3.Add node at the end

Write a function that adds a new node at the end of a `dlistint_t` list.

-   Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
-   Return: the address of the new element, or `NULL` if it failed

```
julien@ubuntu:~/Doubly linked lists$ ./d
0
1
2
3
4
98
402
1024
```

### 4. Free list

Write a function that frees a `dlistint_t` list.

-   Prototype: `void free_dlistint(dlistint_t *head);`

```
julien@ubuntu:~/Doubly linked lists$ valgrind ./e
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197==
0
1
2
3
4
98
402
1024
==4197==
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197==
==4197== All heap blocks were freed -- no leaks are possible
==4197==
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Doubly linked lists$


```


 ### 5. Get node at index

Write a function that returns the nth node of a `dlistint_t` linked list.

-   Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
-   where `index` is the index of the node, starting from `0`
-   if the node does not exist, return `NULL`


```
julien@ubuntu:~/Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98

```

 ###6. Sum list

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

-   Prototype: `int sum_dlistint(dlistint_t *head);`
-   if the list is empty, return `0`

```
julien@ubuntu:~/Doubly linked lists$ ./i
sum = 1534
```

### 7. Insert at index

Write a function that inserts a new node at a given position.

-   Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
-   where `idx` is the index of the list where the new node should be added. Index starts at `0`
-   Returns: the address of the new node, or `NULL` if it failed
-   if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

Your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction

```
julien@ubuntu:~/Doubly linked lists$ ./j
0
1
2
3
4
98
402
1024

0
1
2
3
4
4096
98
402
1024
```

###8. Delete at index
Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

-   Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
-   where `index` is the index of the node that should be deleted. Index starts at `0`
-   Returns: `1` if it succeeded, `-1` if it failed

```
julien@ubuntu:~/Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first

to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors and acknowledgment

## Saul Vera Echevestre (<saul.vera787@gmail.com>) , github [link](https://github.com/allthatgroove89/holbertonschool-printf)