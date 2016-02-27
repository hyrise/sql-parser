#ifndef __TEST_H__
#define __TEST_H__

#include <vector>
#include <string>
#include <iostream>


#define TEST(name) \
	void name(); \
	namespace g_dummy { int _##name = AddTest(name, #name); } \
	void name()


#define ASSERT(cond) if (!(cond)) throw AssertionFailedException(#cond);

#define ASSERT_TRUE(cond) ASSERT(cond);
#define ASSERT_FALSE(cond) if (cond) throw AssertionFailedException(#cond);

#define ASSERT_NULL(value) ASSERT_TRUE(value == NULL);
#define ASSERT_NOTNULL(value) ASSERT_TRUE(value != NULL);

#define ASSERT_STREQ(a, b) \
	if (std::string(a).compare(std::string(b)) != 0) throw AssertionFailedException(#a " == " #b)
#define ASSERT_EQ(a, b) \
	if (a != b) { \
		std::cout << "Actual values: " << a << " != " << b << std::endl; \
	} \
	ASSERT(a == b);



class AssertionFailedException: public std::exception {
public:
    AssertionFailedException(std::string msg) :
        std::exception(),
        _msg(msg) {};

    virtual const char* what() const throw() {
        return _msg.c_str();
    }

protected:
    std::string _msg;
};

int AddTest(void (*foo)(void), std::string name);

#endif