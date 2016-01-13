
#ifndef SPACES_H
#define SPACES_H

namespace SpacesNS
{
    /**
      * @brief Represents the concept of Measure using a Real Number also containing the Infinitesimal Value
      */
    class RealMeasure
    {
        public:
        enum ValType {StandardVal, InfinitesimalVal, InfiniteVal};
        /**
          * @brief The Default Constructor creates an Infinitesimal Measure by Default
          */
        RealMeasure(ValType in_type=InfinitesimalVal, double in_val=0);

        ValType getType();
        double getVal();

        private:
        ValType m_type;
        ValType m_val;
    };


    /**
      * @brief The \f$ \mathbb{R} \f$ Domain
      */
    class Real
    {
        public:
        /**
          * @brief Default Constructor
          */
        Real();

        /**
          * @brief The Real Constructor starting from double
          */
        Real(double f) {};

        /**
          * @brief Defines the topological concept of point or closed set in Real
          */
        class Point
        {

        };

        /**
          * @brief Defines the topological concept of infinitesimal open set
          */
        class OpenSet
        {
            public:
            /**
              * @brief The Default Constructor goes for the infinitesimal Open Set dx
              */
            OpenSet();

            RealMeasure getMeasure();
        };


        //** Return the Origin of the State
        static Point getOrigin() { return m_Origin; };

        private:
        static Point m_Origin;
    };

    /**
      * @brief The \f$ \mathbb{R}^{+} \f$ Domain
      */
    class PositiveReal : public Real
    {
        public:
        /**
          * @brief The Positive Real Constructor starting from double
          */
        PositiveReal(double f) {};
    };



    /**
      * @brief The \f$ N \f$ Dimensional Euclidean Space
      */
    template <unsigned int DimNumber>
    class EuclideanSpace
    {
        public:
        class Point
        {

        };

        //** Return the Origin of the State
        static Point getOrigin() { return m_Origin; };

        private:
        static Point m_Origin;
    };

}


#endif
