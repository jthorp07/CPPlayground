export module DataStructs:ArrayList;

import :List;

export template <typename T>
class ArrayList : public List<T> {

private:
	T* buffer;
	size_t buffer_size;
	size_t list_size;
public:
	ArrayList();
	
};
