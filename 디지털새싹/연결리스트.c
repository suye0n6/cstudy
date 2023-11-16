#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct Node {
   element data;
   struct Node *next;
} Node;

Node* insertFirst(Node* head, element data){
   Node* node = (Node*)malloc(sizeof(Node));
   node->data = data;
   node->next = head;
   return node;
}
void insert(Node* pre, element data){
   Node* node = (Node*)malloc(sizeof(Node));
   node->data = data;
   node->next = pre->next;
   pre->next =  node; 
}
Node* deleteFirst(Node* head){
    if (head == NULL) return NULL;
    Node* removed = head;
   Node* newhead = head->next;
   free(removed);//3) removed의 주소 반환
   return newhead;//4) 변경된 헤드포인터 반환
}
void delete(Node* pre){
   Node* removed = pre->next; //5.프리가 가리키는 다음 노드를 삭제
   pre->next = removed->next;// pre->next->next와 같은 주소
   free(removed);
}
void printList(Node* head){
   while(head!=NULL){
      printf("%d->", head->data); // 6.head가 널이 아니면 노드데이터 출력
      head = head->next;
   }
   
   printf("NULL\n");
}

int main(){
   Node* head = NULL;
   Node* temp = NULL;
   
   printf("[첫 위치 삽입]\n");
   
   for(int i = 0;i<5;i++){
      head = insertFirst(head, i);
      printList(head);
      if(i == 2) temp = head; //데이터가 2인 노드 주소 저장
   }
   
   printf("[중간위치 삽입]\n");
   insert(temp, 100);
   printList(head);
   
   printf("[중간위치 삭제]\n");
   delete(temp);
   printList(head);
   
   printf("[첫 위치 삭제]\n");
   for(int i=0; i<5; i++){
      head = deleteFirst(head);
      printList(head);
   }
   
   return 0;
}