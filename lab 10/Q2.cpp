#include<iostream> 
using namespace std; 

class priority_queue
{ 
public:
    int *harr; 
    int capacity; 
    int heap_size; 
    public: 
    priority_queue(int cap) 
    { 
        heap_size = 0; 
        capacity = cap; 
        harr = new int[cap]; 
    } 
    void insertKey(int k) 
    { 
        if (heap_size == capacity) 
        { 
            cout << "\nOverflow: Could not insertKey\n"; 
            return; 
        } 
        heap_size++; 
        int i = heap_size - 1; 
        harr[i] = k; 

        while (i != 0 && harr[parent(i)] > harr[i]) 
        { 
        swap(harr[i], harr[parent(i)]); 
        i = parent(i); 
        } 
    }

    void decreaseKey(int i, int new_val) 
    { 
        harr[i] = new_val; 
        while (i != 0 && harr[parent(i)] > harr[i]) 
        { 
        swap(harr[i], harr[parent(i)]); 
        i = parent(i); 
        } 
    } 
    void display()
    {
    	for(int i=0;i<heap_size;i++)
    	{
    		cout<<harr[i]<<" ";
		}
	}
   
    int extractMin() 
    { 
        if (heap_size <= 0) 
            return INT_MAX; 
        if (heap_size == 1) 
        { 
            heap_size--; 
            return harr[0]; 
        } 

        int root = harr[0]; 
        harr[0] = harr[heap_size-1]; 
        heap_size--; 
        MinHeapify(0); 
    
        return root; 
    } 
    
    void deleteKey(int i) 
    { 
        decreaseKey(i, 0); 
        extractMin(); 
    } 
    void MinHeapify(int i) 
    { 
        int l = left(i); 
        int r = right(i); 
        int smallest = i; 
        if (l < heap_size && harr[l] < harr[smallest]) 
            smallest = l; 
        if (r < heap_size && harr[r] < harr[smallest]) 
            smallest = r; 
        if (smallest != i) 
        { 
            swap(harr[i], harr[smallest]); 
            MinHeapify(smallest); 
        } 
    } 
    int parent(int i) { 
	return (i-1)/2; 
	} 
  
    
    int left(int i) { 
	return (2*i + 1); 
	} 
  
   
    int right(int i) { 
	return (2*i + 2); 
	} 
  
    int getMin() { 
    
	return harr[0]; 
	} 

}; 
  
int main() 
{ 

    priority_queue h(8);
	cout<<"Elements: "<<endl; 
    h.insertKey(4); 
    h.insertKey(4);
	h.insertKey(3);
    h.insertKey(15); 
    h.insertKey(9);
	h.insertKey(4); 
    h.insertKey(45);
	h.display();
	
	cout<<endl<<"Min heapify called"<<endl; 
    h.MinHeapify(7); 
    cout<<endl<<"After deleting:"<<endl;
    h.deleteKey(2);  
    h.display();
  
    cout <<endl<<"Minimum element "<<h.extractMin() << " "; 
    cout<<h.getMin() << " "; 
    h.decreaseKey(2, 1); 
    
    cout <<endl<<"Minimum elemnent "<<h.getMin(); 
    return 0; 
} 






