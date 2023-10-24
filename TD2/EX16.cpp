#include <iostream>

struct Element {
    int info;
    Element* next;

    Element(int v) : info(v), next(nullptr) {}
};

class List {
private:
    Element* head;

public:
    List() : head(nullptr) {}

  
    void add(int val) {
        Element* newElement = new Element(val);
        newElement->next = head;
        head = newElement;
    }

    void remove() {
        if (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void display() {
        Element* current = head;
        while (current) {
            std::cout << current->info << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }


    ~List() {
        while (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    List myList;
    myList.add(10);
    myList.add(20);
    myList.add(30);

    myList.display(); // Affiche : 30 20 10

    myList.remove();
    myList.display(); // Affiche : 20 10

    return 0;
}
