# Linked Lists in C++

Linked lists are a fundamental data structure used to store and manage collections of data in a linear, dynamic way. This repository contains a C++ program that demonstrates basic operations on a singly linked list. This README provides an algorithm and explanation for the code.

## Table of Contents
- [Introduction to Linked Lists](#introduction-to-linked-lists)
- [Algorithm](#algorithm)
- [Code Explanation](#code-explanation)

---

## Introduction to Linked Lists

A linked list is a data structure that consists of a sequence of elements, each connected to the next element through a reference or pointer. The fundamental building block of a linked list is a "node," which contains both the data and a reference (or link) to the next node in the sequence. This structure allows for efficient insertion and deletion of elements, making linked lists a versatile data structure for various applications.

## Algorithm

### Linked List Operations Algorithm

1. Start
2. Create a `Node` class to represent a node in the linked list. Each node contains an integer value `val` and a pointer `next` to the next node.
   - The constructor initializes the node with the given `data` and sets `next` to `NULL`.
3. Define functions:
   - `insertAtHead(Node* &head, int val)` to insert a new node with the value `val` at the beginning of the linked list.
   - `display(Node* head)` to display the linked list from the head to the end.
   - `delAtHead(Node* head)` to delete the node at the head.
   - `insertAtEnd(Node* head, int val)` to insert a new node with the value `val` at the end of the linked list (not implemented).
   - `delAtEnd(Node* head)` to delete the last node in the linked list (not implemented).
4. In the `main` function:
   - Create a menu-driven interface for performing linked list operations.
   - Allow the user to:
     - Add a node at the beginning.
     - Delete a node at the beginning.
     - Add a node at the end (not implemented).
     - Delete a node at the end (not implemented).
     - Display the linked list.
5. Repeat the menu options until the user chooses to exit.
6. End.

## Code Explanation

The provided C++ code demonstrates basic linked list operations, including inserting and deleting nodes at the head, and displaying the linked list. The code provides a menu-driven interface for user interaction.

- `insertAtHead(Node* &head, int val)`: This function inserts a new node with the given value `val` at the beginning of the linked list.
- `display(Node* head)`: This function displays the linked list from the head to the end.
- `delAtHead(Node* head)`: This function deletes the node at the head.

**Note:** The functionality to add and delete nodes at the end is not implemented in the provided code. You can extend the code to include these operations.

