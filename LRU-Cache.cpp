#include <bits/stdc++.h>

using namespace std;

class QueueNode
{
public:
    string key;
    string value;
    QueueNode *next;
    QueueNode *prev;

    QueueNode(string key, string value)
    {
        this->key = key;
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class LRUCache
{
public:
    int capacity, cacheSize = 0;
    QueueNode *head = new QueueNode("-1", "-1");
    QueueNode *tail = new QueueNode("-1", "-1");
    unordered_map<string, QueueNode *> lru;

    LRUCache(int);
    void admit(QueueNode*);
    void evict(QueueNode*);
    void setPage(string, string);
    string getPage(string);
    void displayCache();
};

LRUCache::LRUCache(int size)
{
    this->capacity = size;
    head->next = tail;
    tail->prev = head;
}

void LRUCache::admit(QueueNode* node)
{
    QueueNode* temp = head->next;
    head->next = node;
    node->prev = head;
    node->next = temp;
    temp->prev = node;
}

void LRUCache::evict(QueueNode* temp)
{
    // QueueNode* delNext = temp->next;
    // QueueNode* delPrev = temp->prev;
    // delNext->prev = delPrev;
    // delPrev->next = delNext;

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    cacheSize--;
}

string LRUCache::getPage(string key){
    string val = "-1";
    if(lru.find(key) != lru.end()){
        QueueNode* node = lru[key];
        lru.erase(key);
        val = node->value;
        evict(node);    //Deleting Node from current position.
        admit(node);    //Adding the Node to the front.
        lru[key] = head->next;
        cacheSize++;
    }
    return val;
}

void LRUCache::setPage(string key, string value)
{
    if(lru.find(key) != lru.end()){
        QueueNode* exist = lru[key];
        lru.erase(key);
        evict(exist);
    }
    if(cacheSize == capacity){
        lru.erase(tail->prev->key);
        evict(tail->prev);
    }
    admit(new QueueNode(key, value));
    lru[key] = head->next;
    cacheSize++;
}

void LRUCache::displayCache()
{
    for(auto &i : lru) 
    {
        cout<<"'"<<i.first<<"' : "<<"'"<<i.second->value<<"'"<<endl;
    }
}

void showInfo(){
    cout<<"A to add page.\n";
    cout<<"D to display list.\n";
    cout<<"S to Seek value.\n";
    cout<<"E to exit.\n";
    cout<<"Enter Choice: ";
}
int main()
{
    int n, i;
    cout<<"Enter Cache Size: ";
    cin>>n;
    char ch='\0';
    LRUCache lru(n);
    while(ch != 'E'){
        showInfo();
        cin>>ch;
        if(ch == 'A'){
            string key, val;
            cout<<"Key: ";cin>>key;
            cout<<"Value: ";cin>>val;
            lru.setPage(key, val);
        } 
        if(ch == 'S'){
            string key;
            cin>>key;
            cout<<lru.getPage(key)<<"\n";
        }
        if(ch == 'D'){
            lru.displayCache();
        }
    }
    
    return 0;
}