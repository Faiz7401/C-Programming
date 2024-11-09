BinaryTreeNode* searchGroupMark(BinaryTreeNode *node,int groupMark)
{
     if(node!=NULL)// node is not null
   {
        if(groupMark == node->groupMark)
          return node;

      else if(groupMark > node->groupMark)
          return searchGroupMark (node->right,groupMark);

      else
          return searchGroupMark (node->left,groupMark);
   }

   else
       return NULL;

}
