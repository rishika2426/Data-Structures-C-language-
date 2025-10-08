#include <stdio.h>
#include <stdlib.h>

typedef struct PL {
    int coeff;
    int px;
    struct PL *next;
} node;

node* create(node *start, int c, int x) {
    node *q, *p;
    q = (node*)malloc(sizeof(node));
    q->coeff = c;
    q->px = x;
    q->next = NULL;

    if (start == NULL) {
        start = q;
    } else {
        p = start;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = q;
    }
    return start;
}

void display(node *start) {
    node *p = start;
    while (p != NULL) {
        printf("%dx^%d", p->coeff, p->px);
        if (p->next != NULL && p->next->coeff >= 0)
            printf(" + ");
        else if (p->next != NULL)
            printf(" ");
        p = p->next;
    }
    printf("\n");
}

node* add(node *start1, node *start2)
{
	node *p=start1;
	node *q=start2;
	node *start=NULL;
	while(p!=NULL && q!=NULL)
	{
		if(p->px==q->px)
		{
			start=create(start,p->coeff+q->coeff, p->px);
			p=p->next;
			q=q->next;
		}
		else
		{
			if(p->px>q->px)
			{
				start=create(start, p->coeff,p->px);
				p=p->next;
			}
			else
			{
				start=create(start,q->coeff, q->px );
				q=q->next;
			}
		}
	}
	if(p==NULL)
	{
		while(q!=NULL)
		{
			start=create(start, q->coeff, q->px);
			q=q->next;
		}
	}
	else
	{
		while(p!=NULL)
		{
			start=create(start, p->coeff, p->px);
			p=p->next;
		}
	}
	return (start);
}

node* inputPolynomial() {
    int n, coeff, expo;
    node *poly = NULL;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &expo);
        poly = create(poly, coeff, expo);
    }

    return poly;
}

int main() {
    node *poly1 = NULL;
    node *poly2 = NULL;

    printf("Enter first polynomial:\n");
    poly1 = inputPolynomial();

    printf("\nEnter second polynomial:\n");
    poly2 = inputPolynomial();

    printf("\nFirst Polynomial: ");
    display(poly1);

    printf("Second Polynomial: ");
    display(poly2);
    
    node *sum = add(poly1, poly2);
	printf("Sum of polynomials: ");
	display(sum);

    return 0;
}