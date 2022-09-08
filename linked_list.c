//define linked list
typedef struct node {
    int val;
    struct node * next;
} node_t;

//add items
node_t * head = NULL;
head = (node_t *) malloc(sizeof(node_t));
head->val = 1;
head->next = (node_t *) malloc(sizeof(node_t));
head->next->val = 2;
head->next->next = NULL;

//iteration over list
void print_list(node_t * head) {
    node_t * current = head;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

// add item at the end of list
void push_to_the_end(node_t * head, int val) {
    node_t * current = head;
    //end of list verification
    while (current->next != NULL) {
        current = current->next;
    }
    // now possible to add at
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

// add item to the start of the list
void push_to_the_start(node_t ** head, int val) {
    node_t * new_node;
    new_node = (node_t *) malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

// removing first item
int remove_first_item(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;
    if (*head == NULL) {
        return -1;
    }
    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;
    return retval;
}

// removing last item
int remove_last_item(node_t * head) {
    int retval = 0;
    // if there is only one item in the list
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }
    // get to the second to last node in the list
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    // now current points to the second to last item of the list, so let's remove current->next
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}

// removing specific item
int remove_by_index(node_t ** head, int n) {
    int i = 0;
    int retval = -1;
    node_t * current = *head;
    node_t * temp_node = NULL;
    if (n == 0) {
        return pop(head);
    }
    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }
    if (current->next == NULL) {
        return -1;
    }
    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);
    return retval;
}