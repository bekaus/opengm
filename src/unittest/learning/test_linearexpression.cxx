#include <ostream>
#include <iostream>

#include <opengm/unittests/test.hxx>
#include <opengm/learning/linearexpression.hxx>

template<class T>
struct LinearExpressionTest {
  void test() {
    opengm::LinearExpression<double> l;
  }

  void run() {
    this->test();
   }
};

int
main() {
   std::cout << "Linearexpression test...  " << std::endl;
   {
     LinearExpressionTest<float> t;
     t.run();
   }
   {
     LinearExpressionTest<double >t;
     t.run();
   }
   std::cout << "done.." << std::endl;
   return 0;
}
