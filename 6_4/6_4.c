#include <stdio.h>
#include <stdlib.h>
typedef int ListDataType;
typedef struct Node_t {
	ListDataType data;
	Node* next;
} Node;
typedef struct List_t {
	Node* head;
} List;

List* CreateList() {
}

Node* CreateNode(ListDataType data) {
	Node* newNode = malloc(sizeof(Node));
	if (!newNode) {
		return NULL;
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
Node* GetListHead(List* list) {
	return list->head;
}
Node* GetNextNode(Node* node) {
	return node->next;
}
ListDataType GetValue(Node* node) {
	return node->data;
}
void FreeList(List* list) {
	Node* current = list->head;
	Node* next = current;
	while (current != NULL) {
		next = current->next;
		free(current);
		current = next;
	}
	free(list);
}
Node* PushFront(List* list, ListDataType newValue) {
	Node* newHead = CreateNode(newValue);
	newHead->next = GetListHead(list);
	list->head = newHead;
	return newHead;
}
Node* PushBack(List* list, ListDataType newValue) {
	Node* node = CreateNode(newValue);
	Node* current = GetListHead(list);
	while (GetNextNode(current) != NULL) {
		current = current->next;
	}
	current->next = node;
	return node;
}
ListDataType PopFront(List* list) {
	Node* head = list->head;
	list->head = head->next;
	ListDataType data = getValue(head);
	free(head);
	return data;
}


int main() {
	List * a = lis
	struct Node_t b;
	printf("chuck");
}