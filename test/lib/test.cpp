
#include "test.h"


class TestsManager {
    // Note: static initialization fiasco
    // http://www.parashift.com/c++-faq-lite/static-init-order.html
    // http://www.parashift.com/c++-faq-lite/static-init-order-on-first-use.html
public:
    static std::vector<std::string>& testNames() {
        static std::vector<std::string>* _testNames = new std::vector<std::string>;
        return *_testNames;
    }

    static std::vector<void (*)(void)>& tests() {
        static std::vector<void (*)(void)>* tests = new std::vector<void (*)(void)>;
        return *tests;
    }
};



int AddTest(void (*foo)(void), std::string name) {
    TestsManager::tests().push_back(foo);
    TestsManager::testNames().push_back(name);
    return 0;
}



size_t RunTests() {
    size_t numFailed = 0;
    for (size_t i = 0; i < TestsManager::tests().size(); ++i) {
        printf("\033[0;32m{ running}\033[0m %s\n", TestsManager::testNames()[i].c_str());

        try {
            // Run test
            (*TestsManager::tests()[i])();
            printf("\033[0;32m{      ok}\033[0m %s\n", TestsManager::testNames()[i].c_str());

        } catch (AssertionFailedException& e) {
            printf("\033[1;31m{  failed} %s\n", TestsManager::testNames()[i].c_str());
            printf("\tAssertion failed: %s\n\033[0m", e.what());
            numFailed++;
        }
    }
    return numFailed;
}



int main() {
    size_t numFailed = RunTests();
    if (numFailed == 0) {
        return 0;
    } else {
        return -1;
    }
}