export module DataStructs:List;

// Interface for data structures that contain ordered elements
export template <typename T>
class List {
public:

	// Default implementation to quickly add an item to the list
	// If not set by implementing class, default behavior is calling
	// List<T>::insert(T, int) and inserting the element first in the list
	virtual void add(T item) {
		insert(item, 0);
	};
	// Inserts an item at specified index
	virtual void insert(T, int) = 0;
	// Inserts an item first in the list, shifting elements to preserve order
	virtual void insertFirst(T) = 0;
	// Inserts an item last in the list, shifting elements to preserve order
	virtual void insertLast(T) = 0;
	// Returns a reference to the item at specified index
	virtual T* get(int) = 0;
	// Returns an array containing copies of the items in the list
	virtual T* cloneArray() = 0;
	// Returns an array containing copies of the items in the list between 
	virtual T* sublist(int, int) = 0;
	// Sorts the list so that the items are in ascending order according to the < operator
	virtual void sort() = 0;
	// Sorts the list so that the items are in ascending order according to predicate's result and the < operator
	virtual void sort(int* (func)(T, T)) = 0;

};