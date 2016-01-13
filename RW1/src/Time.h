
#ifndef TIME_H
#define TIME_H

namespace TimeNS
{
    /**
      * @brief Generic Time
      */
    class Time
    {
        public: 
        class Point
        {

        };

        static Point getOrigin() { return m_Origin; };

        protected:
        /**
          * @brief The Origin of the Time Reference System
          *
          * Accessible by all the derive classes
          */
        static Point m_Origin;
    };


    /**
      * @brief The Continuous Time
      */
    class ContinuousTime : public Time
    {
        public:
        /**
          * @brief The Constructor has no special need
          */
        ContinuousTime() {};
    };

    /**
      * @brief The Discrete Time
      */
    class DiscreteTime : public Time
    {
        public:
        /**
          * @brief Constructor where the minimum Step Size is defined
          */
        DiscreteTime(double in_minstepsize) {};
    };
}


#endif
