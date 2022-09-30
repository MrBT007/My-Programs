#include <stdio.h>
#include <stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct node *start = NULL;

void printData()
{
	struct node *temp;

	if (start == NULL)
		printf("\nList is empty\n");

	else
	{
		printf("Your List is : ");
		temp = start;
		while (temp != NULL)
		{
			printf("%d",temp->val);
			if(temp->next != NULL)
			{
				printf(" -> ");
			}
			temp = temp->next;
		}
	}
}

void insertAtHead()
{
	int val;
	struct node *temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		   " be inserted : ");
	scanf("%d", &val);
	temp->val = val;

	temp->next = start;
	start = temp;
}

void insertAtTail()
{
	int val;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	printf("\nEnter number : ");
	scanf("%d", &val);

	temp->next = 0;
	temp->val = val;
	head = start;
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = temp;
}

void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, val, i = 1;
	newnode = malloc(sizeof(struct node));

	printf("\nEnter position and val :");
	scanf("%d %d", &pos, &val);

	temp = start;
	newnode->val = val;
	newnode->next = 0;
	while (i < pos - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

void deleteHead()
{
	struct node *temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else
	{
		temp = start;
		start = start->next;
		free(temp);
	}
}

void deleteTail()
{
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else
	{
		temp = start;
		while (temp->next != 0)
		{
			prevnode = temp;
			temp = temp->next;
		}
		free(temp);
		prevnode->next = 0;
	}
}

void deletePosition()
{
	struct node *temp, *position;
	int i = 1, pos;

	if (start == NULL)
		printf("\nList is empty\n");

	else
	{
		printf("\nEnter index : ");

		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;

		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}

		position = temp->next;
		temp->next = position->next;

		free(position);
	}
}

void maximum()
{
	int a[10];
	int i;
	struct node *temp;

	if (start == NULL)
		printf("\nList is empty\n");

	else
	{
		temp = start;
		int max = temp->val;
		while (temp != NULL)
		{
			if (max < temp->val)
				max = temp->val;
			temp = temp->next;
		}
		printf("\nMaximum number is : %d ",max);
	}
}

void mean()
{
	int a[10];
	int i;
	struct node *temp;

	if (start == NULL)
		printf("\nList is empty\n");

	else
	{
		temp = start;

		int sum = 0, count = 0;
		float m;

		while (temp != NULL)
		{

			sum = sum + temp->val;
			temp = temp->next;
			count++;
		}

		m = sum / count;

		printf("\nMean is %f ", m);
	}
}

void sort()
{
	struct node *current = start;
	struct node *index = NULL;
	int temp;

	if (start == NULL)
	{
		return;
	}

	else
	{

		while (current != NULL)
		{
			index = current->next;
			while (index != NULL)
			{
				if (current->val > index->val)
				{
					temp = current->val;
					current->val = index->val;
					index->val = temp;
				}
				index = index->next;
			}

			current = current->next;
		}
	}
}

void reverseLL()
{
	struct node *t1, *t2, *temp;
	t1 = t2 = NULL;

	if (start == NULL)
		printf("List is empty\n");
	else
	{

		while (start != NULL)
		{

			t2 = start->next;
			start->next = t1;
			t1 = start;
			start = t2;
		}
		start = t1;
		temp = start;

		printf("Reversed linked "
			   "list is : ");
		while (temp != NULL)
		{
			printf("%d ", temp->val);
			temp = temp->next;
		}
	}
}

int main()
{
	int choice;
	while (1)
	{

		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at Head\n");
		printf("\t3 For insertion at Tail\n");
		printf("\t4 For insertion at any position\n");
		printf("\t5 For delete Head\n");
		printf("\t6 For delete Tail\n");
		printf("\t7 For delete element at any position\n");
		printf("\t8 To find maximum among the elements\n");
		printf("\t9 To find mean of the elements\n");
		printf("\t10 To sort element\n");
		printf("\t11 To reverse the linked list\n");
		printf("\t12 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printData();
			break;
		case 2:
			insertAtHead();
			break;
		case 3:
			insertAtTail();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteHead();
			break;
		case 6:
			deleteTail();
			break;
		case 7:
			deletePosition();
			break;
		case 8:
			maximum();
			break;
		case 9:
			mean();
			break;
		case 10:
			sort();
			break;
		case 11:
			reverseLL();
			break;
		case 12:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}
