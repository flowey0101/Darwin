#pragma once

#include "state_interface.h"
#include "frame/common/application.h"
#include "frame/logger.h"

namespace darwin::state {

    class StateDisconnected : public StateInterface {
    public:
        StateDisconnected(frame::common::Application& app);
        ~StateDisconnected() override = default;
        void Enter() override;
        void Update() override;
        void Exit() override;

    private:
        frame::common::Application& app_;
        frame::Logger& logger_ = frame::Logger::GetInstance();
    };

} // namespace darwin::state.