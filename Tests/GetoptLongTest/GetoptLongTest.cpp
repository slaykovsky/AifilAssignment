//
// Created by Alexey Slaykovsky on 27/12/15.
//

#include <gtest/gtest.h>
#include <getoptLong.h>

static const vos only_name = {"test"};
static const vos argv = {"test", "--integer=10", "--string=WOW", "--bool"};
static const options_t options = generate_options();

TEST(GetoptsLongTest, GetHelpMessageTestWhenEmpty)
{
    std::string expected = "Usage: test --bool --integer [--string] ";
    std::string actual;
    if (only_name.size() == 1)
    {
        actual = get_help_message(only_name[0], options);
    }
    EXPECT_EQ(expected, actual);
}

TEST(GetoptsLongTest, GetoptsLongTest)
{
    std::string expected = "--bool is required!\n--integer = 10\n--string = WOW\n";
    std::string actual = getopts_long(argv, options);
    EXPECT_EQ(expected, actual);
}