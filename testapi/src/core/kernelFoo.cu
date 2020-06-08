
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include<stdio.h>

namespace testapi
{
	__global__ void fooTest()
	{
		printf("Hello world from the GPU!\n");
		printf("fooTest is here!");
	}


	void callFooKernelTest()
	{
		fooTest << <1, 1 >> > ();
	}
}