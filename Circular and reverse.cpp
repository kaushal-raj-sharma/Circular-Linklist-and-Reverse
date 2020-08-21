#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>

void circle(struct node *,struct node *);
void reverse(struct node *,struct node *);

struct node
{
int n;
struct node * next;
struct node * pre;
};

void main()
{
int i,a,p;
struct node *z,*w,*k,*q;
clrscr();

printf("enter the value for number of nodes\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
struct node *b = new node();
if(i==1)
{
b->pre='\0';
z=b;
q=b;
}
printf("enter the value of node\n");
scanf("%d",&p);
b->n=p;

if(i>1)
{
z->next=b;
b->pre=z;
z=b;
}
 }
z->next='\0';
printf("\n");
circle(q,z);
printf("\n");
reverse(q,z);

getch();
}

void circle(struct node *g,struct node *h)
{
 h->next=g;
 g->pre=h;
 g=(g->pre)->pre;
 while(h->n!=g->n)
 {
  printf("%d",h->n);
  printf("\n");
  h=h->next;
 }
 printf("%d",h->n);
 printf("\n");
 h=h->next;
 printf("%d",h->n);
}
void reverse(struct node *g,struct node *h)
{
 h->next=g;
 g->pre=h;
 while(h->n!=g->n)
 {
  printf("%d",h->n);
  printf("\n");
  h=h->pre;
 }
 printf("%d",h->n);
 printf("\n");
 h=h->pre;
 printf("%d",h->n);
}
