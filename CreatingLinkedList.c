// creating linked list
#include<stdio.h>
struct node{
    int info;
    struct node* next;
};
typedef struct node* nodeptr;

nodeptr getnode();
nodeptr insertnode(nodeptr ptr,int value);

int main(){
    int i,n,value;
    nodeptr start,ptr;
    start = getnode();
    ptr = start;
    printf("Enter the number of nodes to create : ");
    scanf("%d",&n);
    printf("Enter the value of the nodes : ");
    for(i=0;i<n;i++){
        scanf("%d",&value);
        ptr = insertnode(ptr,value);
    }

    ptr->next = 0;
    ptr = start->next;
    printf("Status of linked list : ");
    for(i=0;i<n;i++){
        printf("%d ",ptr->info);
        ptr = ptr->next;
    }
    return 0 ;
}

nodeptr getnode(){
    nodeptr p;
    p = (nodeptr) malloc(sizeof(struct node));
    return p ;
}

nodeptr insertnode(nodeptr ptr,int value){
    nodeptr q;
    q = getnode();
    q->info = value;
    ptr->next = q;
    return q;

}
