#ifndef __LIST_H__
#define __LIST_H__

#include <vector>
#include <cstdlib>

template <typename _T>
class List {
public:
	std::vector<_T> _vector;

	List() {}
	
	List(_T first_value)  {
		_vector.push_back(first_value);
	}

	inline size_t size() { return _vector.size(); };

	inline _T at(int i) { return _vector[i]; }
	inline _T &operator[](int i) { return _vector[i]; }
	inline void push_back(_T value) { _vector.push_back(value); }
};


#endif