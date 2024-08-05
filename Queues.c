#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 5


//Basic value initialization
int queue[SIZE];
int front = -1 , rear = -1;

//Function to return the element in the front of the queue
void peek(void){
  
  //if the queue is empty
  if(front == -1){
    printf("\nThe queue does not have any elements\n");
  }
  else{
    // Printing the element in the front of the queue
    printf("\nThe element in the front of the queue is %d\n", queue[front]);
  }

}


//Function to check if the queue is empty
bool isEmpty(void){
    // If both front and rear are -1 then the queue is empty
    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

//Function to check if the queue is full 
bool isFull(void){
    //If the rear variable is equal to SIZE -1 then the queue is full
    if(rear == SIZE -1){
      return true;
    }
    else{
        return false;
    }
}

// Function to get the number of items in the queue
int size(void){

    //If the queue is empty , return 0 
    if(isEmpty()==true){
        return 0;
    }

    // The number of items in the queue is the difference between front and rear
    return rear-front + 1;
}

// Function to enqueue or push an element in the queue
void Enqueue(int val){

  // If the queue is full then we cannot push an new element
  // We return that the overflow condition has been encountered
    if(isFull() == true){
       printf("\nOverflow Condition Encountered\n"); 
    }
    else{
        // If the queue was initally empty
        // We add the first element in the queue and update front
        if(front==-1){
          front = 0;
        }
        // We update the rear pointing to the last element of the queue
        rear++;
        // Insert the element in the rear position //
        queue[rear]=val;
    }
}

