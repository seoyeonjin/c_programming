
// for (p = first; p != NULL ; p = p->next)
//		free(p)

// 제대로 작동하지 않는 이유 
// -> free를 하게 되면 할당된 메모리를 가리키지 않는 상태가 된다. 
// -> 따라서 free(p)를 하게 되면 p = p->next가 제대로 작동하지 않는다.

// 작동하려면

// struct node *temp; 

// while (p != NULL) {
//		temp = p; 
//      p = p->next;
//      free(temp);