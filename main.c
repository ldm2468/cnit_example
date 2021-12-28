#include "tests.h"
#include "cnit/cnit_main.h"

int example_test_case() {
    CNIT_ASSERT(2 + 2 == 4);
    return 0;
}

int main() {
    cnit_add_test(example_test_case, "Example test case");
    cnit_add_test(another_example_test_case, "Another example test case");
    return cnit_run_tests();
}
