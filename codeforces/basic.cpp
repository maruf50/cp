#include <bits/stdc++.h>
using namespace std;

struct node{

    int val;
    node *next;
};

void insertAtFirst(node*& head,int data){

    node *n = new node;
    n->val = data;
    n->next = head;
    head = n;
}

void deleteNode(node*& head,int data){

    node *cur = head;
    while (cur)
    {
       if (cur->next->val == data){
            cur->next = cur->next->next;
            delete(cur);
       }

    }
    

}




int main(){

    node *head = new node;
    head->val = 5;
    head->next = nullptr;

    node *n1 = new node;
    n1->val = 2;
    n1->next = nullptr;
    head->next = n1;

    node *n2 = new node;
    n2->val = 3;
    n2->next = nullptr;
    n1->next = n2;

    insertAtFirst(head,4);
    insertAtFirst(head,10);


    node *cur = head;
    while (cur)
    {
        cout << cur->val << endl;
        cur = cur->next;
    }

}

