#include <stdio.h>
#include <stdlib.h>

typedef struct Item Item;
typedef struct LinkedList LinkedList;
struct Item
{
    int data;
    int index;
    Item* next;
    Item* prev;
};
struct LinkedList
{
    int size;
    Item*start;
    Item*end;
};
Item* add(Item* prevent, int num, LinkedList* list);
void print_list(Item* first);
void free_list(Item* first);

int main()
{
    LinkedList list;
    list.size=1;
    Item* act=(Item*)malloc(sizeof(Item)), *first;
    act->index=0;
    act->prev=NULL;
    act->next=NULL;
    int szam;
    scanf("%d", &szam);
    act->data=szam;
    first=act;
    list.start=first;
    list.end=first;
    do
    {
        scanf("%d", &szam);
        act=add(act,szam,&list);
    }
    while (szam!=0);

    printf("\n");
    print_list(list.start);
    free_list(list.start);
    return 0;
}
Item* add(Item* prevent, int num, LinkedList* list)
{
    Item* new_item = (Item*)malloc(sizeof(Item));
    new_item->data=num;
    new_item->index=prevent->index+1;
    new_item->next=NULL;
    new_item->prev=prevent;
    prevent->next=new_item;
    list->end=new_item;
    list->size=list->size+1;
    return new_item;
}
void print_list(Item* first)
{
    Item* i;
    for(i=first;i!=NULL;i=i->next)
    {
        printf("A lista %d. adata : %d\n", i->index, i->data);
    }
}
void free_list(Item* first)
{
    Item* i, *temp;
    while(i!=NULL)
    {
        temp=i;
        i=i->next;
        free(temp);
    }
}
