
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
    int item,count=0;
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
    ptr = start->next;
    printf("\nEnter the value to search : ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        count++;
        if(item == ptr->info){
            printf("%d found on %dth position \n",item,count);
            break;
        }
        ptr = ptr->next;
    }
    if(count == n-1)printf("Item not found!\n");


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
