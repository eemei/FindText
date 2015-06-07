#include "unity.h"
#include "FindText.h"

void setUp(void){}

void tearDown(void){}

void test_findText_given_a_find_a_should_return_0(void)
{
	TEST_ASSERT_EQUAL(0,findText("A", "A"));
}

void test_findText_given_a_find_a_find_b_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, findText("A", "B"));
}

void test_findText_given_L_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, findText("ALL", "L"));
}

void test_findText_given_WORLD_find_rl_should_return_2(void)
{
	TEST_ASSERT_EQUAL(2, findText("WORLD", "RL"));
}

void test_findText_given_WORLD_find_rx_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, findText("WORLD", "RX"));
}

void test_findText_given_WORLD_find_rx_should_return_7(void)
{
	TEST_ASSERT_EQUAL(8, findText("WORLRRRDRX", "RX"));
}

void test_findText_given_WORLD_find_rrd_should_return_4(void)
{
	TEST_ASSERT_EQUAL(6, findText("WORLLRRXEA", "RXE"));
}

void test_findText_given_WORLLRRXRDRXE_find_rxe_should_return_10(void)
{
	TEST_ASSERT_EQUAL(10, findText("WORLLRRXRDRXE", "RXE"));
}

void test_findText_given_WORLLRRXEBRDRXEA_find_RXEA_should_return_12(void)
{
	TEST_ASSERT_EQUAL(12, findText("WORLLRRXEBRDRXEA", "RXEA"));
}

void test_findText_given_WORLLRRX_EBRDRXEA_find_RXEA_should_return_13(void)
{
	TEST_ASSERT_EQUAL(13, findText("WORLLRRX EBRDRXEA", "RXEA"));
}

