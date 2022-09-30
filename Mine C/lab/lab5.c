/*Write a menu driven program to implement Singly Link List with the following operations:
(i) Insert End (ii) Insert_Beginning (iii) Insert_After_Key (iv) Delete_End (v) Delete _Beginning
(vi) Delete_After_Key (vii) Traverse.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *link;
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
			printf("%d",temp->info);
			if(temp->link != NULL)
			{
				printf(" -> ");
			}
			temp = temp->link;
		}
	}
}

void insertAtHead()
{
	int data;
	struct node *temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		   " be inserted : ");
	scanf("%d", &data);
	temp->info = data;

	temp->link = start;
	start = temp;
}

void insertAtTail()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));

	printf("\nEnter number to"
		   " be inserted : ");
	scanf("%d", &data);

	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL)
	{
		head = head->link;
	}
	head->link = temp;
}

void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));

	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1)
	{
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}

void deleteHead()
{
	struct node *temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else
	{
		temp = start;
		start = start->link;
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
		while (temp->link != 0)
		{
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
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
			temp = temp->link;
			i++;
		}

		position = temp->link;
		temp->link = position->link;

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
		int max = temp->info;
		while (temp != NULL)
		{
			if (max < temp->info)
				max = temp->info;
			temp = temp->link;
		}
		printf("\nMaximum number "
			   "is : %d ",
			   max);
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

			sum = sum + temp->info;
			temp = temp->link;
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
			index = current->link;
			while (index != NULL)
			{
				if (current->info > index->info)
				{
					temp = current->info;
					current->info = index->info;
					index->info = temp;
				}
				index = index->link;
			}

			current = current->link;
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

			t2 = start->link;
			start->link = t1;
			t1 = start;
			start = t2;
		}
		start = t1;
		temp = start;

		printf("Reversed linked "
			   "list is : ");
		while (temp != NULL)
		{
			printf("%d ", temp->info);
			temp = temp->link;
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
