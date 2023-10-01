#include <gtest/gtest.h>

#include "../examples/controller/ExampleControl.hpp"

class ExampleControlTest : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
    eta_hsm::examples::controller::ExampleControl example_control_hsm_;
};

TEST_F(ExampleControlTest, InitialConditionsTest)
{
    EXPECT_EQ(example_control_hsm_.identify(), eta_hsm::examples::controller::ExampleState::eSober);
}

TEST_F(ExampleControlTest, TransitionLoggingTest)
{
    EXPECT_EQ(example_control_hsm_.identify(), eta_hsm::examples::controller::ExampleState::eSober);
    example_control_hsm_.dispatch(eta_hsm::examples::controller::ExampleEvent::eDrinkWiskey);
    example_control_hsm_.dispatch(eta_hsm::examples::controller::ExampleEvent::eDrinkWiskey);
    example_control_hsm_.dispatch(eta_hsm::examples::controller::ExampleEvent::eDrinkWiskey);
    EXPECT_EQ(example_control_hsm_.identify(), eta_hsm::examples::controller::ExampleState::eDrunk);
}