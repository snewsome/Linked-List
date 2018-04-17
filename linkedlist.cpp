/*
* LinkedList.cpp
*
* Created on: Nov 28, 2015
* Author: Snews
*/
#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
LinkedList::LinkedList(){
head = NULL;
curr = NULL;
temp = NULL;
}
void LinkedList::addNode(double w, double cal, string d){
nodeptr n = new node;
n -> next = NULL;
n -> weight = w;
n -> calories = cal;
n-> date = d;
if(head != NULL){
curr = head;
while(curr -> next != NULL){
curr = curr -> next;
}
curr -> next = n;
}
else{
head = n;
}
}
void LinkedList::deleteNode(string d){
nodeptr delptr = NULL;
temp = head;
curr = head;
while(curr != NULL && d.compare(curr -> date) != 0){
temp = curr;
curr = curr->next;
}
if(curr == NULL){
std::cout << d << "was not in the list \n";
delete delptr;
}
else{
delptr = curr;
curr = curr -> next;
temp -> next = curr;
delete delptr;
cout << "the log " << d << " was deleted \n";
}
}
void LinkedList::logData(){
cout << "Enter date: ";
string d;
cin >> d;