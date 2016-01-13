
#ifndef RANDOMVARIABLES_H
#define RANDOMVARIABLES_H

namespace RandomVarNS
{
  /**
    * @brief The generic \f$ X \f$ Random Variable with values over a certain domain
    */
    template <typename Domain>
    class RandomVariable
    {

    };

    /**
      * @brief Operators acting on Random Variables
      */
    namespace Operators
    {
        template <typename Domain>
        class ExpectedValue
        {
            public:
            /**
              * @brief The Expected Value Operator regarding a Random Variable over a certain Domain
              */
            ExpectedValue(const RandomVariable<Domain>& in_rv) { };

        };

    }
}


#endif
