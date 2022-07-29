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

    void push(char value) {
        Node neww = new Node(value);
        if (this.head == null) {
            this.head = neww;
            return;
        }
        neww.next = this.head;
        this.head = neww;
    }

    char pop() {
        char res = this.head.value;
        this.head = this.head.next;
        return res;
    }

    @Override
    public String toString() {
        String res = "";
        Node temp = this.head;
        while (temp != null) {
            res += temp.value + " ";
            temp = temp.next;
        }
        return res;
    }
}

class Main {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        LinkedList lst = new LinkedList();
        String str = scn.nextLine();
        for (char i : str.toCharArray()) {
            if (i == ' ' || i == ',')
                continue;
            lst.push(i);
        }
        System.out.println(lst);
        for (char i : str.toCharArray()) {
            if (i == ' ' || i == ',')
                continue;
            if (i != lst.pop()) {
                System.out.println(str + " NO");
                return;
            }
        }
        System.out.println(str + " YES");
    }
}