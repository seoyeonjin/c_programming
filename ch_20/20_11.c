#define SHIFT_BIT 1
#define CTRL_BIT 2
#define ALT_BIT 4

// 연산자 우선순위를 고려했을 때
// &보다 ==의 우선순위가 더 높아 먼저 계산되기 때문에 제대로 동작하지 않는다. 
// 따라서 
// (key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
// 으로 고쳐주어야 한다. 