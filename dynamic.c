#include <stdio.h>

int queue[100];
int front=-1;
int rare = -1;

void enqueue(int x){
    if(front == -1 && rare == -1){
        front++;
        rare++;
        queue[rare] = x;
    }
   
    else{
        rare++;
        queue[rare] = x;
    }
}

int dequeue(){
    if(front>rare){
        return -1111111111;
    }
    else{
        front++;
        return queue[front-1];
    }
}

int main()
{
    int graph[100][100];
    int n;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter 1 if there is an edge between X and Y vertex otherwise enter 0. \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Edge between %d an %d: ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}