#include <bits/stdc++.h>
using namespace std;
int main()
{
    int end = 0, start = 0, size, windowsize,i=0;
    deque<int> q;
    cout << "Length : ";
    cin >> size;
    cout << "Enter " << size << " digits :\n";
    int a[size];
    for (i = 0; i < size; i++)
        cin >> a[i];
    cout << "Enter window size : ";
    cin >> windowsize;
    while (end < size )
    {
        if (end-start+1 < windowsize)
        {
            if (a[end] < 0)
            {
                q.push_back(a[end]);
            }
       
        }
        else if(end-start+1==windowsize){

         if (a[end] < 0){
                    q.push_back(a[end]);
                }

         if(q.empty()){
            cout << 0 << " ";
            }

            else {
            cout<<q.front()<<" ";
                if (a[start] == q.front())
                {
                    q.pop_front();
                }
                
            }
            start++;
        }
        end++;
    }

    
    return 0;

   
}