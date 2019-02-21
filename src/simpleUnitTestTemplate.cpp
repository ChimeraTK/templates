// This file is a template for simple Boost tests
// which are self-contained within one function.
// For more complex tests, where you want to prepare
// a test environment and run several tests on it,
// have a look at the untitTestTemplate.cpp.

// Define a name for the test module.
#define BOOST_TEST_MODULE SimpleExampleTest
// Only after defining the name include the unit test header.
#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test_framework;

// #include "theStuffIWantToTest.h"

// This just thows the int -1 if you put true as argument.
void throwIfTrue(bool doThrow) {
  if (doThrow) {
    throw - 1;
  }
}

// Create a test suite which holds all your tests.
BOOST_AUTO_TEST_SUITE(SimpleExampleTestSuite)

// Define one test after another. Each one needs a unique name.
BOOST_AUTO_TEST_CASE(testSomethingSimple) {
  int a = 3;
  // Use BOOST_CHECK to test conditions. They all just have to be true.
  BOOST_CHECK(a == 3);
  BOOST_CHECK(true);

  // If you uncomment this the test will fail.
  //  BOOST_CHECK( 7 > 15 );
}

BOOST_AUTO_TEST_CASE(testThrowing) {
  // Give the type of exception which has to be thrown.
  BOOST_CHECK_THROW(throwIfTrue(true), int);

  // Another example which would fail.
  //  BOOST_CHECK_NO_THROW( throwIfTrue(true) );

  BOOST_CHECK_NO_THROW(throwIfTrue(false));
}

// After you finished all test you have to end the test suite.
BOOST_AUTO_TEST_SUITE_END()
