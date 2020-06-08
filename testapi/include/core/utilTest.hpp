#pragma once

namespace testapi
{
	/// floating point type
	using test_float = double;

	/// integer type
	using test_int = int;

	/// natural numbers type
	using test_size = size_t;

	/**
	 * @brief This is a kernel launcher to fooKernelTest()
	 */
	void callFooKernelTest();
}// namespace test