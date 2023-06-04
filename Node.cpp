#include <iostream>
#include <string>
using namespace std;
class node;
class node{
    public:
    int v;
    node* next;
    //node* tail;
    node* setNode(node* nx);
    node* getNode();
    void insertHead(node* nd);
};
node* node::setNode(node* nx){
    next=nx;
    return nx;
}
node* node::getNode(){
    return next;
}
void node::insertHead(node* nd){
    node* firstN= new node();
    firstN->v=23;
    firstN->setNode(nd);
    nd=firstN;
}
int main(){
    node* head; node* tail;
    for(int i=0;i<=10;i++){
        node* nd=new node();
        nd->v=i;
        node* cur;
        if(head==NULL){// it is equivelent to i==0;
            head=nd; //same as tail=head=nd;
            tail=nd;
            cur=nd;
        }else{
            cur= cur->next=nd;//same as cur->setNext(nd);
            tail=cur;
        }
    }
      node* temp=head;
      while(temp!=nullptr){
        temp= temp->getNode();
        std::cout<<temp->v<<" ";
      }
      temp->insertHead(head);
      std::cout<<head->v;
    return 0;
}