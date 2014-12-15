#ifndef __LIST_H__
#define __LIST_H__

#include <vector>
#include <stdlib.h>

namespace hsql {

// TODO: try to replace the List wrapper by directly using std::vector

/**
 * @class List
 * @brief Classed interface to std::vector (may be replaced with std::vector)
 */
template <typename _T>
class List {
public:
	List() {}

	List(_T first_value)  {
		_vector.push_back(first_value);
	}

	virtual ~List() {
		for (_T e : _vector) delete e;
	}

	inline size_t size() { return _vector.size(); };

	inline _T at(int i) { return _vector[i]; }
	inline _T &operator[](int i) { return _vector[i]; }

	inline void push_back(_T value) { _vector.push_back(value); }

	inline std::vector<_T> vector() { return _vector; };


private:
	std::vector<_T> _vector;

};


} // namespace hsql

#endif
