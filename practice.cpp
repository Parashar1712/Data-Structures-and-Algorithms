#include<iostream>
#include<string>
using namespace std;

struct Node{
    int roll_no;
    string name;
    float gpa;
    Node* next;
};

Node* head = nullptr;

void insert(int roll_no, string name, float gpa){
    Node* newNode = new Node();
    newNode->roll_no = roll_no;
    newNode->name = name;
    newNode->gpa = gpa;
    newNode->next = head;
    head = newNode;
    cout<<"New record inserted"<<endl;

}

void delete_record(int roll_no){
    Node*temp = head;
    while(temp->roll_no != roll_no){
        temp = temp->next;
    }
    if(temp != nullptr){
        Node* toDelete = temp;
        temp = temp->next;
        delete toDelete;
        cout<<"Record deleted"<<endl;
    }
}

void display(){
    Node*temp = head;
    while(temp!=nullptr){
        cout<<temp->roll_no<<" "<<temp->name<<" "<<temp->gpa<<endl;
        temp = temp->next;
    }
}

void search(int roll_no){
    Node*temp = head;
    while(temp!=nullptr){
        if (temp->roll_no == roll_no){
            cout<<"Record found"<<endl;
            cout<<temp->roll_no<<" "<<temp->name<<" "<<temp->gpa<<endl;
            return;
        }temp = temp->next;
    }
    cout<<"Record not found"<<endl;

}

int main(){
    int roll;
    string name;
    float gpa;
    do{
        cout<<"1. insert Record"<<endl;
        cout<<"2. delete record"<<endl;
        cout<<"3. display all records"<<endl;
        cout<<"4. search record"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"Enter your choice: ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter roll number: ";
            cin>>roll;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter gpa";
            cin>>gpa;
            insert (roll, name, gpa);
            break;
            case 2:
            cout<<"Enter roll number to delete:"
    return 0;
}
