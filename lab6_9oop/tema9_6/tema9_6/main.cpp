#include <iostream>
using namespace std;

class Weapon {
public:
    int powerLevel;
    virtual void fire() = 0;
    virtual void load() = 0;
    virtual int power() { return powerLevel; }
    virtual ~Weapon() {}
};

class Sling : public Weapon {
public:
    virtual void get_rocks() = 0;
    virtual ~Sling() {}
};

class AtomicBomb : public Weapon {
public:
    virtual void deploy_bomb() = 0;
    virtual ~AtomicBomb() {};
};

class Gun : public Weapon {
public:
    virtual void aim() = 0;
    virtual ~Gun() {}
};

class Rifle : public Gun {
public:
    virtual void clean_barrel() = 0;
    virtual ~Rifle() {}
};

class MachineGun : public Rifle {
public:
    virtual void clean_barrel() override {
        cout << "Barrel is clean.\n";
    }
    virtual void aim() override {
        cout << "Now aiming.\n";
    }
    virtual void load() override {
        cout << "Loaded.\n";
        cout << "Current power is " << this->power() << endl;
    }
    virtual void fire() override {
        cout << "Machine gun is firing!";
    }
    virtual ~MachineGun() {}
};

int main() {
    MachineGun machineGun;
    machineGun.powerLevel = 100;
    machineGun.clean_barrel();
    machineGun.aim();
    machineGun.load();
    machineGun.fire();
    return 0;
}