#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define EMPTY	0
#define FULL	10000

struct data{
	enum {operator, value} kind;
	union{
		char op;
		int val;
	} u;
};

typedef struct data		data;
typedef enum {false, true}	boolean;

struct elem{
	data		d;
	struct elem	*next;
};

typedef struct elem elem;
struct stack{
	int cnt;
	elem *top;
};

typedef struct stack stack;
boolean empty(const stack *stk);
int	evaluate(stack *polish);
void	fill(stack *stk, const char *str);
boolean	full(const stack *stk);
void	initialize(stack *dp);
data	pop(stack *stk);
void	prn_data(data *dp);
void	prn_stack(stack *stk);
void	push(data d, stack *stk);
data	top(stack *stk);

