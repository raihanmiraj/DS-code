#include<stdio.h>

#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};
struct node * newNode, * head, * temp;
void insertData() {
  int data;
  newNode = (struct node * ) malloc(sizeof(struct node));
  if (head == NULL) {
    head = temp = newNode;
  } else {
    temp -> next = newNode;
    temp = newNode;
  }
  scanf("%d", & data);
  temp -> data = data;
  temp -> next = NULL;
}

void insertAtFirst() {
  int data;
  newNode = (struct node * ) malloc(sizeof(struct node));
  newNode -> next = head;
  scanf("%d", & data);
  newNode -> data = data;
  head = newNode;

}

void printAll() {
  temp = head;
  while (temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
}
void deleteAtPosition() {
  int data;
  temp = head;
  scanf("%d", & data);
  int count = 1;
  struct node * flag = temp;
  while (count < data) {
    flag = temp;
    temp = temp -> next;
    count++;
  }
  if (flag == head) {
    temp = head;
    temp = head -> next;
    head = temp;
  } else if (flag -> next == NULL) {
    flag = NULL;
  } else {
    flag -> next = temp -> next;
  }

}

void insertAtPosition() {
  int data;
  scanf("%d", & data);
  if (data == 1) {
    insertAtFirst();
    return;
  }
  temp = head;
  int count = 1;
  struct node * flag;
  while (count < data) {
    flag = temp;
    temp = temp -> next;
    count++;
  }
  newNode = (struct node * ) malloc(sizeof(struct node));
  int y;
  scanf("%d", & y);
  newNode -> next = temp;
  newNode -> data = y;
  flag -> next = newNode;
}

void printLength() {
  temp = head;
  int count = 0;
  while (temp != NULL) {
    count++;
    temp = temp -> next;
  }
  printf("%d\n", count);
}
void printCommand() {
  printf("\n1 . Append\n");
  printf("2 . Insert At Position\n");
  printf("3 . Delete At Position\n");
  printf("4 . Print Everything\n");
  printf("5 . Length\n");
  printf("0 . Exit!\n");
}
int main() {
  head = NULL;
  int data, choice = 1;

  while (choice) {
    printCommand();
    scanf("%d", & choice);
    if (choice == 1) {
      insertData();
    } else if (choice == 2) {
      insertAtPosition();
    } else if (choice == 3) {
      deleteAtPosition();
    } else if (choice == 4) {
      printAll();
    } else if (choice == 5) {
      printLength();
    }

  }
}