/*stack implementation in simple way  using array */
#include<stdio.h>
#define STACKSIZE 10

int arr[STACKSIZE];
int top = -1;

int isstackfull() {
	if (top == (STACKSIZE - 1)) {
		return 1;
	}
	return 0;
}

int isstackempty() {
	if (top == -1) {
		return 1;
	}
	return 0;
}

void push(int data) {
	if (!isstackfull()) {
		top++;
		arr[top] = data;
	} else
		printf("stack is full");
}

int pop() {
	int data;
	if (!isstackempty()) {
		data = arr[top];
		top--;
		return data;
	} else
		printf("stack is empty..");
	return 0;
}

int peek() {
	return arr[top];
}

int getstacksize() {
	return top;
}

