#pragma once

#include "MovementStrategy.h"

namespace corsim
{
    class LockdownMovementStrategy: public MovementStrategy {
        public:
        double subjectSpeed() override;
    };
}