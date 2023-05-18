// ======================================================================
// \title  SampleComponent.hpp
// \author chammard
// \brief  hpp file for SampleComponent component implementation class
// ======================================================================

#ifndef SampleComponent_HPP
#define SampleComponent_HPP

#include "SampleDeployment/SampleComponent/SampleComponentComponentAc.hpp"

namespace SampleDeployment {

class SampleComponent : public SampleComponentComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Construction, initialization, and destruction
    // ----------------------------------------------------------------------

    //! Construct object SampleComponent
    //!
    SampleComponent(const char* const compName /*!< The component name*/
    );

    //! Destroy object SampleComponent
    //!
    ~SampleComponent();

  PRIVATE:
    // ----------------------------------------------------------------------
    // Command handler implementations
    // ----------------------------------------------------------------------

    //! Implementation for TODO command handler
    //! TODO
    void TODO_cmdHandler(const FwOpcodeType opCode, /*!< The opcode*/
                         const U32 cmdSeq           /*!< The command sequence number*/
    );
};

}  // end namespace SampleDeployment

#endif
