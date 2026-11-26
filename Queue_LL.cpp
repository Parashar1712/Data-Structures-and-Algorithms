#include <iostream>
#include <string>
using namespace std;

struct Node {
    int ticketId;
    string customerName;
    Node* next;
    
    Node(int id, string name) {
        ticketId = id;
        customerName = name;
        next = nullptr;
    }
};

class TicketQueue {
private:
    Node* front;
    Node* rear;
    int nextTicketId;

public:
    TicketQueue() {
        front = nullptr;
        rear = nullptr;
        nextTicketId = 101;
    }

    void enqueue(string name) {
        Node* newNode = new Node(nextTicketId++, name);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "\nTicket booked successfully! Ticket ID: " << newNode->ticketId << " for " << name << endl;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "\nQueue is empty. No customers to serve." << endl;
            return;
        }
        Node* temp = front;
        cout << "\nServing customer: " << temp->customerName << " (Ticket ID: " << temp->ticketId << ")" << endl;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }

    void displayQueue() {
        if (front == nullptr) {
            cout << "\nQueue is currently empty." << endl;
            return;
        }
        cout << "\n--- Current Waiting Queue ---" << endl;
        Node* current = front;
        while (current != nullptr) {
            cout << "Ticket ID: " << current->ticketId << " | Name: " << current->customerName << endl;
            current = current->next;
        }
        cout << "-----------------------------" << endl;
    }
};

int main() {
    TicketQueue queue;
    int choice;
    string name;

    do {
        cout << "\n===============================" << endl;
        cout << "   TICKET BOOKING SYSTEM MENU   " << endl;
        cout << "===============================" << endl;
        cout << "1. Book Ticket (Enqueue)" << endl;
        cout << "2. Serve Customer (Dequeue)" << endl;
        cout << "3. Display Waiting Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin.ignore();
                getline(cin, name);
                queue.enqueue(name);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.displayQueue();
                break;
            case 4:
                cout << "Exiting system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a option between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
