#ifndef FFLOW_PRIMES_HH
#define FFLOW_PRIMES_HH

#include <vector>
#include <cmath>
#include <fflow/common.hh>

namespace fflow {


  // The 201 largest primes which fit in a 63-bit integer.  They can
  // be generated with the following mathematica command
  //
  //    Select[2^63 - Range[9425], PrimeQ]
  //
  // The Mod argument in the routines of these library is assumed to
  // be initialized with one of these integers.
  const unsigned BIG_UINT_PRIMES_SIZE = 201;
  const UInt BIG_UINT_PRIMES[BIG_UINT_PRIMES_SIZE] =
    {9223372036854775783ULL,
     9223372036854775643ULL,
     9223372036854775549ULL,
     9223372036854775507ULL,
     9223372036854775433ULL,
     9223372036854775421ULL,
     9223372036854775417ULL,
     9223372036854775399ULL,
     9223372036854775351ULL,
     9223372036854775337ULL,
     9223372036854775291ULL,
     9223372036854775279ULL,
     9223372036854775259ULL,
     9223372036854775181ULL,
     9223372036854775159ULL,
     9223372036854775139ULL,
     9223372036854775097ULL,
     9223372036854775073ULL,
     9223372036854775057ULL,
     9223372036854774959ULL,
     9223372036854774937ULL,
     9223372036854774917ULL,
     9223372036854774893ULL,
     9223372036854774797ULL,
     9223372036854774739ULL,
     9223372036854774713ULL,
     9223372036854774679ULL,
     9223372036854774629ULL,
     9223372036854774587ULL,
     9223372036854774571ULL,
     9223372036854774559ULL,
     9223372036854774511ULL,
     9223372036854774509ULL,
     9223372036854774499ULL,
     9223372036854774451ULL,
     9223372036854774413ULL,
     9223372036854774341ULL,
     9223372036854774319ULL,
     9223372036854774307ULL,
     9223372036854774277ULL,
     9223372036854774257ULL,
     9223372036854774247ULL,
     9223372036854774233ULL,
     9223372036854774199ULL,
     9223372036854774179ULL,
     9223372036854774173ULL,
     9223372036854774053ULL,
     9223372036854773999ULL,
     9223372036854773977ULL,
     9223372036854773953ULL,
     9223372036854773899ULL,
     9223372036854773867ULL,
     9223372036854773783ULL,
     9223372036854773639ULL,
     9223372036854773561ULL,
     9223372036854773557ULL,
     9223372036854773519ULL,
     9223372036854773507ULL,
     9223372036854773489ULL,
     9223372036854773477ULL,
     9223372036854773443ULL,
     9223372036854773429ULL,
     9223372036854773407ULL,
     9223372036854773353ULL,
     9223372036854773293ULL,
     9223372036854773173ULL,
     9223372036854773069ULL,
     9223372036854773047ULL,
     9223372036854772961ULL,
     9223372036854772957ULL,
     9223372036854772949ULL,
     9223372036854772903ULL,
     9223372036854772847ULL,
     9223372036854772801ULL,
     9223372036854772733ULL,
     9223372036854772681ULL,
     9223372036854772547ULL,
     9223372036854772469ULL,
     9223372036854772429ULL,
     9223372036854772367ULL,
     9223372036854772289ULL,
     9223372036854772241ULL,
     9223372036854772169ULL,
     9223372036854772141ULL,
     9223372036854772061ULL,
     9223372036854772051ULL,
     9223372036854772039ULL,
     9223372036854771989ULL,
     9223372036854771977ULL,
     9223372036854771973ULL,
     9223372036854771953ULL,
     9223372036854771869ULL,
     9223372036854771841ULL,
     9223372036854771833ULL,
     9223372036854771797ULL,
     9223372036854771749ULL,
     9223372036854771737ULL,
     9223372036854771727ULL,
     9223372036854771703ULL,
     9223372036854771689ULL,
     9223372036854771673ULL,
     9223372036854771613ULL,
     9223372036854771571ULL,
     9223372036854771569ULL,
     9223372036854771563ULL,
     9223372036854771559ULL,
     9223372036854771541ULL,
     9223372036854771487ULL,
     9223372036854771457ULL,
     9223372036854771451ULL,
     9223372036854771239ULL,
     9223372036854771227ULL,
     9223372036854771149ULL,
     9223372036854771109ULL,
     9223372036854771071ULL,
     9223372036854771023ULL,
     9223372036854771017ULL,
     9223372036854770939ULL,
     9223372036854770911ULL,
     9223372036854770813ULL,
     9223372036854770749ULL,
     9223372036854770723ULL,
     9223372036854770591ULL,
     9223372036854770569ULL,
     9223372036854770351ULL,
     9223372036854770321ULL,
     9223372036854770309ULL,
     9223372036854770287ULL,
     9223372036854770203ULL,
     9223372036854770153ULL,
     9223372036854770129ULL,
     9223372036854770027ULL,
     9223372036854769939ULL,
     9223372036854769921ULL,
     9223372036854769823ULL,
     9223372036854769799ULL,
     9223372036854769763ULL,
     9223372036854769721ULL,
     9223372036854769459ULL,
     9223372036854769421ULL,
     9223372036854769369ULL,
     9223372036854769357ULL,
     9223372036854769331ULL,
     9223372036854769303ULL,
     9223372036854769289ULL,
     9223372036854769249ULL,
     9223372036854769243ULL,
     9223372036854769231ULL,
     9223372036854769163ULL,
     9223372036854769141ULL,
     9223372036854769103ULL,
     9223372036854769099ULL,
     9223372036854769063ULL,
     9223372036854769061ULL,
     9223372036854769009ULL,
     9223372036854768973ULL,
     9223372036854768967ULL,
     9223372036854768841ULL,
     9223372036854768823ULL,
     9223372036854768773ULL,
     9223372036854768743ULL,
     9223372036854768679ULL,
     9223372036854768539ULL,
     9223372036854768509ULL,
     9223372036854768497ULL,
     9223372036854768467ULL,
     9223372036854768451ULL,
     9223372036854768427ULL,
     9223372036854768347ULL,
     9223372036854768337ULL,
     9223372036854768269ULL,
     9223372036854768157ULL,
     9223372036854768101ULL,
     9223372036854768083ULL,
     9223372036854767971ULL,
     9223372036854767881ULL,
     9223372036854767839ULL,
     9223372036854767819ULL,
     9223372036854767713ULL,
     9223372036854767633ULL,
     9223372036854767609ULL,
     9223372036854767509ULL,
     9223372036854767483ULL,
     9223372036854767383ULL,
     9223372036854767371ULL,
     9223372036854767293ULL,
     9223372036854767237ULL,
     9223372036854767161ULL,
     9223372036854767131ULL,
     9223372036854767087ULL,
     9223372036854767083ULL,
     9223372036854767021ULL,
     9223372036854766969ULL,
     9223372036854766963ULL,
     9223372036854766943ULL,
     9223372036854766859ULL,
     9223372036854766787ULL,
     9223372036854766771ULL,
     9223372036854766751ULL,
     9223372036854766541ULL,
     9223372036854766387ULL};
  const UInt LARGEST_PRIME = BIG_UINT_PRIMES[0];
  const UInt SMALLEST_PRIME = BIG_UINT_PRIMES[BIG_UINT_PRIMES_SIZE-1];


  inline UInt prime_no(unsigned i)
  {
    return BIG_UINT_PRIMES[i % BIG_UINT_PRIMES_SIZE];
  }


  // A vector of prime numbers computed using the segmented sieve
  // method
  class PrimeVector {
  public:

    static const std::size_t DEFAULT_SEGMENT_SIZE = 32768;

    PrimeVector() : primes_() {}

    PrimeVector(UInt limit, std::size_t segmentsize = DEFAULT_SEGMENT_SIZE)
      : primes_()
    {
      segmented_sieve_(limit, segmentsize);
    }

    void generate_primes(UInt limit,
                         std::size_t segmentsize = DEFAULT_SEGMENT_SIZE)
    {
      clear();
      segmented_sieve_(limit, segmentsize);
    }

    void clear()
    {
      primes_.clear();
    }

    std::size_t size()
    {
      return primes_.size();
    }

    UInt operator[] (std::size_t i) const
    {
      return primes_[i];
    }

    UInt * data()
    {
      return primes_.data();
    }

    const UInt * data() const
    {
      return primes_.data();
    }

    operator bool()
    {
      return !primes_.empty();
    }

  private:
    void segmented_sieve_(UInt limit,
                          std::size_t segmentsize = DEFAULT_SEGMENT_SIZE);

  private:
    std::vector<UInt> primes_;
  };


  // Utility function.  Satisfies prime_pi(invprime_bound(n)) > n,
  // where prime_pi is the prime counting function, by some
  // significant but not too large margin.  Useful if you need n
  // primes, in which case you use safely use invprime_bound(n) as
  // upper limit in the generator.
  inline UInt invprime_bound(UInt n_primes)
  {
    return UInt(1.25 * n_primes * std::log(n_primes) + 20);
  }



} // namespace fflow


#endif // FFLOW_PRIMES_HH
