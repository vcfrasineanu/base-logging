#include <boost/test/unit_test.hpp>
#include <lib/Dummy.hpp>

using namespace lib;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    lib::DummyClass dummy;
    dummy.welcome();
}
