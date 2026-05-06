#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of hash table: ";
    cin >> size;

    int* hashTable = new int[size];

    for (int i = 0; i < size; i++)
        hashTable[i] = -1;

    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> key;

        int index = key % size; 

        // Linear probing
        while (hashTable[index] != -1) {
            index = (index + 1) % size;
        }

        hashTable[index] = key;
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < size; i++) {
        if (hashTable[i] != -1)
            cout << i << " --> " << hashTable[i] << endl;
        else
            cout << i << " --> NULL\n";
    }

    cout << "\nEnter element to search: ";
    cin >> key;

    int index = key % size;
    int start = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            cout << "Element found at index " << index;
            break;
        }
        index = (index + 1) % size;

        if (index == start) break; 
    }

    if (hashTable[index] != key)
        cout << "Element not found";

    delete[] hashTable;
    return 0;
}