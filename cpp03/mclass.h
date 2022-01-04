#ifndef _MCLASS_H_
#define _MCLASS_H_

class MClass
{
public:
    static void publicStaticMethod();
    void publicMethod();
    int publicValue;
    static int publicStaticValue;

private:
    static void privateStaticMethod();
    void privateMethod();
    int privateValue;
    static int privateStaticValue;
};
#endif