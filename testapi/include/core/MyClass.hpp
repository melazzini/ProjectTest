#pragma once

/**
* @defgroup core   Core
* 
* @brief   This is the basic module.
* 
* This is the Core module. It contains all the basic functionality, that is used
* by all other modules in this api.
* @{
* 
* @}
*/

namespace testapi
{
    /**
     * @addtogroup core
     * @{
     */

    /**
     * @brief Generic class(Test).
     * 
     * 
     * @note    This is just a test to see how to work with doxygen
     *          and git-github for future projects, therefore do not
     *          pay too much anttention to this class logic.
     * 
     * @warning This is a warning, so be careful!
     * 
     * @see     fooInline()
     * 
     */
    class MyClass
    {
        /**@}*/

    public:
        /**
         * @brief Construct a new My Class object.
         * 
         *        This is the one and only ctor of this class.
         * 
         */
        MyClass();

        /**
         * @brief This is a another Trivial method.
         * 
         */
        void tictack() {}

        /**
        * @brief Trivial inline function
        * 
        * @param x input parameter
        * @return int return back the input parameter
        */
        inline int fooInline(int x) { return x; }
    };
} // namespace testapi