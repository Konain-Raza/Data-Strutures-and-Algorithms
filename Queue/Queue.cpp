#include <iostream>
using namespace std;
#define size 10
class queue {
	public:
		int front;
		int rear;
		int array[size];

		queue(){
			front= -1;
			rear = -1;
		}
		
		void enqueue(int value){
			if(rear==size-1){
				cout<< "Queue is full"<<endl;
			}
			else{
				rear++;
				array[rear]=value;
			}
			if(front==-1){
				front++;
			}
		}
		
		int dequeue(){
			if(rear==-1 || front>rear){
				cout<< "Queue is empty "<<endl;
				return -1;
			}
			else{
				int temp = array[front];
				front++;
				return temp;
			}
		}
		
		void displayQueue(){
			cout<< "Current Queue is: "<< " ";
			for(int i=front;i<=rear; i++){
				cout<<array[i]<< " " ;
			}
			cout<< endl;
		}
		
		bool isEmpty(){
			if(rear==-1 || front>rear){
				cout<< "Queue is empty "<<endl;
				return true;
			}
			else{
				cout<< "Queue is not Empty"<<endl;
				return false;
			}
		
		}
		
		int peek(){
				if(!(rear==-1 || front>rear)){
					cout<< "Peeked value is: " <<array[front];
			return array[front];
			
			}
			return -1;
			
			
		}

		int dequeuedValueSquare(int dequeuedValue){
			
			return dequeuedValue*dequeuedValue;
			
		}
		int dequeuedValueCube(int dequeuedValue){
			
			return dequeuedValue*dequeuedValue*dequeuedValue;
			
		}
		
int getMaximumValue() {
			if(rear==-1 || front>rear){
				cout<< "Queue is empty "<<endl;
				return -1;
			}

    int maxVal = array[front];
    for (int i = front + 1; i <= rear; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }

    return maxVal;
}


};

int main(){
	int dequeuedValue;
	int squaredValue;
	int cubeValue;
	queue rowOne;
	queue square;
	queue cube;
    rowOne.isEmpty();
	rowOne.enqueue(6);
	rowOne.enqueue(10);
	dequeuedValue = rowOne.dequeue();
	squaredValue = square.dequeuedValueSquare(dequeuedValue);
	square.enqueue(squaredValue);
	square.displayQueue();
	rowOne.enqueue(9);
	dequeuedValue = rowOne.dequeue(); 
	squaredValue = square.dequeuedValueSquare(dequeuedValue);
	square.enqueue(squaredValue);
	square.displayQueue();
	cubeValue = cube.dequeuedValueCube(dequeuedValue);
	cube.enqueue(cubeValue);
	cube.displayQueue();
	rowOne.enqueue(95);
	rowOne.enqueue(90);
	rowOne.displayQueue();
 cout<< "The Maximum value in queue is " << rowOne.getMaximumValue()<<endl;
	rowOne.peek();
return 0;
	
	
}
