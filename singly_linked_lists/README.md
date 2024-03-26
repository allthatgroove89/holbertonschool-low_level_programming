# Linked Lists Readme

## Installation

Access Github and request a pull, [link](https://github.com/allthatgroove89/holbertonschool-low_level_programming/tree/master/singly_linked_lists) to install to get function package.

## Function Prototypes

All function prototypes used to compile are included in the header file:

- size_t print_list(const list_t *h);

- size_t list_len(const list_t *h);

- list_t *add_node(list_t **head, const char*str);

- list_t *add_node_end(list_t **head, const char*str);

- void free_list(list_t *head)

## Tasks

### 0. Print list

Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);

Return: the number of nodes

Format: see example

If str is NULL, print [0] (nil)

You are allowed to use printf

```C

julien@ubuntu:~/Singly linked lists$ ./a

[5] Hello

[5] World

-> 2 elements

[0] (nil)

[5] World

-> 2 elements

```

### 1. List length

Write a function that returns the number of elements in a linked list_t list.

Prototype: size_t  list_len(const  list_t *h);

```C

julien@ubuntu:~/Singly linked lists$ ./b

-> 2 elements

```

### 2. Add node

Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char*str);

Return: the address of the new element, or NULL if it failed

str needs to be duplicated

You are allowed to use strdup

```C

julien@ubuntu:~/Singly linked lists$ ./c

[3] Zee

[7] William

[7] Tasneem

[6] Steven

[9] Sravanthi

[6] Siphan

[4] Rona

[4] Rick

[4] Rick

[7] Praylin

[5] Mason

[6] Marine

[4] Kris

[7] Josquin

[4] John

[4] John

[3] Joe

[6] Gloria

[7] Electra

[4] Dora

[6] Daniel

[6] Damian

[8] Chandler

[5] Bilal

[7] Bennett

[8] Augustin

[5] Asaia

[9] Alexandro

```

### 3. Add node at the end

Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char*str);

Return: the address of the new element, or NULL if it failed

str needs to be duplicated

You are allowed to use strdup

```C

julien@ubuntu:~/Singly linked lists$ ./d

[4] Anne

[6] Colton

[6] Corbin

[6] Daniel

[6] Danton

[5] David

[4] Gary

[6] Holden

[3] Ian

[3] Ian

[3] Jay

[6] Jennie

[5] Jimmy

[6] Justin

[6] Kalson

[4] Kina

[7] Matthew

[3] Max

[7] Michael

[4] Ntuj

[6] Philip

[7] Richard

[8] Samantha

[6] Stuart

[5] Swati

[7] Timothy

[6] Victor

[6] Walton

```

### 4. Free list

Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);

```C

julien@ubuntu:~/Singly linked lists$ valgrind ./e

==3598== Memcheck, a memory error detector

==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.

==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info

==3598== Command: ./e

==3598==

[3] Bob

[1] &

[3] Kris

[4] love

[3] asm

==3598==

==3598== HEAP SUMMARY:

==3598== in use at exit: 0 bytes in 0 blocks

==3598== total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated

==3598==

==3598== All heap blocks were freed -- no leaks are possible

==3598==

==3598== For counts of detected and suppressed errors, rerun with: -v

==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first

to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors and acknowledgment

## Saul Vera Echevestre (<saul.vera787@gmail.com>) , github [link](https://github.com/allthatgroove89/holbertonschool-printf)
