# 0x12. C - Singly linked lists

<h1>Tasks</h1>
<h3>0. Print list</h3>
Write a function that prints all the elements of a list-t list.


- Prototype: size-t print-ist(const list-t *h);
- Return: the number of nodes;
- If str is NULL, print [0] (nil);
- You are allowed to use printf;
<h3>1. List length</h3>
Write a function that returns the number of elements in a linked list_t list.

- Prototype: size_t list_len(const list_t *h);
<h3>2. Add node</h3>
Write a function that adds a new node at the beginning of a list-t list.

- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
<h3>3. Add node at the end</h3>
Write a function that adds a new node at the end of a list_t list.

- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup
<h3>4. Free list</h3>
Write a function that frees a list_t list.

- Prototype: void free_list(list_t *head);

<!--Advanced task -->
<h3>5. The Hare and the Tortoise</h3>
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

- You are allowed to use the printf function

<h3>6. Real programmers can write assembly code in any language</h3>
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

- You are only allowed to use the printf function
- You are not allowed to use interrupts
- Your program will be compiled using nasm and gcc:

<!--files-->
