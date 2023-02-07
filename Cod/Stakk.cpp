#include <iostream>
#include <fstream>

class CMyStack {
public:
    Stack();       
    ~Stack();      
    void Push(int d); 
    int Pop();
    bool isEmpty();
    void Print();

private:
    struct Node {
        int d;
        Node *p;
    };

    Node *top;
};

Stack::Stack() :top(NULL) {}

void Stack::Push(int d) {
    Node *pv = new Node; 
    pv->d = d; 
    pv->p = top; 
    top = pv;
}

int Stack::Pop() {
    if (isEmpty()) { 
        return -1;
    }

    int temp = top->d; 
    Node *pv = top;
    top = top->p; 
    delete pv;
    return temp;
}

bool Stack::isEmpty() { 
    return top ? false : true; 
}

void Stack::Print() {
    while (top) { 
        cout << Pop() << ' '; 
    }

    cout << endl;
}

Stack::~Stack() {
    while (top) {
        Node *pv = top;
        top = top->p;
        delete pv;
    }
}

void emptyStack(Stack & stack);

int main() {
    Stack TrainBase, OneTrain, TwoTrain;
    ifstream in("trains.txt", std::ios::in);
    if (!in) {
        cout << endl;
        return 1;
    }

    while (!in.eof()) {
        int pr;
        in >> pr;
        TrainBase.Push(pr);
    }

    while (!TrainBase.isEmpty()) {
        int pr = TrainBase.Pop();
        switch (pr) {
        case 1: 
            OneTrain.Push(pr);
            break;
        case 2:
            TwoTrain.Push(pr);
            break;
        }
    }

    OneTrain.Print();
    TwoTrain.Print();

    int _getch();

    system("pause");
    return 0;
}

void emptyStack(Stack & stack) {
    if (stack.isEmpty()) {
        cout << " empty" << endl;
    } else {
        cout << " not empty" << endl;
    }
}
