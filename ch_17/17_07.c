
// for (p = first; p != NULL ; p = p->next)
//		free(p)

// ����� �۵����� �ʴ� ���� 
// -> free�� �ϰ� �Ǹ� �Ҵ�� �޸𸮸� ����Ű�� �ʴ� ���°� �ȴ�. 
// -> ���� free(p)�� �ϰ� �Ǹ� p = p->next�� ����� �۵����� �ʴ´�.

// �۵��Ϸ���

// struct node *temp; 

// while (p != NULL) {
//		temp = p; 
//      p = p->next;
//      free(temp);