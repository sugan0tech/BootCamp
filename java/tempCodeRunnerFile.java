import java.util.*;

class Node {
    char value;
    Node next;

    Node() {
        this.next = null;
    }

    Node(char value) {
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    Node head = null;

    void insert(char value) {
        Node neww = new Node(value);
        if (this.head == null) {
            head = neww;
            return;
        }
        Node temp = this.head;
        while (temp.next != null)
            temp = temp.next;
        temp.next = neww;
    }

    char pop() {
        Node temp = this.head;
        while (temp.next != null) {
            temp = temp.next;
        }
        char val = temp.value;
        temp = null;
        return val;
    }