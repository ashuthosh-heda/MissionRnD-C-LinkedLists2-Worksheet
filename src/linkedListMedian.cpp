/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head == NULL)
		return -1;

	struct node* frst = head;
	struct node* scnd = head;
	int prev = 0, curr = 0;

	while (scnd != NULL && scnd->next != NULL){
		prev = frst->num;
		curr = frst->next->num;
		frst = frst->next;
		scnd = scnd->next->next;
	}

	if (scnd == NULL)
		return (prev + curr) / 2;
	return frst->num;
}
