
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
}
listint_t;

void print_listint(const listint_t *h)
{
    while (h != NULL)
{
        printf("%d\n", h->n);
        h = h->next; // Move to the next element
}
int main()
{
  
    listint_t *head;
    listint_t *node1 = malloc(sizeof(listint_t));
    listint_t *node2 = malloc(sizeof(listint_t));
    listint_t *node3 = malloc(sizeof(listint_t));

    node1->n = 1;
    node1->next = node2;
    node2->n = 2;
    node2->next = node3;
    node3->n = 3;
    node3->next = NULL;

   
  head = node1;
  print_listint(head);
  free(node1);
  free(node2);
  free(node3);

  return 0;
}

