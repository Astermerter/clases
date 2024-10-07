#ifndef CLASSES
#define CLASSES

class Lamp {
public:
    Lamp();
    Lamp(float init_force, float init_power, bool init_condition);
    Lamp(const Lamp& other);

    void setForce(float input_force);
    void setPower(float input_power);
    void setCondition(bool input_condition);

    float getForce();
    float getPower();
    bool getCondition();

private:
    float force;    // 0-inf
    float power;    // 0-inf
    bool condition; // 0-1
};

bool test(float test_force = 15, float test_power = 10, bool test_condition = true);

#endif // !CLASSES 
