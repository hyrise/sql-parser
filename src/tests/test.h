#ifndef __TEST_H__
#define __TEST_H__


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


std::vector<std::string> g_test_names;
std::vector<void (*)(void)> g_tests;

int AddTest(void (*foo)(void), std::string name) {
	g_tests.push_back(foo);
	g_test_names.push_back(name);
	return 0;
}


void RunTests() {
	size_t num_failed = 0;
	for (size_t i = 0; i < g_tests.size(); ++i) {
		printf("\033[0;32m{ running}\033[0m %s\n", g_test_names[i].c_str());

		try { 
			// Run test
			(*g_tests[i])();
			printf("\033[0;32m{      ok}\033[0m %s\n", g_test_names[i].c_str());

		} catch (AssertionFailedException& e) {
			printf("\033[1;31m{  failed} %s\n", g_test_names[i].c_str());
			printf("\tAssertion failed: %s\n\033[0m", e.what());	
			num_failed++;
		}

	}
}


int main() {
	RunTests();
	return 0;
}



#endif