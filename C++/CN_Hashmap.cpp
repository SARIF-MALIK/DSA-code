#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<typename T> 
class mapnode {
    public:
        string key;
        T value;
        mapnode* next;

    mapnode(string key, T value) {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~mapnode(){
        delete next;
    }
};

template<typename T> 
class ourmap{
    mapnode<T>** buckets;
    int count;
    int numBuckets;

    public:
        ourmap() { 
            count = 0;
            numBuckets = 5;
            buckets = new mapnode<T>*[numBuckets];
            for(int i= 0; i<numBuckets; i++)
                buckets[i] = NULL;
        }

        ~ourmap() { 
            for(int i=0; i< numBuckets; i++){
                delete buckets[i];
            }
            delete [] buckets;
        }
    int size() { 
        return count;
    }
    
    T getvalue(string key){
        int bucketindex = getbucketindex(key);
         mapnode<T>* head = buckets[bucketindex]; 
         while(head != NULL) { 
             if(head -> key == key) { 
                 return head->value;
             }
             head = head->next;  
         }
         return 0;

    }
    private: 
    int getbucketindex(string key){
        int hashcode = 0;
        int currentcoeff = 1;
        for(int i = key.length()-1; i >= 0; i--) {
            hashcode += key[i] * currentcoeff;
            hashcode = hashcode % numBuckets;
            currentcoeff *= 37;
            currentcoeff = currentcoeff % numBuckets;
        }
        return hashcode % numBuckets;
    }

    void rehash () { 
        mapnode<T> ** temp = buckets; 
        buckets = new mapnode<T>*[2*numBuckets];
        for (int i = 0; i < 2*numBuckets; i++) {
            buckets[i] = NULL;
        }
        int oldnumbuckets = numBuckets;
        numBuckets *= 2;
        count = 0;

        for (int i = 0; i < oldnumbuckets; i++) {
            mapnode<T>* head = temp[i];
            while(head != NULL) {
                string key = head -> key;
                T value = head -> value;
                insert(key, value);
                head = head -> next;
            }
        }

        for (int i=0; i<oldnumbuckets; i++) {
            mapnode<T> * head = temp[i];
            delete head;
        }
        delete [] temp;
    }
    public: 

    double getloadfactor() {
        return (1.0*count)/numBuckets;
    }

    void insert (string key, T value) { 
        int bucketindex = getbucketindex(key);
        mapnode<T>* head = buckets[bucketindex];
        while(head != NULL) {
            if(head->key == key){
                head -> value = value;
                return;
            }
            head = head->next;
        }

        head = buckets[bucketindex];
        mapnode<T> * node = new mapnode<T> (key, value);
        node->next = head;
        buckets[bucketindex] = node; 
        count++; 
        double loadfactor = (1.0*count)/numBuckets;
        if(loadfactor > 0.7) {
            rehash();
        }

    }

    T remove(string key) { 
        int bucketindex = getbucketindex(key);
        mapnode<T>* head = buckets[bucketindex]; 
        mapnode<T>* prev = NULL;
        while(head != NULL){
            if(head->key == key){
                if(prev==NULL){
                    buckets[bucketindex] = head->next;
                }
                else
                prev->next = head -> next;
                T value = head->value;
                head -> next = NULL;
                delete head; 
                count--;   
                return value;
            }
            prev = head;
            head = head -> next;
        }
        return 0; 
    }  
};




int main(){
    ourmap<int> map;
    for (int i = 0; i < 10; i++) {
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        int value = i + 1;
        map.insert(key, value); 
        cout << map.getloadfactor() << endl; 
    }

    map.remove("abc2");
    map.remove("abc7");

    for (int i=0; i< 10; i++) {
        char c = '0' + i;
        string key = "abc";
        key = key + c;
        cout<< key << " : " << map.getvalue(key) <<endl;
    }

    cout << map.size() << endl; 

    return 0;
}