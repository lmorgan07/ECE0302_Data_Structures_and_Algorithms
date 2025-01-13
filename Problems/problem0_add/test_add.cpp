#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "add.hpp"

// force template expansion
template class Add<int>;

TEST_CASE("Test add", "[Add]")
{

  Add<int> a;
  REQUIRE(a.call(1, 2) == 3);
}

// Long Add
TEST_CASE("Test long", "[Add]")
{
  Add<int> l;
  REQUIRE(l.call(1111111, 2222222) == 3333333);
}

// double add
TEST_CASE("Test double", "[Add]")
{
  double THRESHOLD = 0.000000001;
  Add<double> d;
  REQUIRE((d.call(3, -sqrt(2)) - 1.58578644) <= THRESHOLD);
  REQUIRE((d.call(4, sqrt(2)) - 5.41421356237) <= THRESHOLD);
}

// char add
TEST_CASE("Test Char", "[ADD]")
{
  Add<char> c;
  // ASCII # of '2' is 50 and '3' is 51, so adding them is equal to 101
  REQUIRE(c.call('2', '3') == 101);
}

// string add
TEST_CASE("Test String", "[ADD]")
{
  Add<std::string> s;
  // strings concatenate with addition
  REQUIRE(s.call("2", "3") == "23");
}

// bool add
TEST_CASE("Test Bool", "[Add]")
{
  Add<bool> b;
  // adding two truths together returns a true
  REQUIRE(b.call(1, 1) == 1);
}