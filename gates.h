#include <cstdlib>
#include <iostream>
#include <string>

struct wire{
    class Gate* in;
    class Gate* out;
    bool val;
};

class Gate{
    private:
        struct wire *inputs;
        struct wire output;
        bool outValue;
        int delay;
    protected:
        /* Default constructor*/
        Gate();
        /* Constructor */
        Gate(struct wire *inputs, struct wire out, int delay,
                bool outValue);
        /* Default destructor */
        ~Gate();
        /* Setters */
        void setInputWires(struct wire *inputs);
        virtual void setWireOut(struct wire outputs);
        virtual void setOutValue();
        virtual void setDelay(int delay);
        /* Getters */
        struct wire* inputGetValues();
        struct wire outGetValue();
        bool getOutputValue();
        int getDelayValue();
        /* friends! */
        friend class And;
        friend class Nand;
        friend class Or;
        friend class Nor;
        friend class Xor;
        friend class Xnor;
        friend class Not;
};
