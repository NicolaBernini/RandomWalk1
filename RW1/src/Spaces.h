
#ifndef SPACES_H
#define SPACES_H

namespace SpacesNS
{
  /**
    * @brief The \f$ N \f$ Dimensional Euclidean Space
    */
  template <unsigned int DimNumber>
  class EuclideanSpace
  {
    public:
    /**
      * @brief The Point element of this space is the element with dimension zero
      */
    class Point
    {

    };

    //** Return the Origin of the State
    static Point getOrigin() { return m_Origin; };

    private:
    /**
      * @brief The Origin of this Euclidean Space
      */
    static Point m_Origin;
  };
}


#endif
