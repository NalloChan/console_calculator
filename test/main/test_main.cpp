
#include <gtest/gtest.h>

namespace
{
    class TestMain : public testing::Test
    {
    protected:
        TestMain() {}
        ~TestMain() {}

        void SetUp() override
        {
        }

        void TearDown() override
        {
        }
    };

    TEST_F(TestMain, BasicTest)
    {
        EXPECT_TRUE(true);
    }
}
