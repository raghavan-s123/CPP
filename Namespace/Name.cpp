#include <iostream>
using namespace std;

namespace First {
    namespace Nested {
        void foo() {
            printf("This is First::Nested::foo\n");
        }
    } // end namespace Nested
} // end namespace First

int main() {
    First::Nested::foo();  // Call the function
    return 0;
}
