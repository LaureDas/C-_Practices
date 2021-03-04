#include<iostream>
#include<stdio.h>
#include<math.h>


using namespace std;


class IntQueue{
    protected: 
        int front;
        int back;
        int nfill;
        int size;
        int *q; //store elements of queue
    
    public:
        //constructor
        IntQueue(int n): front(0), back(0), nfill(0), size(n){
            q= new int[size];
            //initialize all elements to zero
            for(int i=0; i<size; i++){
                q[i]=0;
            }
        }
        //copy constructor
        IntQueue(const IntQueue&other): front(other.front), back(other.back), nfill(other.nfill), size(other.size){
            q = new int [other.size];
            std::copy(other.q, other.q+size, q);
        }
        //destructor
        ~IntQueue(){
            delete [] q;
        }
        //reset member fn
        void reset(){
            front=back=nfill=0;
            for(int i=0; i<size; i++){
                q[i]=0;
            }
        }
        //empty member fn
        bool empty(){
            front=back=nfill=0;
            return (nfill==0)? true: false;
        }

        //fill
        void fill(int* a, int n){
            front=0;
            back=0;
            nfill=0;

            if(n<size){
                for(int i=0; i<size; i++){
                    q[i]=0;
                }
            }
            for (int i=0; i<size; i++){
                    q[i]=a[i];
                    //cout<<q[i]<<endl;;
                    nfill++;
                    back++;
                }
        }
        //getQ
        int* getQ(){
            return q;
        }
        //remove
        void remove(){
            if(nfill>0){
                front++;
                nfill--;
            }
        }
        //add int
        void add(int n){
            if(nfill<size){
                q[back]=n;
                nfill++;
                back++;
            }
        }
        //overloading
        friend std::ostream& operator<<(std::ostream&out, IntQueue& q);


};

std::ostream& operator<<(std::ostream&out, IntQueue& obj){
    out<<"IntQueue=[{";
    for (int i=0; i<obj.size-1; i++){
        out<<obj.q[i]<<",";
    }
    out<<obj.q[obj.size-1]<<"}, ";
    out<<"front: "<< obj.front<<", ";
    out<<"back: "<< obj.back<<", ";
    out<<"nfill: "<< obj.nfill<<", ";
    out<<"size: "<< obj.size<<"]";
    return out;
}

int main(){
    // TEST constructor and cout<<
    //IntQueue iq1(5);
    //cout << iq1 << endl;

    // TEST reset()
    IntQueue iq2(5);
    int v1 [] = {1,2,3,4};
    iq2.fill(v1,4);
    cout << iq2 << endl;
    iq2.reset(); 
    cout << iq2 << endl;

    // TEST empty()
    IntQueue iq3(5);
    int v3 [] = {1,2,3,4};
    iq3.fill(v3,4);
    cout << iq3 << endl;
    iq3.empty(); 
    cout << iq3 << endl;

    // TEST add(int) and remove()
    IntQueue iq4(5);
    iq4.add(1);
    iq4.add(2);
    iq4.add(3);
    iq4.add(4);
    iq4.add(5);
    iq4.remove();
    //cout<<"add";
    cout << iq4 << endl;


    return 0;

}