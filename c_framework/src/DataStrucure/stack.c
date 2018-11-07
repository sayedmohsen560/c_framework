/*stack implementation in simple way  using array */

#define STACKSIZE 10

int arr[STACKSIZE];
int top = -1;

int isfull() {
	if (top == (STACKSIZE - 1)) {
		return 1;
	}
	return 0;
}

int isempty() {
	if (top == -1) {
		return 1;
	}
	return 0;
}

void push(int data) {
	if (!isfull()) {
		top++;
		arr[top] = data;
	} else
		printf("stack is full");
}

int pop() {
	int data;
	if (!isempty()) {
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

