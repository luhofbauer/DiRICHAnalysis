#ifndef MODULE_H
#define MODULE_H

#include "Fiber.h"

/// The Module class represents the whole module. 
/// It has a vector member holding 256 Fiber Objects (whole module).

class Module
{
 public:
  Module();
  Module(const Module &module);
  virtual ~Module();

  /// add a signal to the module
  void addSignal(Signal &signal);

  /// get the overall number of signals in the module
  Float_t getNSignals();

  /// get the number of fibers that have a signal
  Int_t   getNFibers();

  /// get the fiber vector
  inline std::vector<Fiber> getFibers() { return mFibers; }

  /// remove all signals from the module
  void reset();

 private:

  void init();

 	std::vector<Fiber>  mFibers{}; ///< holds all fibers of the module

	ClassDef(Module,1);
};

#endif