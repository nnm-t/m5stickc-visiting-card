#pragma once

class IState
{
public:
    virtual void Begin() = 0;

    virtual void Update() = 0;
};