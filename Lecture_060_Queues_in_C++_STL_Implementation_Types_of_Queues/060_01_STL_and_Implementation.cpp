

#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);

    cout << "size of queue is: " << q.size() << endl;

    q.pop();
    
    cout << "size of queue is: " << q.size() << endl;

    if(q.empty()){
        cout << "queue is empty " << endl;
    }else{
        cout << "queue is not empty " << endl;
    }
    
}

// Output:
// size of queue is: 3
// size of queue is: 2
// queue is not empty 


// // ---------------------------------------------------------



#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);

    cout << "size of queue is: " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "size of queue is: " << q.size() << endl;

    if(q.empty()){
        cout << "queue is empty " << endl;
    }else{
        cout << "queue is not empty " << endl;
    }
    
}


// Output:
// size of queue is: 3
// size of queue is: 0
// queue is empty






#include <iostream>
#include <queue>
using namespace std;

int main(){
    // create a queue
    queue<int> q;

    q.push(11);
    cout << "front of queue is: " << q.front() << endl;
    q.push(15);
    cout << "front of queue is: " << q.front() << endl;
    q.push(13);
    cout << "front of queue is: " << q.front() << endl;

    

    q.pop();
    q.pop();
    q.pop();

    

    if(q.empty()){
        cout << "queue is empty " << endl;
    }else{
        cout << "queue is not empty " << endl;
    }
    
}


// Output:
// front of queue is: 11
// front of queue is: 11
// front of queue is: 11
// queue is empty