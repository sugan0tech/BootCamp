import java.util.*;

class Node {
    int value;
    Node next = null;

    Node(int value) {
        this.value = value;
    }
}

class LinkedList {
    Node head = null;

    void insert(int value) {
        Node neww = new Node(value);
        if (this.head == null) {
            this.head = neww;
            return;
        }
        neww.next = this.head;
        this.head = neww;
    }

    void flip() {
        Node temp = this.head;
        while (temp.next != null && temp.next.next != null) {
            if (temp.value > temp.next.value) {
                int tmp = temp.value;
                temp.value = temp.next.value;
                temp.next.value = tmp;
            }
            temp = temp.next.next;
        }
    }

    void reverse() {
        Node prev = null;
        Node curr = this.head;
        Node next = null;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        this.head = prev;
    }

    @Override
    public String toString() {
        String res = "";
        Node temp = this.head;
        while (temp != null) {
            res = res + temp.value + " ";
            temp = temp.next;
        }

        return res;
    }
}

public class Test {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        LinkedList lst = new LinkedList();
        while (n > 0) {
            lst.insert(scn.nextInt());
            n--;
        }
        System.out.println(lst);
        lst.flip();
        System.out.println(lst);
        lst.reverse();
        System.out.println(lst);
    }
}