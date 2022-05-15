#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @dir: string - (the name of one directory of PATH environment variable)
 * @next: position to the next node
 *
 */
typedef struct list_s
{
	int len;
	char *dir;
	list_s *next;
} list_t;

/**
 * build_list - Builds a linked list of the PATH directories
 * @str: One directory of PATH that will be added
 * @head: A pointer to the next node
 *
 */
void build_list(list_t **head, const char *str)
{
	char *tmp;
	int len;

	list_t *node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	tmp = strdup(str);
	if (!str)
		free(node);
	for (len = 0; str[len]; len++)
		;
	node->str = tmp;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
}
