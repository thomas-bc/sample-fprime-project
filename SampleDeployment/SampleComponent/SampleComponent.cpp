// ======================================================================
// \title  SampleComponent.cpp
// \author chammard
// \brief  cpp file for SampleComponent component implementation class
// ======================================================================

#include <FpConfig.hpp>
#include <SampleDeployment/SampleComponent/SampleComponent.hpp>

namespace SampleDeployment {

// ----------------------------------------------------------------------
// Construction, initialization, and destruction
// ----------------------------------------------------------------------

SampleComponent ::SampleComponent(const char* const compName) : SampleComponentComponentBase(compName) {}

SampleComponent ::~SampleComponent() {}

// ----------------------------------------------------------------------
// Command handler implementations
// ----------------------------------------------------------------------

void SampleComponent ::TODO_cmdHandler(const FwOpcodeType opCode, const U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // end namespace SampleDeployment
