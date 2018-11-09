/* queue impelemntation in simple way using array */
#include <stdio.h>

#define queuesize 10

int rear = -1;
int front = -1;
int arr[queuesize];

int isfull() {
	if (((rear + 1) % queuesize) == front) {
		return 1;
	} else
		return 0;
}

int isempty() {

	if (rear == front) {
		return 1;
	} else
		return 0;

}

void enqueue(int data) {
	if (!isfull()) {
		rear = (rear + 1) % queuesize;
		arr[rear] = data;

	} else
		printf("queue is full ");
}

int dequeue() {
	if (!isempty()) {

		front = (front + 1) % queuesize;
		int data = arr[front];

		return data;
	}
	printf("queue  is empty ");
	return -1;
}

void printqueue() {
	int f = front;
	int r = rear;
	while (!isempty()) {

		printf("%d ", dequeue());

	}
	printf("\n");
	front = f;
	rear = r;

}

