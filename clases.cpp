#include "head.h"
#include <assert.h>

Lamp::Lamp() {
    force = 0;
    power = 0;
    condition = false;
}

Lamp::Lamp(float init_force, float init_power, bool init_condition) {
    if (init_force >= 0)
        force = init_force;
    if (init_power >= 0)
        power = init_power;
    condition = init_condition;
}

Lamp::Lamp(const Lamp& another) {
    if (another.force >= 0)
        force = another.force;
    if (another.power >= 0)
        power = another.power;
    condition = another.condition;
}

void Lamp::setForce(float input_force) {
    if (input_force >= 0)
        force = input_force;
}

void Lamp::setPower(float input_power) {
    if (input_power >= 0)
        power = input_power;
}

void Lamp::setCondition(bool input_condition) {
    condition = input_condition;
}

float Lamp::getForce() {
    return force;
}

float Lamp::getPower() {
    return power;
}

bool Lamp::getCondition() {
    return condition;
}

bool test(float test_force, float test_power, bool test_condition) {
    Lamp lamp1;
    if (lamp1.getForce() != 0)
        return false;
    if (lamp1.getPower() != 0)
        return false;
    if (lamp1.getCondition() != false)
        return false;

    Lamp lamp2(5.0f, 10.0f, true);
    if (lamp2.getForce() != 5.0f)
        return false;
    if (lamp2.getPower() != 10.0f)
        return false;
    if (lamp2.getCondition() != true)
        return false;

    Lamp lamp3 = lamp2;
    if (lamp3.getForce() != lamp2.getForce())
        return false;
    if (lamp3.getPower() != lamp2.getPower())
        return false;
    if (lamp3.getCondition() != lamp2.getCondition())
        return false;

    lamp1.setForce(test_force);
    if (lamp1.getForce() != test_force) 
        return false;
    lamp1.setPower(test_power);
    if (lamp1.getPower() != test_power) 
        return false;
    lamp1.setCondition(test_condition);
    if (lamp1.getCondition() != test_condition)
        return false;

    return true;
}
