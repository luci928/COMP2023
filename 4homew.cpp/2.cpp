#include <iostream>
using namespace std;

template <class T>
struct asc {
    bool operator()(T a, T b){
        return a > b;
    }
};


template <class T>
struct des {
    bool operator()(T a, T b){
        return a < b;
    }
};


template <class T>
struct nodo {
    T valor;
    nodo<T> *next;
    nodo(T v, nodo<T> *n = NULL) {
        valor = v;
        next = n;
    }
};

template <class T, class funtor>
struct lista_circular {
    nodo<T> *head = NULL;
    funtor compare;

    bool find(T valor);
    void add(T valor);
    void del(T valor);
    void print(); 
};

template <class T, class funtor>
void lista_circular<T, funtor>::add(T valor) {
  if(!find(valor)){
    nodo<T>* nuevo = new nodo<T>(valor);
    if(!head){
      head = nuevo;
      nuevo->next = head;
    }
    else{
      nodo<T>* temp = head;
      nodo<T>* prev = NULL;


      do{
        if(compare(valor, temp->valor)){
          nuevo->next = temp;

          if(prev){
            prev->next = nuevo;
          }
          else{
            nodo<T>* last = head;
            while (last->next != head){
              last = last->next;
            }
            head = nuevo;
            last->next = head;
          }
          return;
        }
        prev = temp;
        temp = temp->next;
        
      } while(temp != head);

      prev->next = nuevo;
      nuevo->next = head;
      
    }
  }
  
}

template <class T, class funtor>
bool lista_circular<T, funtor>::find(T valor) {
    nodo<T> *actual = head;
    if (!head) {
        return false;
    }
    do {
        if (actual->valor == valor) {
            return true;
        }
        actual = actual->next;
    } while (actual != head);
    return false;
}

template <class T, class funtor>
void lista_circular<T, funtor>::del(T valor) {
    if (!head) {
        return;
    }
    nodo<T>* temp = head;
    nodo<T>* prev = NULL;
    while (temp->valor != valor) {
        if (temp->next == head) {
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    if (temp->next == head && prev == NULL) {
        head = NULL;
        delete temp;
        return;
    }
    if (temp == head) {
        prev = head;
        while (prev->next != head) {
            prev = prev->next;
        }
        head = temp->next;
        prev->next = head;
        delete temp;
    }
    if (temp->next == head) {
        prev->next = head;
        delete temp;
    } else {
        prev->next = temp->next;
        delete temp;
    }
}

template <class T, class funtor>
void lista_circular<T, funtor>::print() {
    if (!head) {
        return;
    }
    nodo<T>* temp = head;
    do {
        cout << temp->valor << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
  lista_circular<int, des<int>> lista_asc;
  lista_asc.add(5);
  lista_asc.add(10);
  lista_asc.add(7);
  lista_asc.add(9);

  lista_asc.print();
}
