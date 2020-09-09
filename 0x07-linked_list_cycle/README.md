# 0x07-linked_list_cycle

## Problem

Write a function in C that checks if a singly linked list has a cycle in it.

## Solution

Using floyd's algorithm : at a given linked list if we traverse the linked list with two pointers one is faster with double the other at certain time if there is cycle the two pointers will point to the same node else the faster pointer will reach the end of linked list meaning no cycle.

