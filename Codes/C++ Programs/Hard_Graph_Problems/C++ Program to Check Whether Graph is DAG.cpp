/*This is a C++ Program to check whether graph is DAG. In mathematics and computer science, a directed acyclic graph (DAG Listeni/’dæg/), is a directed graph with no directed cycles. That is, it is formed by a collection of vertices and directed edges, each edge connecting one vertex to another, such that there is no way to start at some vertex v and follow a sequence of edges that eventually loops back to v again.*/

#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int c = 0;
struct adj_list
{
    int dest;
    adj_list *next;
}*np = NULL, *np1 = NULL, *p = NULL, *q = NULL;
struct Graph
{
    int v;
    adj_list *ptr;
} array[6];
void addReverseEdge(int src, int dest)
{
    np1 = new adj_list;
    np1->dest = src;
    np1->next = NULL;
    if (array[dest].ptr == NULL)
        {
            array[dest].ptr = np1;
            q = array[dest].ptr;
            q->next = NULL;
        }
    else
        {
            q = array[dest].ptr;
            while (q->next != NULL)
                {
                    q = q->next;
                }
            q->next = np1;
        }
}
void addEdge(int src, int dest)
{
    np = new adj_list;
    np->dest = dest;
    np->next = NULL;
    if (array[src].ptr == NULL)
        {
            array[src].ptr = np;
            p = array[src].ptr;
            p->next = NULL;
        }
    else
        {
            p = array[src].ptr;
            while (p->next != NULL)
                {
                    p = p->next;
                }
            p->next = np;
        }
    //addReverseEdge(src, dest);
}
void print_graph(int n)
{
    for (int i = 0; i < n; i++)
        {
            cout << "Adjacency List of " << array[i].v << ": ";
            while (array[i].ptr != NULL)
                {
                    cout << (array[i].ptr)->dest << " ";
                    array[i].ptr = (array[i].ptr)->next;
                }
            cout << endl;
        }
}

int checkDAG(int n)
{
    int count = 0;
    int size = n - 1;
    for (int i = 0; i < n; i++)
        {
            //cout << "Adjacency List of " << array[i].v << ": ";
            if (count == size)
                {
                    return 1;
                }
            if (array[i].ptr == NULL)
                {
                    count++;
                    for (int j = 0; j < n; j++)
                        {
                            while (array[j].ptr != NULL)
                                {
                                    if ((array[j].ptr)->dest == (array[i].ptr)->dest)
                                        {
                                            (array[j].ptr)->dest = -1;
                                        }
                                    array[i].ptr = (array[i].ptr)->next;
                                }
                        }
                }
        }
    return 0;
}
int main()
{
    int n = 6;
    cout << "Number of vertices: " << n << endl;
    for (int i = 0; i < n; i++)
        {
            array[i].v = i;
            array[i].ptr = NULL;
        }
    addEdge(0, 1);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(3, 4);
    addEdge(4, 5);
    addEdge(5, 3);
    addEdge(5, 2);
    print_graph(n);
    cout << "The given graph is 'Directed Acyclic Graph' :";
    if (checkDAG(n) == 1)
        cout << " True";
    else
        cout << " False";
}

/*

Number of vertices: 6
Adjacency List of 0: 1
Adjacency List of 1: 2 3
Adjacency List of 2:
Adjacency List of 3: 4
Adjacency List of 4: 5
Adjacency List of 5: 3 2
The given graph is 'Directed Acyclic Graph' : True