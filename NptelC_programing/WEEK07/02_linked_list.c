#include <stdio.h>
#include <stdlib.h>
struct node
{
    int id;
    int data;
    struct node *next;
};

// Create and return a node
struct node *create_node(int id, int value)
{
    struct node *e = malloc(sizeof(struct node));
    e->data = value;
    e->id = id;
    e->next = NULL;
    return e;
}

// Insert at head and return a new head
struct node *insert(struct node *list, struct node *head)
{
    if (head == NULL)
        return head;
    head->next = list;
    return head;
}

// Search for a node e with id inside the list. Return a pointer to e if found, else return NULL.
// struct node *search(struct node *list, int id);
struct node*search(struct node*list,int id)
{
    struct node*curr=list;
    while (curr->next==NULL)
    {
        if (curr->data==id) return curr;
        curr=curr->next;
    }
    
}

// Change the priority (value) of an element with given id (if found) to the new value val.
// void change_priority(struct node *list, int id, int val);
void change_priority(struct node*list,int id,int val)
{
    struct node*priority=search(list,id);
    if (priority!=NULL)  priority->data=val;

}


// // If not found, do nothing (per spec)
// void change_priority(struct node *list, int id, int val) {
//     struct node *p = search(list, id);
//     if (p != NULL) p->priority = val;
// }

int main()
{
    return 0;
}