//cur가 가리키는 위치가 새로운 node가 들어갈 위치 
// prev->next = new_node
// new_node->next = cur
// return list; 

// 비어있는 상태에서 처음에 넣어야 하면?
// prev는 null이고, cur도 null 상태라면
// return new_node;

// 비어있지 않은 상태에서 처음에 넣어야 한다면 
// list->next = new_node;
// new_node->next = cur;