/*This is a C++ Program to find largest independent set in a binary tree. In graph theory, an independent set or stable set is a set of vertices in a graph, no two of which are adjacent. That is, it is a set I of vertices such that for every two vertices in I, there is no edge connecting the two. Equivalently, each edge in the graph has at most one endpoint in I. The size of an independent set is the number of vertices it contains. Independent sets have also been called internally stable sets. A maximal independent set is either an independent set such that adding any other vertex to the set forces the set to contain an edge or the set of all vertices of the empty graph.*/

/* Dynamic programming based program for Largest Independent Set problem */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// A utility function to find max of two integers
int max(int x, int y)
{
    return (x > y) ? x : y;
}

/* A binary tree node has data, pointer to left child and a pointer to
 right child */
struct node
{
    int data;
    int liss;
    struct node *left, *right;
};

// A memoization function returns size of the largest independent set in
//  a given binary tree
int LISS(struct node *root)
{
    if (root == NULL)
        return 0;
    if (root->liss)
        return root->liss;
    if (root->left == NULL && root->right == NULL)
        return (root->liss = 1);
    // Caculate size excluding the current node
    int liss_excl = LISS(root->left) + LISS(root->right);
    // Calculate size including the current node
    int liss_incl = 1;
    if (root->left)
        liss_incl += LISS(root->left->left) + LISS(root->left->right);
    if (root->right)
        liss_incl += LISS(root->right->left) + LISS(root->right->right);
    // Return the maximum of two sizes
    root->liss = max(liss_incl, liss_excl);
    return root->liss;
}

// A utility function to create a node
struct node* newNode(int data)
{
    struct node* temp = (struct node *) malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    temp->liss = 0;
    return temp;
}

// Driver program to test above functions
int main()
{
    // Let us construct the tree given in the above diagram
    struct node *root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);
    cout<<"Size of the Largest Independent Set is "<< LISS(root);
    return 0;
}

/*
Size of the Largest Independent Set is 5