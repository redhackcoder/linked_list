#include<iostream>
#include<conio.h>
using namespace std;

struct node // structure is used to create userdefine datatype
{
   int data ;
   node *next;// next contain the address of next create_node
};

 class list
 {
   node *head, *tail;
   public:
   void create_node(int value)
   {
         node *temp= new node;
         temp-> data = value;
         temp-> next = NULL;
         if(head==NULL)
         {
           head = temp;
           tail = temp;
           temp = NULL;
         }
         else
         {
           tail->next = temp;
           tail = temp;
         }
   }
   void display()
   {
       node *temp= new node;
       temp = head;
       while(temp!=NULL)
       {
         cout << temp->data << '\n';
         temp= temp->next;
       }
    }

    list()
     {
       head = NULL;
       tail = NULL;
     }
 };

 int main()
 {
   list s1;
   int choice , value;
   while(choice != 3)
  {
       cout << "1. create" << '\n';
       cout << "2. display" << '\n';
       cout<<"3. Exit"
       cout<<"select the option: ";
       cin>>choice;
       switch (choice)
       {
         case 1:
                 cout<<"enter the value";
                 cin>>value;
                 s1.create_node(value);
                 break;
        case 2:
                cout << "enter the linklist at last" << '\n';
                s1.display();
                break;
        default :
                 cout << "wrong choice" << '\n';
      }
   }
   return 0;
 }
