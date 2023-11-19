/**
 * Definition for ImmutableListNode.
 * struct ImmutableListNode {
 *     struct ImmutableListNode* (*getNext)(struct ImmutableListNode*); //
 * return the next node. void (*printValue)(struct ImmutableListNode*); // print
 * the value of the node.
 * };
 */
void printLinkedListInReverse(struct ImmutableListNode *head) {
  if (head->getNext(head) != NULL)
    printLinkedListInReverse(head->getNext(head));

  head->printValue(head);
}