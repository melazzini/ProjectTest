#pragma once
#include "MyClass.hpp"

/**
 * @defgroup    noCore  No Core
 * 
 * @brief   This is another module.
 * 
 * This is another module for experimentation.
 * @{
 * 
 * @}
 */

namespace testapi
{
    /**
     * @addtogroup noCore
     * @{
     */
    /**
     * @brief Simple derived class.
     * 
     */
    class MyDeriveClass : public MyClass
    {
        /**@}*/

    public:
        /**
         * @brief This is a simple method.
         * 
         */
        void foo();

        void foo(double x);
    };
} // namespace testapi
