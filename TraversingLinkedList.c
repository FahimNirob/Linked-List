// Traversing linked list
#include<stdio.h>
#include<math.h>
struct node{
    int info;
    struct node* next;
};
typedef struct node* nodeptr;

nodeptr getnode();
nodeptr insertnode(nodeptr ptr,int value);

int main(){
    int i,n,value;
    int max,min,total = 0;
    double sine,avg,pi = 3.14;

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
    max = ptr->info;
    min = ptr->info;
    for(i=0;i<n;i++){
        if(ptr->info > max) max = ptr->info;
        if(ptr->info < min) min = ptr->info;
        total = total + ptr->info;
        sine = sin(((ptr->info)*pi)/180);
        printf("\nSin value of %d is %.2f\n",ptr->info,sine);
        ptr = ptr->next;
    }
    avg = total/(1.0*n);

    printf("\nMaximum : %d\n",max);
    printf("Minimum : %d\n",min);
    printf("Total : %d\n",total);
    printf("Average : %.2f\n",avg);




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

