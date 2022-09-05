


typedef struct {
    int *Queue;
    int front;
    int rear;
    int size;
    
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue *CircularQueue=(MyCircularQueue *)malloc(sizeof(MyCircularQueue));
    CircularQueue->Queue=(int *)malloc(k*sizeof(int));
    CircularQueue->front=-1;
    CircularQueue->rear=-1;
    CircularQueue->size=k;
    return CircularQueue;
    
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
  if((obj->rear+1)%obj->size==obj->front){
      return true;
  }
    return false;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
  if(obj->front==-1 && obj->rear==-1){
      return true;
  }
    return false;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
  if(myCircularQueueIsFull(obj)){
        return false;
    }
    else if(myCircularQueueIsEmpty(obj)){
        obj->front=obj->rear=0;
    }
    else{
    obj->rear=(obj->rear +1)%obj->size;
    }
    obj->Queue[obj->rear]=value;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)){
        return false;
    }
    else if(obj->front==obj->rear){
        obj->front=obj->rear=-1;
    }
    else{
    obj->front=(obj->front +1)%obj->size;
    }
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
  if(myCircularQueueIsEmpty(obj)){
      return -1;
  }
    return obj->Queue[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
  if(myCircularQueueIsEmpty(obj)){
      return -1;
  }
    return obj->Queue[obj->rear];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/