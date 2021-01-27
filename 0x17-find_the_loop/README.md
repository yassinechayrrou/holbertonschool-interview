# 0x17. Find the Loop

Write a function that finds the loop in a linked list.
- Prototype: listint_t *find_listint_loop(listint_t *head);
- Returns: The address of the node where the loop starts, or NULL if there is no loop
- You are not allowed to use malloc, free or arrays
- You can only declare a maximum of two variables in your function

This is solved using floyd's algorithm which i demonstrated in my code @find_loop.c and to return the loop starting node you just required to move the slow pointer to start of the linked list and continue advancing both fast and slow pointer at the same speed meaning a node each loop until they meet at the starting node.
