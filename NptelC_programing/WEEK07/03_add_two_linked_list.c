#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create_node(int value)
{
    struct node *e = malloc(sizeof(struct node));
    e->data = value;
    e->next = NULL;
    return e;
}
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct node dummy;
    struct node *curr = &dummy;
    // curr pointer dummy node ka first node ko point kar reha hai
    dummy.next = NULL;
    

}

int main()
{
    return 0;
}