#pragma once
#include<cstdlib>
namespace testapi
{
	/// floating point type
	using test_float = double;

	/// integer type
	using test_int = int;

	/// natural numbers type
	using test_size = size_t;

#ifdef USE_CUDA
	/**
	 * @brief This is a kernel launcher to fooKernelTest()
	 */
	void callFooKernelTest();
#endif

} // namespace testapi