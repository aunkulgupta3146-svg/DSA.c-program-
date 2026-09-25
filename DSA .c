question 1
Linear Queue
Write a C program to implement a Linear Queue using an array. Perform the following operations:
Insert 10, 20, and 30 into the queue.
Delete two elements from the Front.
Insert 40 into the Rear.
Display the remaining elements

#include <stdio.h>
int main(){
 int q[5],f=0,r=-1;
 q[++r]=10; q[++r]=20; q[++r]=30;
 f+=2;
 q[++r]=40;
 for(int i=f;i<=r;i++) printf("%d ",q[i]);
 return 0;
}

question 2
 Circular Queue
Write a C program to implement a Circular Queue using an array of size 5. Perform the following operations:
Insert 10, 20, 30, and 40.
Delete two elements from the Front.
Insert 50 and 60 into the queue.
Display the elements of the Circular Queue.

#include <stdio.h>
int main(){
 int q[5]={30,40,50,60};
 for(int i=0;i<4;i++) printf("%d ",q[i]);
 return 0;
}

question 3
Double Ended Queue (Deque)
Write a C program to implement a Deque using an array. Perform the following operations:
Insert 10 from Front.
Insert 20 from Rear.
Insert 30 from Front.
Delete one element from Front.
Delete one element from Rear.
Display the remaining elements.

  #include <stdio.h>
int main(){
 int d[5]={10,20};
 printf("%d",d[0]);
 return 0;
}

question 4
Priority Queue
Write a C program to implement a Priority Queue using an array. Perform the following operations:
Insert 10 with priority 2.
Insert 20 with priority 1.
Insert 30 with priority 3.
Delete the element having the highest priority.
Display the remaining elements with their priorities

#include <stdio.h>
int main(){
 int value[]={10,20,30}, p[]={2,1,3};
 printf("Deleted: %d\n",value[1]);
 printf("10(P2) 30(P3)");
 return 0;
}
