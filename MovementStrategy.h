#pragma once

namespace corsim
{

    class MovementStrategy {
    public:
    virtual ~MovementStrategy() = default;
        MovementStrategy() = default;
        //must be virtual to override
        virtual double subjectSpeed() = 0;

    private:
    };
}