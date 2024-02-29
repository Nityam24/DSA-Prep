/**
 * @file stackSort.cpp
 * @brief This file contains the implementation of a function to sort a stack of integers in ascending order.
 */

#include <bits/stdc++.h> 

/**
 * @brief Inserts an element at its correct position in a stack in ascending order.
 * @param s The stack to insert the element into.
 * @param ele The element to be inserted.
 */
void insertatpos(stack<int> &s, int ele)
{
    if(s.empty())
    {
        s.push(ele);
        return;
    }

    if(ele < s.top())
    {
        int top = s.top();
        s.pop();

        insertatpos(s,ele);

        s.push(top);
    }

    else
    {
        s.push(ele);
    }
}

/**
 * @brief Sorts a stack of integers in ascending order using recursion.
 * @param s The stack to be sorted.
 */
void sort(stack<int> &s)
{
    if(s.empty())
        return;

    int ele = s.top();
    s.pop();

    sort(s);

    insertatpos(s,ele);
}

/**
 * @brief Sorts a stack of integers in ascending order.
 * @param s The stack to be sorted.
 * @return The sorted stack.
 */
stack<int> sortStack(stack<int> &s)
{
    sort(s);

    return s;
}