#include <iostream>
using namespace std;

class Node
{
 public:
  int info;
  Node* left;
  Node* right;
  int successor = 1;
  Node()
  {
   info = 0;
   left = NULL;
   right = NULL;
  }
  Node(int Value )
  {
   info = Value;
   left = 0;
   right = 0;
  }
};

class BST
{
 public:
  Node* ROOT;
  BST()
  {
   ROOT = 0;
  }
  
  Node* INSERT(Node* root, Node* NEW)
  {
   if( root==NULL)
   {
     root = NEW;
     cout<<"\tElement INSERTED";
     return root;
   }
  
   if( NEW->info < root->info)
   {
     root->left = INSERT(root->left , NEW);
   }
   else if ( NEW->info > root->info)
   {
     root->right = INSERT( root->right , NEW);
   }
   else
   {
    cout<<"\nValue already exsist\n";
    return root;
   }

   return root;
  }
  
  void PREORDER(Node* TEMP)
  {
    if( TEMP == NULL)
          return;
          
    cout<<TEMP->info<<"  ";
    PREORDER(TEMP->left);
    PREORDER(TEMP->right);
  }
  
  void INORDER(Node* TEMP)
  {
    if( TEMP == NULL)
          return;
          
    INORDER(TEMP->left);
    cout<<TEMP->info<<"  ";
    INORDER(TEMP->right);
  }
  
  void POSTORDER(Node* TEMP)
  {
    if( TEMP == NULL)
          return;
          
    POSTORDER(TEMP->left);
    POSTORDER(TEMP->right);
    cout<<TEMP->info<<"  ";
  }
  
  Node* SEARCH(int DATA)
  {
    if(ROOT == NULL)
      {
        cout<<"No Elements in the Tree\n";
        return ROOT;
      }
    else 
      {
        Node* TEMP = ROOT;
        while( TEMP != NULL)
        {
         if( DATA == TEMP->info)
         {
           cout<<TEMP->info<<" located  \n";
           return TEMP;
         }
         else if(DATA < TEMP->info)
         {
           TEMP = TEMP->left;
         }
         else
         {
          TEMP = TEMP->right;
         }
        }
      }
      cout<<"\nElement not found\n";
      return NULL;
  }
  
  Node* MINValue(Node* NEW)
  {
   Node* THIS = NEW;
   while (THIS->left != NULL)
   {
    THIS = THIS->left;
   }
   return THIS;

  }
  
  Node* DELETE(Node* TEMP,int DATA)
  {
    if(TEMP == NULL)
    {
     return NULL;
    }
    else if( DATA < TEMP->info)
    {
     TEMP->left = DELETE(TEMP->left , DATA);
    } 
    else if(DATA > TEMP->info)
    {
     TEMP->right = DELETE(TEMP->right , DATA);
    }
    else
    {
     if( TEMP->left == NULL)
     {
       Node* NEW1 = TEMP->right;
       delete TEMP;
       return NEW1;
     }
     else if(TEMP->right == NULL)
     {
       Node* NEW1 = TEMP->left;
       delete TEMP;
       return NEW1;
     }
     else
     {
       Node* NEW1 = MINValue(TEMP->right);
       TEMP->info = NEW1->info;
       TEMP->right = DELETE(TEMP->right , NEW1->info);
     }
    }
    return TEMP;
  }
  
  void PRINT(Node* TEMP, int SPACE)
  {
    if (TEMP == NULL)
          return;
    SPACE = SPACE+5;
    PRINT( TEMP->right, SPACE);
    cout<<"\n";
    for (int i=20;i<SPACE;i++)
    {
      cout<<" ";
    }
    cout<<TEMP->info<<"\n";
    PRINT(TEMP->left,SPACE);
  }
};

int main()
{
  cout<<"\n\tBINARY SEARCH TREE\n";
  int choice , data , option=0 ;
  BST TREE;
  
  do
  {  
     cout<<"\n---------------------------------------------------";
     cout<<"\nSelect the appropriate operation to perform : \n"/*
     */"1.INSERT \n2.SEARCH\n3.TRAVERSAL\n4.DELETE\n5.DISPLAY TREE\n6.Exit\n => ";
     cin>>choice;
     Node* TEMP= new Node;
     if(TEMP == NULL)
     {
      cout<<"\n********UNDERFLOW*********\n";
      choice=5;
     }
     else
     {
     cout<<"---------------------------------------------------\n"; 
  switch(choice)
  {
   case 1:
     cout<<"Enter the element to insert : ";
     cin>>data;
     TEMP->info = data;
     TREE.ROOT = TREE.INSERT(TREE.ROOT,TEMP);
     break;
     
   case 2:
     cout<<"\nEnter the element to search : ";
     cin>>data;
     TEMP = TREE.SEARCH(data);
     break;
     
   case 3:
     cout<<"\nChoose the TRAVERSAL technique\n\t1.PRE-ORDER TRAVERSAL\n\t2.INORDER TRAVERSAL\n\t3.POST-ORDER TRAVERSAL\n\t ::> ";
     cin>>choice;

     switch(choice)
     {
       case 1: 
           cout<<"\n\tPRE-ORDER TRAVERSAL : ";
           TREE.PREORDER(TREE.ROOT);
           cout<<endl;
           break;
       
       case 2:
           cout<<"\n\tINORDER TRAVERSAL : ";
           TREE.INORDER(TREE.ROOT);
           cout<<endl;
           break;
     
       case 3:
           cout<<"\n\tPOST-ORDER TRAVERSAL : ";
           TREE.POSTORDER(TREE.ROOT);
           cout<<endl;
           break;
           
       default:cout<<"\tWrong choice\n";
     }
     break;
     
   case 4:
     cout<<"\nEnter the number to delete : ";
     cin>>data;
     TEMP = TREE.SEARCH(data);
     if (TEMP != NULL)
     {
            TREE.DELETE(TREE.ROOT, data);
            cout<<"\nValue deleted.\n";
     }
     else
     {
            cout<<"\nValue not found\n";
     }
     break; 
   
   case 5:
       cout<<"\n\tBINARY SEARCH TREE\n";
       TREE.PRINT(TREE.ROOT, 20);
       cout<<endl;
       break;
   
   case 6:
       break;
     
   default:cout<<"\n\tWrong choice\n";
  }
  }
  if(choice != 6) 
  {
    cout<<"\n---------------------------------------------------\n"; 
    cout<<"\n You want to continue-1 or Exit-0 : ";
    cin>>option;
    if (option == 0)
    {
       choice = 6;
    }
  }
  }while(choice != 6 );
  
  cout<<"\n\tEND\n";
  return 0;
}
