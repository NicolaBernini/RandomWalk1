
#ifndef SIMPLE_RANDOM_WALK_H
#define SIMPLE_RANDOM_WALK_H

#include <vector>
#include "Spaces.h"
#include "Time.h"
#include "RandomVariables.h"

/**
  * @file SimpleRandomWalk.h
  * @brief The Simple Random Walk Declerations
  */

/**
  * The Simple Random Walk
  */
namespace SimpleRandomWalk
{
  /**
    * @brief The Random Walk on a generic domain
    */
  template <typename Domain>
  class RandomWalk
  {

  };

  /**
    * @brief The Monodimensional Random Walk Object
    */
  template <>
  class RandomWalk <SpacesNS::EuclideanSpace<1> >
  {
      public:
      //RandomWalk() {};
      RandomWalk(const SpacesNS::EuclideanSpace<1>::Point& in_InitState = SpacesNS::EuclideanSpace<1>::getOrigin(), const TimeNS::DiscreteTime::Point in_InitTime = TimeNS::DiscreteTime::getOrigin() ) {};

      /**
        * @brief Returns the History indexed over time of the Random Walk over a Monodimensional Domain
        */
      std::vector<RandomVarNS::RandomVariable<SpacesNS::EuclideanSpace<1> > > getHistory();

      private:
        /**
          * @brief The State
          */
        SpacesNS::EuclideanSpace<1>::Point m_State;

        /**
          * @brief The Time
          */
        TimeNS::Time::Point m_Time;
  };

  //** Alias for the Monodimensional Random Walk
  using MonoRandomWalk = RandomWalk <SpacesNS::EuclideanSpace<1> >;
}

#endif
