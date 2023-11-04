#include <iostream>
#include <string>
using namespace std;

template <class T>
struct Nodo
{
    T value;
    Nodo<T>* next;
    Nodo(T v, Nodo<T>* n = NULL)
    {
        value = v;
        next = n;
    }
};

template <class T>
class ListaEnlazada
{
public:
    Nodo<T>* inicio = NULL;
    void agregar(T valor);
    void eliminar(T valor);
    bool encontrar(T valor, Nodo<T>*& posicion);
    void fusionar(Nodo<T>* L1, Nodo<T>* L2);
    void imprimir();
    ~ListaEnlazada();
};

template <class T>
bool ListaEnlazada<T>::encontrar(T valor, Nodo<T>*& posicion)
{
    posicion = NULL;
    Nodo<T>* p = inicio;

    for (; p && p->value < valor; posicion = p, p = p->next);

    if (p && p->value == valor)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void ListaEnlazada<T>::agregar(T valor)
{
    Nodo<T>* posicion;

    if (!encontrar(valor, posicion))
    {
        if (!posicion)
        {
            inicio = new Nodo<T>(valor, inicio);
        }
        else
        {
            posicion->next = new Nodo<T>(valor, posicion->next);
        }
    }
}

template <class T>
void ListaEnlazada<T>::eliminar(T valor)
{
    Nodo<T>* posicion, *tmp;

    if (encontrar(valor, posicion))
    {
        if (!posicion)
        {
            tmp = inicio;
            inicio = inicio->next;
            delete tmp;
        }
        else
        {
            tmp = posicion->next;
            posicion->next = tmp->next;
            delete tmp;
        }
    }
}

template <class T>
void ListaEnlazada<T>::imprimir()
{
    Nodo<T>* actual = inicio;

    while (actual)
    {
        cout << actual->value << " ";
        actual = actual->next;
    }
}

template <class T>
ListaEnlazada<T>::~ListaEnlazada()
{
    Nodo<T>* actual = inicio;

    while (actual)
    {
        Nodo<T>* siguiente = actual->next;
        delete actual;
        actual = siguiente;
    }
}

template <class T>
void fusionar(ListaEnlazada<T>& L1, ListaEnlazada<T>& L2)
{
    Nodo<T>* p = L1.inicio;
    Nodo<T>* q = L2.inicio;
    Nodo<T>* r = nullptr;

    if (p && q)
    {
        if (p->value < q->value)
        {
            r = p;
            p = p->next;
        }
        else
        {
            r = q;
            q = q->next;
        }

        L1.inicio = r;

        while (p && q)
        {
            if (p->value < q->value)
            {
                r->next = p
